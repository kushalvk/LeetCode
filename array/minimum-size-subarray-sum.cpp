class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int minLen = INT_MAX;
        int window_sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            window_sum += nums[i];
            while(window_sum >= target) {
                minLen = min(minLen, i - l + 1);
                window_sum -= nums[l];
                l++;
            }
        }

        if(minLen == INT_MAX) {
            return 0;
        }

        return minLen;
    }
};