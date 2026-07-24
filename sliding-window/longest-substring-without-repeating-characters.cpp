class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxNum = 0;

        for (int i = 0; i < s.size(); i++) {

            vector<char> characters;

            for (int j = i; j < s.size(); j++) {

                bool found = false;

                for (char c : characters) {
                    if (c == s[j]) {
                        found = true;
                        break;
                    }
                }

                if (found)
                    break;

                characters.push_back(s[j]);

                maxNum = max(maxNum, (int)characters.size());
            }
        }

        return maxNum;
    }
};