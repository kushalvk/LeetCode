class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> duplicated;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1]) {
                duplicated.push_back(nums[i]);
            }
        }

        return duplicated;
    }
};