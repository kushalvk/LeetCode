class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0;i < n; i++) {
            int sum = 0;
            for(int j = i + 1; j <n; j++) {
                sum += nums[j];
            }

            float avg = (float)sum / (n - i - 1);

            if(nums[i] > avg) {
                count++;
            }
        }

    return count;
    }
};