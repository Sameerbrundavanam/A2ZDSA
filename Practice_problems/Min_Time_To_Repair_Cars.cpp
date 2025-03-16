class Solution {
    public:
        long long repairCars(vector<int>& ranks, int cars) {
            long long l = 1, h = 1LL * cars * cars * ranks[0];
            while (l < h) {
                long long mid = l + (h - l) / 2, fixedCars = 0;
                for (auto r : ranks) fixedCars += sqrt(1.0 * mid / r);
                if (fixedCars < cars)
                    l = mid + 1;
                else
                    h = mid;
            }
            return l;
        }
    };
    