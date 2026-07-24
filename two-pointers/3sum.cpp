class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> tempSet;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n - 1;

            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0) {
                    tempSet.insert({nums[i], nums[l], nums[r]});
                    r--;
                    l++;
                }
                else if(sum < 0) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        vector<vector<int>> ans(tempSet.begin(), tempSet.end());

        return ans;
    }
};