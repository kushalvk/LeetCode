class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while(i >= 0) {
            while(i >= 0 && s[i] == ' ') {
                i--;
            }

            string temp = "";

            while(i >= 0 && s[i] != ' ') {
                temp = s[i] + temp;
                i--;
            }

            if(!temp.empty()) {
                if(!ans.empty()) {
                    ans += " ";
                }
                ans += temp;
            }
        }

        return ans;
    }
};