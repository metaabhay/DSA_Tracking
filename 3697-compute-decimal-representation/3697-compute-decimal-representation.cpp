class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long p = 1;
        while(n > 0){
            long long i = (n%10)*p;
            p = p*10;
            if(i>0) ans.push_back(i);
            n = n/10;
        }
        reverse(begin(ans),end(ans));
        return ans;

    }
};