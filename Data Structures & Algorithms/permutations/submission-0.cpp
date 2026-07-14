class Solution {
public:
    vector<vector<int>> combination(vector<int>& nums, int idx, vector<vector<int>> &ans) {
        if(idx == nums.size()) {
            ans.push_back({nums});
        }
        for(int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);
            combination(nums, idx + 1, ans);
            swap(nums[idx], nums[i]);
        }
        return ans;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        return combination(nums, 0, ans);
    }
};
