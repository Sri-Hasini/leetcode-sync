class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> p;
        int i = 0, j = 0;
        p.insert({i, j});
        for (int k = 0; k < path.size(); k++) {
            if (path[k] == 'N') {
                i++;
                if (p.find({i, j}) == p.end())
                p.insert({i, j});
                else return true;
            }
            else if (path[k] == 'S') {
                i--;
                if (p.find({i, j}) == p.end())
                p.insert({i, j});
                else return true;
            }
            else if (path[k] == 'W') {
                j--;
                if (p.find({i, j}) == p.end())
                p.insert({i, j});
                else return true;
            }
            else if (path[k] == 'E') {
                j++;
                if (p.find({i, j}) == p.end())
                p.insert({i, j});
                else return true;
            }
        }
        return false;
    }
};