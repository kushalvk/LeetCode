class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size();
        set<vector<int>> ansSet;
        sort(arr.begin(), arr.end());

        for(int i = 0; i < n - 3; i++) {
            for(int j = i + 1; j < n - 2; j++) {
                int l = j + 1;
                int r = n - 1;
                while(l < r) {
                    long long sum = (long long)arr[i] + arr[j] + arr[l] + arr[r];
                    if(sum == target) {
                        ansSet.insert({arr[i], arr[j], arr[l], arr[r]});
                    }
                    if(sum < target) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }

        vector<vector<int>> ans(ansSet.begin(), ansSet.end());

        return ans;
    }
};