#include <cmath>

class ASum {
public:
    static long long findNb(long long m) {
        long long sqrtM = sqrt(m);
        if (sqrtM * sqrtM != m) {
            return -1;
        }
        long long c = 2 * sqrtM;
        long long d = 1 + 4 * c;
        long long sqD = sqrt(d);
        if (sqD * sqD != d) {
            return -1;
        }
        if ((sqD - 1) % 2 != 0) {
            return -1; 
        }
        
        long long n = (sqD - 1) / 2;
        if ((n * (n + 1) / 2) * (n * (n + 1) / 2) == m) {
            return n;
        }

        return -1;
    }
};
