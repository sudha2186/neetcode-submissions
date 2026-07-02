class Solution {
public:
    void reverseString(vector<char>& a) {
        char temp;
        int st = 0, end = a.size() - 1;
        int idx = 0;
        while(st < end) {
            temp = a[st];
            a[idx++] = a[end];
            a[end] = temp;
            st++; end--;
        }
    }
};