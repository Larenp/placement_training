class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> temp(n, vector<int>(n));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                temp[i][j] = matrix[j][i];
            }
        }
        for (int i = 0; i < temp[0].size(); i++) {
            reverse(temp[i].begin(), temp[i].end());
        }
        matrix = temp;
    }
};