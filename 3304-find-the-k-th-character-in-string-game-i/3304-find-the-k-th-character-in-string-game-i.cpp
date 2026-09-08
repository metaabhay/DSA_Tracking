class Solution {
public:
    char kthCharacter(int k) {
        string ans = "a";
        while(ans.length() < k){
            string s = "";
            for(int i=0;i<ans.size();i++){
                s += (ans[i] + 1);
            }
            ans.append(s);
        }
        return ans[k-1];
    }
};