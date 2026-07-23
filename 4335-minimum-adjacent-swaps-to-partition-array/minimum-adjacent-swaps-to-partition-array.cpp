class Solution {
public:
    const int mod = 1e9 + 7;
    long long ans = 0;
    void merge(vector <int> &a, int low, int mid, int high) {
        vector <int> temp;
        int left = low, right = mid + 1;
        while (left <= mid && right <= high) {
            if (a[left] <= a[right]) {
                temp.push_back(a[left++]);
            }
            else {
                temp.push_back(a[right++]);
                ans = (ans + mid - left + 1) % mod;
            }
        }
        while (left <= mid) {
            temp.push_back(a[left++]);
        }
        while (right <= high) {
            temp.push_back(a[right++]);
        }
        for (int i = low; i <= high; i++) {
            a[i] = temp[i - low];
        }
    }
    void mergesort(vector <int> &nums, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergesort(nums, low, mid);
            mergesort(nums, mid + 1, high);
            merge(nums, low, mid, high);
        }
    }
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < a) nums[i] = 0;
            else if (nums[i] >= a && nums[i] <= b) nums[i] = 1;
            else nums[i] = 2;
        }
        mergesort(nums, 0, nums.size() - 1);
        return ans;
    }
};