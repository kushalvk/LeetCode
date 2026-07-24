class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> firstIndex;
        firstIndex[0] = -1;

        int prefix = 0;
        int maxLen = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 0)
                prefix += -1;
            else
                prefix += 1;

            if(firstIndex.count(prefix)) {
                maxLen = max(maxLen, i - firstIndex[prefix]);
            }
            else {
                firstIndex[prefix] = i;
            }
        }

        return maxLen;
    }
};