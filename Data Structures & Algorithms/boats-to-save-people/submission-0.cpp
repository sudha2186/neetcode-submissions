class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int count = 0;

        int st = 0;
        int end = people.size() - 1;

        while (st <= end) {

            vector<int> wt;

            if (st == end) {
                wt.push_back(people[st]);
                count++;
                break;
            }

            int sum = people[st] + people[end];

            if (sum <= limit) {
                wt.push_back(people[st]);
                wt.push_back(people[end]);
                st++;
                end--;
            } else {
                wt.push_back(people[end]);
                end--;
            }

            count++;
        }

        return count;
    }
};