class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size(), n = matrix[0].size();
        int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;
        while(srow <= erow && scol <= ecol) {
            for(int i = scol; i <= ecol; i++) {
                ans.push_back(matrix[srow][i]);
            }
            for(int j = srow + 1; j <= erow; j++) {
                ans.push_back(matrix[j][ecol]);
            }
            for(int k = ecol - 1; k >= scol; k--) {
                if(srow == erow) break;
                ans.push_back(matrix[erow][k]);
            } 
            for(int l = erow - 1; l >= srow + 1; l--) {
                if(ecol == scol) break;
                ans.push_back(matrix[l][scol]);
            }
            srow++; erow--; ecol--; scol++;
        }
        return ans;
    }
};
