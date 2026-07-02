class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int st1 = 0,st2 = 0;
        string ans = "";
        while(st1 < word1.length() && st2 < word2.length()) {
            ans += word1[st1];
            ans += word2[st2];
            st1++; st2++;
        }
        while(st1 < word1.length()) {
            ans += word1[st1++];
        }
        while(st2 < word2.length()) {
            ans += word2[st2++];
        }
        return ans;
    }
};