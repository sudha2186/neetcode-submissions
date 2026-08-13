class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int> s;
       for(int i = 0; i < n; i++) {
        if(operations[i] == "C") {
            s.pop();
        } else if(operations[i] == "D") {
            s.push(2 * s.top());
        } else if(operations[i] == "+") {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.push(first);
            s.push(first + second);
        } else {
            s.push(stoi(operations[i]));
        }
       } 
       int sum = 0;

        while(!s.empty()) {
            sum += s.top();
            s.pop();
        }

        return sum;
    }
};