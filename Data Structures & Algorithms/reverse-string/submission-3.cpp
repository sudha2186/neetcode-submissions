class Solution {
public:
    void reverseString(vector<char>& a) {
        int st = 0, end = a.size() - 1;
        while(st < end) {
            swap(a[st], a[end]);
            st++; end--;
        }
    }
};