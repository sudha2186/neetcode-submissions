class Solution {
public:
    bool possible(vector<int>& weights, int days, int capacity) {
        int currentLoad = 0, required_days = 1;
        for(int weight : weights) {
            if(currentLoad + weight > capacity) {
                required_days++;
                currentLoad = 0;
            }
            currentLoad += weight;
        }
        return required_days <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high) {
            int mid = low + (high - low)/2;
            if(possible(weights, days, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};