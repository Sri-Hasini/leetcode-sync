class Solution {
public:
    int numSquares(int n) {
        // Generate all perfect squares less than or equal to n
        vector<int> squares;
        for (int i = 1; i * i <= n; ++i) {
            squares.push_back(i * i);
        }

        // Case 1: If n is a perfect square
        if (squares.back() == n) return 1;

        // Case 2: Check if n is a sum of 2 perfect squares
        for (int i = 0; i < squares.size(); ++i) {
            for (int j = 0; j < squares.size(); ++j) {
                if (squares[i] + squares[j] == n) return 2;
            }
        }

        // Case 3: Check if n is a sum of 3 perfect squares
        for (int i = 0; i < squares.size(); ++i) {
            for (int j = 0; j < squares.size(); ++j) {
                for (int k = 0; k < squares.size(); ++k) {
                    if (squares[i] + squares[j] + squares[k] == n) return 3;
                }
            }
        }

        // Case 4: Lagrange's theorem guarantees that the answer is 4
        return 4;
    }
};
