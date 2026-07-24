class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int res = 0;
        int firstPlayer = 0;
        int secondPlayer = 0;
        bool firstactive = true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) firstactive = !firstactive;
            if ((i + 1) % 6 == 0) firstactive = !firstactive;
            if (firstactive) firstPlayer += nums[i];
            else secondPlayer += nums[i];
        }
        res = firstPlayer - secondPlayer;
        return res;
    }
};