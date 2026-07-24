class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int num: nums) {
            freq[num]++;
        }

        vector<int> unique;
        for(auto &p:freq) {
            unique.push_back(p.first);
        }

        sort(unique.begin(), unique.end());

        int m = unique.size();

        for(int i = 0;i <m; i++) {
            for(int j =i+1; j <m; j++) {
                int x = unique[i];
                int y = unique[j];

                if(freq[x] != freq[y]){
                    return {x, y};
                }
            }
        }

        return {-1, -1};
    }
};