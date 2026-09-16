class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<2;i++){
            sum1 += int(coordinate1[i] - '0');
            sum2 += int(coordinate2[i] - '0');
        }
        if(abs(sum2-sum1)%2==0) return true;
        return false;
    }
};