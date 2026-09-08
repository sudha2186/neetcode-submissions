class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int OR = 0;

        for (int x : nums)
            OR |= x;

        return OR << (nums.size() - 1);   // OR * 2^(n-1)
    }
};