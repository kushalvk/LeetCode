class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for (string &word : words) {
            int totalWeight = 0;

            for (char c : word) {
                totalWeight += weights[c - 'a'];
            }

            int r = totalWeight % 26;
            char mappedChar = 'z' - r;
            ans.push_back(mappedChar);
        }

        return ans;
    }
};