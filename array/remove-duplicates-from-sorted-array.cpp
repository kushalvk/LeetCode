class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        vector<int> arr;
        arr.push_back(nums[0]);
        
        for(int fast = 1; fast < nums.size(); fast++) {
            if(nums[fast] != nums[slow]) {
                slow++;
                nums[slow] = nums[fast];
                arr.push_back(nums[slow]);
            }
        }

        return arr.size();
    }
};