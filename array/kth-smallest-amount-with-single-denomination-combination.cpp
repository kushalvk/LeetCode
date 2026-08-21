class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) {

        sort(coins.begin(), coins.end());
        coins.erase(unique(coins.begin(), coins.end()), coins.end());

        vector<int> v;

        for (int coin : coins) {
            bool redundant = false;

            for (int x : v) {
                if (coin % x == 0) {
                    redundant = true;
                    break;
                }
            }

            if (!redundant)
                v.push_back(coin);
        }

        coins = v;

        auto gcd = [](long long a, long long b) {
            while (b) {
                long long temp = a % b;
                a = b;
                b = temp;
            }
            return a;
        };

        auto lcm = [&](long long a, long long b) { return a / gcd(a, b) * b; };

        auto count = [&](long long x) {
            long long total = 0;
            int n = coins.size();

            for (int mask = 1; mask < (1 << n); mask++) {
                long long L = 1;
                int bits = 0;
                bool overflow = false;

                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        bits++;

                        L = lcm(L, coins[i]);

                        if (L > x) {
                            overflow = true;
                            break;
                        }
                    }
                }

                if (overflow)
                    continue;

                long long cnt = x / L;

                if (bits % 2 == 1)
                    total += cnt;
                else
                    total -= cnt;
            }

            return total;
        };

        long long low = 1;
        long long high = 1LL * (*min_element(coins.begin(), coins.end())) * k;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (count(mid) >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};