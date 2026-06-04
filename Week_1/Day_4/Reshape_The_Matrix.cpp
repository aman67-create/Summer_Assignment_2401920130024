class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c)
            return mat;

        vector<vector<int>> result(r, vector<int>(c));

        int k = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                int oldRow = k / n;
                int oldCol = k % n;

                result[i][j] = mat[oldRow][oldCol];

                k++;
            }
        }

        return result;
    }
};
