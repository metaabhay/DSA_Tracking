class Solution {
public:
    long long countCommas(long long m) {
        //if (m < 1000) return 0;
        long long count = 1;
        long long lower = 1000;
        long long result = 0;

        while(lower<=m){
            long long upper = (lower*1000) - 1;
            if(upper > m) upper =m;
            long long sum = (upper - lower + 1);
            result += sum*count;
            lower *= 1000;
            count++;
        }
        return result;
    }
};