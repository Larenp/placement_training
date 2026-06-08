class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        vector<vector<int>> temp(n, vector<int>(n));

        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                temp[i][j] = mat[j][i];
            }
        }
        for (int i = 0; i < temp[0].size(); i++) {
            reverse(temp[i].begin(), temp[i].end());
        }
        if (temp == target) {
            return true;
        } else {
            vector<vector<int>> temp2(n, vector<int>(n));
            for (int i = 0; i < temp.size(); i++) {
                for (int j = 0; j < temp[0].size(); j++) {
                    temp2[i][j] = temp[j][i];
                }
            }
            for (int i = 0; i < temp2[0].size(); i++) {
                reverse(temp2[i].begin(), temp2[i].end());
            }
            if (temp2 == target) {
                return true;
            } else {
                vector<vector<int>> temp3(n, vector<int>(n));
                for (int i = 0; i < temp.size(); i++) {
                    for (int j = 0; j < temp[0].size(); j++) {
                        temp3[i][j] = temp2[j][i];
                    }
                }
                for (int i = 0; i < temp2[0].size(); i++) {
                    reverse(temp3[i].begin(), temp3[i].end());
                }
                if (temp3 == target) {
                    return true;
                } else {

                    vector<vector<int>> temp4(n, vector<int>(n));
                    for (int i = 0; i < temp.size(); i++) {
                        for (int j = 0; j < temp[0].size(); j++) {
                            temp4[i][j] = temp3[j][i];
                        }
                    }
                    for (int i = 0; i < temp3[0].size(); i++) {
                        reverse(temp4[i].begin(), temp4[i].end());
                    }
                    if (temp4 == target) {
                        return true;
                    }
                }
            }
        }
        return false;
        ;
    }
};