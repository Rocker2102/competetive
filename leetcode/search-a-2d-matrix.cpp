/* https://leetcode.com/problems/search-a-2d-matrix/ */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            if (target <= matrix[i][matrix[i].size() - 1]) {
                for (int j = 0; j < matrix[i].size(); j++) {
                    if (matrix[i][j] == target) {
                        return true;
                    }
                }
                break;
            }
        }

        return false;
    }
};
