class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        vector<int> freq1(26, 0), freq2(26, 0);
        // for string s1 frequency 
        for(char c : s1) freq1[c - 'a']++;
        // sliding window
        int windowSize = s1.length();
        for(int i = 0; i < s2.length(); i++) {
            // Add current character
            freq2[s2[i] - 'a']++;

            // remove character if window size exceeds
            if(i >= windowSize) {
                freq2[s2[i - windowSize] - 'a']--;
            }

            // compare if window size matches exact
            if(i >= windowSize - 1) {
                if(freq1 == freq2) return true;
            }
        }
        return false;
    }
};