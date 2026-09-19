class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> freq(10,0);
        int m = n;
        int mini = INT_MAX;
        int a = INT_MAX;
        while(n>0){
            int i = n%10;
            freq[i]++;
            n = n/10;
        }
        for(int i=0;i<10;i++){
            if(freq[i]!=0) mini = min(freq[i],mini);
        }

        for(int i=0;i<10;i++){
            if(mini==freq[i]){
                return i;
            }
        }
        return -1;
    }
};