class Solution {
public:
    int countdigits(long long n) {
        int count = 0;
        while(n != 0) {
            n = n / 10;
            count++;
        }
        return count;
    }

    int countCommas(long long n) {
        long long a = 0;
        int sum = 0;

        if(n <= 999) return 0;

        for(long long i = 1000; i <= n; i++){
            a = countdigits(i);
            sum += (a - 1) / 3;
        }

        return sum;
    }
};