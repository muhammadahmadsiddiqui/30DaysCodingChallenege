// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for (int i = 0; i < s.size(); i++) {
            map1[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            map2[t[i]]++;
        }

        if (map1 == map2) {
            return true;
        } else {
            return false;
        }
    }
};
