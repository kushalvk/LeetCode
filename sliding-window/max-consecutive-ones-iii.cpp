class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        
        int l = 0, r = 0;
        int zeroCount = 0;
        int maxlen = 0;

        for (r = 0; r < n; r++) {
            
            if (nums[r] == 0) {
                zeroCount++;
            }

            while (zeroCount > k) {
                if (nums[l] == 0) {
                    zeroCount--;
                }
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
        }

        return maxlen;
    }
};