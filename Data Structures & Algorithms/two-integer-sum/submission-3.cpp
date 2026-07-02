class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while(i < j) {
           int sum = v[i].first + v[j].first;
           if(sum == target) {
            int idx1 = v[i].second;
            int idx2 = v[j].second;
            if(idx1 > idx2) swap(idx1, idx2);
            return {idx1, idx2};
           } else if(sum < target) {
               i++;
           } else {
               j--;
           }
        }
        return {};
    }
};
