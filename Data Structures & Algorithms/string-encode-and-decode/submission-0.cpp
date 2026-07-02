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

        while (i < s.length()) {
            string len = "";

            // Read length
            while (s[i] != '#') {
                len += s[i];
                i++;
            }

            int n = stoi(len);

            // Skip '#'
            i++;

            // Extract string of length n
            string word = s.substr(i, n);
            ans.push_back(word);

            // Move to next encoded string
            i += n;
        }

        return ans;
    }
};