/**
 * @file     searchMatrix2.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        
        int row = 0;
        int col = matrix[0].size() - 1;
        
        while(row < matrix.size() && col >= 0) {
            if(matrix[row][col] == target) {
                return true;
            }
            else if(matrix[row][col] > target) {
                col--;
            }
            else {
                row++;
            }
        }

        return false;
    }
};