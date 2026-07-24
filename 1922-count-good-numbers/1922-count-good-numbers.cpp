class Solution {
public:
    long long mod = 1000000007;
    long long power(long long num, long long n) {
        long long result = 1;

        while (n > 0) {

            if (n % 2 != 0) {
                result = (result * num) % mod;
            }

            num = (num * num) % mod;

            n = n / 2;
        }

        return result;
    }

    int countGoodNumbers(long long n) {

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long evenWays = power(5, even);
        long long oddWays = power(4, odd);

        return (evenWays * oddWays) % mod;
    }
};