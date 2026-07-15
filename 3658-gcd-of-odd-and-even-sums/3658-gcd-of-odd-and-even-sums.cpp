class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1=n+(n-1)*n;
        int sum2=2*n+(n-1)*n;
        return __gcd(sum1,sum2);

    }
};