class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        // Dp se bhi try kiya but tle aa rha hain and dp is bcz yaha take or not take ki baat ho rhi hain
        // Now we will do it with the help of priority Queue
        // Intuition second array ko sort kr dnegey desc order mein and uske jo relative ordering thi pehle first array ke saath uske according first array ko bhi kr dengey
        // or majorly min heap ka use hogaa
        // vector<pair<int,int>> then sort the second one in desc
        // Ksum = o to k-1 -> nums1
        // result = Ksum * vec[k-1].second   
        // for(int i=k;i<n;i++)
        //  vec[i].second
        // ksum += vec[i].first - pq.top();
        //pq.pop();
        //pq.push(vec[i].first)
        // result = max(result,ksum8vec[i].second)
        int n = nums1.size();
        vector<pair<int,int>> ans(n);
        for(int i=0;i<n;i++){
            ans[i] = {nums1[i],nums2[i]};
        }

        auto lambda = [&](auto &P1,auto &P2){
            return P1.second > P2.second;
        };

        sort(begin(ans),end(ans),lambda);

        priority_queue<int,vector<int>,greater<int>> pq;

        long long ksum = 0;

        for(int i=0;i<=k-1;i++){
            ksum += ans[i].first;
            pq.push(ans[i].first);
        }

        long long result = ksum*ans[k-1].second;
        for(int i=k;i<n;i++){
            //taking minimum as ans[i].second

            ksum += ans[i].first - pq.top();
            pq.pop();

            pq.push(ans[i].first);

            result = max(result,ksum*ans[i].second);
        }
        return result;
    }
};