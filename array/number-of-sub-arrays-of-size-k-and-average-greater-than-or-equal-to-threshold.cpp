class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int window = 0;

        for(int i = 0; i < k; i++) {
            window += arr[i];
        }
        
        int count = 0;
        if((window/k) >= threshold) count++;

        for(int j = k; j < n; j++) {
            window += arr[j];
            window -= arr[j - k];

            if((window/k) >= threshold) count++;
        }

        return count;
    }
};