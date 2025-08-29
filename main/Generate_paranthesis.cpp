class Solution {
public:
    void giveParanthesis(int n, int b1, int b2, string s, vector<string>& ans) {

        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (b1 == b2) {
            s += '(';
            giveParanthesis(n, b1 + 1, b2, s, ans);
        } else if (b1 == n) {
            s += ')';
            giveParanthesis(n, b1, b2 + 1, s, ans);
        } else if (b1 > b2) {
            giveParanthesis(n, b1 + 1, b2, s + '(', ans);
            giveParanthesis(n, b1, b2 + 1, s + ')', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        giveParanthesis(n, 0, 0, "", ans);
        return ans;
    }
};
