class Solution {
public:
    int maxDepth(string s) {
        int n =  s.length();
        stack<int> st1;
        int i  =0;
        int maxi = 0;
        while(i<n){
            if(s[i]=='('){
                st1.push(s[i]);
                if(maxi < st1.size()){
                    maxi = st1.size();
                }
            }
            else if(s[i]==')' && !st1.empty()){
                st1.pop();
            }
            i++;
        }
        return maxi;
    }
};