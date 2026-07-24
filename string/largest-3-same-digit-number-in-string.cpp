class Solution {
public:
    string largestGoodInteger(string num) {
        int maxNum = -1;
        int count = 1;
        for(int i = 1; i < num.size(); i++) {
            if(num[i] == num[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            if(count == 3) {
                maxNum = max(maxNum, num[i] - '0');
            }
        }

        string OutString = maxNum == -1 ? "" : to_string(maxNum) + to_string(maxNum) + to_string(maxNum);
        return OutString;
    }
};