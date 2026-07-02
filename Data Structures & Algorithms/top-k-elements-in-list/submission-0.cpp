class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        
        // Step 1: count frequency
        for(int num : nums) {
            freq[num]++;
        }

        // Step 2: store in vector as (frequency, number)
        vector<pair<int,int>> v;
        for(auto it : freq) {
            v.push_back({it.second, it.first});
        }

        // Step 3: sort by frequency descending
        sort(v.begin(), v.end(), greater<>());

        // Step 4: take top k elements
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
