class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int tar, int row) 
    {
        int m = mat.size(), n = mat[0].size();
        int st = 0, end = n - 1;
        while(st <= end) {
            int mid = st + (end - st)/2;
            if(tar == mat[row][mid]) return true;
            else if(tar > mat[row][mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size(), n = mat[0].size();
        int st = 0, end = m - 1;
        while(st <= end) {
            int mid = st + (end - st)/2;
            if(tar >= mat[mid][0] && tar <= mat[mid][n-1]) {
                return searchInRow(mat, tar, mid);
            } else if(tar >= mat[mid][n-1]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
};