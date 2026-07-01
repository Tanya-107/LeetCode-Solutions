class Solution {
public:

  
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {

        int flowers = 0;
        int bouquets = 0;

        for (int bloom : bloomDay) {

            if (bloom <= day) {
                flowers++;
            } else {
                flowers = 0;
            }

            if (flowers == k) {
                bouquets++;
                flowers = 0;     
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

       
        if ((long long)m * k > n)
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int answer = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (canMake(bloomDay, m, k, mid)) {
                answer = mid;
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }

        return answer;
    }
};