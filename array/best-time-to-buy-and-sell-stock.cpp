class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = INT_MAX;
        int maxP = 0;
        for(int price : prices) {
            minP = min(minP, price);
            maxP = max(maxP, price - minP);
        }
        return maxP;
    }
};