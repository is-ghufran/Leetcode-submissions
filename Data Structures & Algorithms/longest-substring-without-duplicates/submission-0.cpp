class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0;
        int len = 0;
        unordered_set<char> st;
        for (int j = 0; j < n; j++) {
            while (st.count(s[j])) {
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            len = max(len, j - i + 1);
        }
        return len;
    }
};