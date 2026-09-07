class Solution {
public:
    int sumBase(int n, int k) {
        int p = 1;
        int ans = 0;
        int x = 0;
        while(n > 0){
            ans = ans + ((n%k)*p);
            x += n%k;
            p = p*10;
            n = n/k;
        }
        return x;
        
    }
};