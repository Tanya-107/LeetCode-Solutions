class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();
        int low = 1, high = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            high = max(high, piles[i]);
        }

        while (low <= high) {

            int mid = low + (high - low) / 2;
            long long total = 0;

            for (int i = 0; i < n; i++) {
                total += piles[i] / mid;
                if (piles[i] % mid)
                    total++;
            }

            if (total <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};