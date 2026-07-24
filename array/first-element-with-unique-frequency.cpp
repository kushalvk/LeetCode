class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1 = nums;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[nums1[i]]++;
        }

        unordered_map<int, int> freqCount;
        for (auto &p : freq) {
            freqCount[p.second]++;
        }
        
        for (int k = 0; k < n; k++) {
            if(freqCount[freq[nums1[k]]] == 1) {
                return nums[k];
            }
        }

        return -1;
    }
};