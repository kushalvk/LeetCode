class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> newarray;

        for (int i : nums) {
            long long pt = i;
            while (!newarray.empty() && newarray.back() == pt) {
                pt += newarray.back();
                newarray.pop_back();
            }
            newarray.push_back(pt);
        }

        return newarray;
    }
};