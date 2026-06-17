class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int t = 0;
        int b = n - 1;
        int l = 0;
        int r = m - 1;

        vector<int> v;

        while (t <= b && l <= r) {
            for (int i = l; i <= r; i++) {
                v.push_back(matrix[t][i]);
            }
            t++;
             for (int i = t; i <= b; i++) {
                v.push_back(matrix[i][r]);
            }
            r--;
            if (t <= b) {
                for (int i = r; i >= l; i--) {
                    v.push_back(matrix[b][i]);
                }
                b--;
            }

            // Left column
            if (l <= r) {
                for (int i = b; i >= t; i--) {
                    v.push_back(matrix[i][l]);
                }
                l++;
            }
        }

        return v;
    }
};