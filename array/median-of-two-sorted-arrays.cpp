class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3(nums1.size() + nums2.size());

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());

        int n = nums1.size() + nums2.size();

        if(n % 2 == 0){
            return (nums3[n/2 - 1] + nums3[n/2])/2.0;
        }else{
            return nums3[n/2];
        }

    }
};