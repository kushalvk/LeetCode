class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0;
        int nag = 1;
        int n = nums.size();

        vector<int> newarr(n);

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                newarr[pos] = nums[i];
                pos += 2;
            } else {
                newarr[nag] = nums[i];
                nag += 2;
            }
        }

        return newarr;
    }
};