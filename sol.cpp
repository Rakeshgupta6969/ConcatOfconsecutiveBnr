class Solution {
    public:
        const int mod = 1e9 + 7;
    
        int concatenatedBinary(int n) {
            long long result = 0;
            int length = 0;
    
            for (int i = 1; i <= n; ++i) {
                // If i is power of 2, increase bit length
                if ((i & (i - 1)) == 0) {
                    ++length;
                }
    
                result = ((result << length) % mod + i) % mod;
            }
    
            return result;
        }
    };