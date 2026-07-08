class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int> ans, int i, vector<vector<int>> &allSubset) {
        if(i == nums.size()) {
            allSubset.push_back({ans});
            return;
        }
        // include
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i+1, allSubset);

        // exclude
        ans.pop_back();
        getAllSubsets(nums, ans, i+1, allSubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allSubset;
        getAllSubsets(nums, ans, 0, allSubset);
        return allSubset;
    }

};