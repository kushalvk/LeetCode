class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1);
        long long res = 1;

        for (int i = 0; i <= rowIndex; i++) {
            row[i] = res;
            res = res * (rowIndex - i) / (i + 1);
        }

        return row;
    }
};