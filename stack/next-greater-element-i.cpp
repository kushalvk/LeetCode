class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;

        for(int num : nums1) {
            int nextE = -1;
            bool flag = false;
            for(int num1: nums2) {
                if(num == num1) flag = true;
                if(flag && num1 > num) {
                    nextE = num1;
                    break;
                }
            }
            output.push_back(nextE);
        }

        return output;
    }
};