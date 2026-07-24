class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();
        vector<int> onbulbs;
        unordered_set<int> on;
        for(int i = 0;i < n; i++) {
            if(on.count(bulbs[i])) {
                on.erase(bulbs[i]);
            } else {
                on.insert(bulbs[i]);
            }
        }

        for(int x : on) {
            onbulbs.push_back(x);
        }

        sort(onbulbs.begin(), onbulbs.end());
        return onbulbs;
    }
};