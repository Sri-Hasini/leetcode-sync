class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0, n = height.size();
        int i = 0, j = n - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            int area = h * (j - i);
            maxi = max(maxi, area);
            (height[i] < height[j]) ? i++ : j--;
        }
        return maxi;
    }
};