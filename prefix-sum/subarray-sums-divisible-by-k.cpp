class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(), count = 0, sum = 0;
        map<int, int> freq;
        freq[0] = 1;

        for (int j = 0; j < n; j++) {
            sum += nums[j];
            int rem = sum % k;

            if (rem < 0)
                rem += k;

            if (freq.find(rem) != freq.end()) {
                count += freq[rem];
            }

            freq[rem]++;
        }

        return count;
    }
};