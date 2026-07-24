class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(maxEnding, minEnding);
            }

            maxEnding = max(nums[i], maxEnding * nums[i]);
            minEnding = min(nums[i], minEnding * nums[i]);

            answer = max(answer, maxEnding);
        }

        return answer;
    }
};