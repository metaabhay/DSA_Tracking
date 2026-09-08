class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xo = 0;
        for(auto it : derived){
            xo ^= it;
        }
        if(xo == 0) return true;
        return false;
    }
};