class Solution {
public:
    set<vector<int>> s;
    void comb_sum(vector<int>& candidates, int tar, vector<int> &comb, int i, vector<vector<int>> &ans) {
        int n = candidates.size();
        if(i == n || tar < 0) return;
        if(tar == 0) {
            if(s.find(comb) == s.end()) {
                ans.push_back({comb});
                s.insert(comb);
        }
        }
        comb.push_back(candidates[i]);
        comb_sum(candidates, tar - candidates[i], comb, i+1, ans);
        comb_sum(candidates, tar - candidates[i], comb, i, ans);
        comb.pop_back();
        comb_sum(candidates, tar, comb, i+1, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        comb_sum(candidates, target, comb, 0, ans);
        return ans;
    }
};