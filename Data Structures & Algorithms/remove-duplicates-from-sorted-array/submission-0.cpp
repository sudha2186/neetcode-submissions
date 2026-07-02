class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        for(int x : nums) {
            m[x]++;
        }
        int i = 0;
        for(auto p : m) {
            nums[i++] = p.first;
        }

        return m.size();
    }
};