class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int st1 = 0,st2 = 0;
        string ans = "";
        if(word1.length() >= word2.length()) {
            while(st2 < word2.length()) {
                ans += word1[st1];
                ans += word2[st2];
                st1++; st2++;
            }
            for(int i = st1; i < word1.length(); i++) {
                ans += word1[i];
            }
        } else if(word1.length() < word2.length()) {
            while(st1 < word1.length()) {
                ans += word1[st1];
                ans += word2[st2];
                st1++; st2++;
            }
            for(int i = st2; i < word2.length(); i++) {
                ans += word2[i];
            }
        }
        return ans;
    }
};