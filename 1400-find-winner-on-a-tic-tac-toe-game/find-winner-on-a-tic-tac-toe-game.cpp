class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j] = -1;
            }
        }
        for (int i = 0; i < moves.size(); i++) {
            if (i % 2 == 0)
            a[moves[i][0]][moves[i][1]] = 1;
            else a[moves[i][0]][moves[i][1]] = 0;
        }
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != -1) {
            if (a[0][0] == 1) return "A";
            else return "B";
        }
        if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] != -1) {
            if (a[0][0] == 1) return "A";
            else return "B";
        }
        if (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] != -1) {
            if (a[1][0] == 1) return "A";
            else return "B";
        }
        if (a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] != -1) {
            if (a[2][0] == 1) return "A";
            else return "B";
        }
        if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] != -1) {
            if (a[0][0] == 1) return "A";
            else return "B";
        }
        if (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] != -1) {
            if (a[0][1] == 1) return "A";
            else return "B";
        }
        if (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] != -1) {
            if (a[0][2] == 1) return "A";
            else return "B";
        }
        if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != -1) {
            if (a[0][2] == 1) return "A";
            else return "B";
        }
        if (moves.size() == 9)
        return "Draw";
        return "Pending";
    }
};