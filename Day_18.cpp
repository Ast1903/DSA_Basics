// problem 1(Valid Anagram)
class Solution {
    public:
        bool isAnagram(string s, string t) {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s == t;
        }};

time complexity: O(n log n).
space complexity: O(1).

// problem 2(longest common perfix)
class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];  // Start with the first string

    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {  // Reduce prefix if it doesn't match
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}
};

time complexity: O(N×M)).
space complexity: O(1).
