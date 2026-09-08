class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length();
        int i = n- 1;
        while(i>=0){
            if(num[i]!='0'){
                return num;
            }
            else{
                num.erase(i,1);
            }
            i--;
        }
        return num;
    }
};