class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (target > matrix[mid][m - 1]) {
                low = mid + 1;
            }
            else if (target < matrix[mid][0]) {
                high = mid - 1;
            }
            else {
                int l = 0, r = m - 1;

                while (l <= r) {
                    int mid1 = l + (r - l) / 2;

                    if (matrix[mid][mid1] == target)
                        return true;
                    else if (matrix[mid][mid1] < target)
                        l = mid1 + 1;
                    else
                        r = mid1 - 1;
                }

                return false;
            }
        }

        return false;
    }
};