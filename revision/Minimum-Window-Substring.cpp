class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        int have = 0;
        for (auto x : t) {
            mp[x]++;
        }
        int need = mp.size();

        int l = 0;
        int r = 0;

        unordered_map<char, int> mp2;
        pair<int, int> p = {-1, -1};

        string ans = "";
        int minWidth = INT_MAX;

        while (r < s.length()) {
            if (mp.find(s[r]) != mp.end()) {
                mp2[s[r]]++;

                if (mp2[s[r]] == mp[s[r]]) {
                    have++;
                }
            }

            if (have == need) {

                while (have == need) {
                    if ((r - l + 1) < minWidth) {
                        p = {l, r};
                        minWidth = r - l + 1;
                    }
                    if (mp.find(s[l]) != mp.end()) {
                        mp2[s[l]]--;

                        if (mp2[s[l]] < mp[s[l]]) {
                            have--;
                        }
                    }
                    l++;
                }
            }

            r++;
        }

        return minWidth == INT_MAX ? "" : s.substr(p.first, minWidth);
    }
};
