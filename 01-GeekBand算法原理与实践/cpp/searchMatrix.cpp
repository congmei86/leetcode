/**
 * @file     searchMatrix.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || target < matrix[0][0] || target > matrix[matrix.size()-1][matrix[0].size()-1]) {
            return false;
        } 

        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = m * n - 1; // 转换成一维数组进行折半查找

        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(matrix[mid/n][mid%n] == target) {
                return true;
            }
            else if(matrix[mid/n][mid%n] > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return false;
    }
};