class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            n = min(n, nums[i]);
        }

        return n;
    }
};