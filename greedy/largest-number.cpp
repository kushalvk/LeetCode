class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string newStr = "";

        for (int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < nums.size() - 1; i++) {
                string num1 = to_string(nums[i]);
                string num2 = to_string(nums[i + 1]);

                if (num1 + num2 < num2 + num1) {
                    swap(nums[i], nums[i + 1]);
                }
            }
        }

        for (int i : nums) {
            newStr += to_string(i);
        }

        if(newStr[0] == '0') {
            return "0";
        }

        return newStr;
    }
};