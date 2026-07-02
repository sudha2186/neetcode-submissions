class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int currWater = 0, maxWater = 0;
        int lp = 0, rp = n-1;
        while (lp < rp)
        {
            int width = rp - lp;
            int ht = min(height[lp], height[rp]);
            currWater = ht * width;
            maxWater = max(maxWater, currWater);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};