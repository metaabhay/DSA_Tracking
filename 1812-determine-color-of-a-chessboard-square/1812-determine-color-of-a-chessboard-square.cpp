class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n = 2;
        int sum  = 0;
        for(int i=0;i<2;i++){
            sum += int(coordinates[i]-'0');
        }
        if(sum%2==0) return false;
        return true;
    }
};