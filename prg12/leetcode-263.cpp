class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int row = grid.size();
        int col = grid[0].size();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                if (grid[i][j] == 1) {
                    perimeter += 4;

                    if (i > 0 && grid[i - 1][j] == 1)
                        perimeter -= 2;

                    if (j > 0 && grid[i][j - 1] == 1)
                        perimeter -= 2;
                }
            }
        }

        return perimeter;
    }
};
/*class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                if(grid[i][j] == 1) {

                    // Top
                    if(i == 0 || grid[i-1][j] == 0)
                        perimeter++;

                    // Bottom
                    if(i == rows-1 || grid[i+1][j] == 0)
                        perimeter++;

                    // Left
                    if(j == 0 || grid[i][j-1] == 0)
                        perimeter++;

                    // Right
                    if(j == cols-1 || grid[i][j+1] == 0)
                        perimeter++;
                }
            }
        }

        return perimeter;
    }
};

grid =
[
 [0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]
]

*/