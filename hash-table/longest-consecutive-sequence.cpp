class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int ConSeq = 1;
        int longest = 1;

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                ConSeq++;
            } else if (nums[i] != nums[i - 1]) {
                ConSeq = 1;
            }
            longest = max(longest, ConSeq);
        }

        return longest;
    }
};