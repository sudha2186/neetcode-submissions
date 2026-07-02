class Solution {
public:
    // Encode a list of strings to a single string
    string encode(vector<string>& strs) {
        string encoded = "";

        for (string &str : strs) {
            encoded += to_string(str.length()) + "#" + str;
        }

        return encoded;
    }

    // Decode a single string back to a list of strings
    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

            while(i < s.size()) {
        int len = 0;

        while(s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        i++; // skip '#'

        ans.push_back(s.substr(i, len));

        i += len;
        }

        return ans;
    }
};