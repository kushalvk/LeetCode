class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = 0;
        
        for(int x : cardPoints) {
            totalSum += x;
        }

        if(k == n) return totalSum;

        int windowSize = n - k;
        int window = 0;

        for(int i = 0; i < windowSize; i++) {
            window += cardPoints[i];
        }

        int mn = window;

        for(int j = windowSize; j < n; j++) {
            window += cardPoints[j];
            window -= cardPoints[j - windowSize];
            mn = min(mn, window);
        }

        return totalSum - mn;
    }
};