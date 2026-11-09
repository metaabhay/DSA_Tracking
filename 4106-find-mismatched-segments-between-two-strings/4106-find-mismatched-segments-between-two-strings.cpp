class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {

        int n = s1.size();
        vector<vector<string>> ans;

        int i = 0;

        while (i < n) {

            if (s1[i] != s2[i]) {

                int start = i;

                // Find the end of the mismatched segment
                while (i < n && s1[i] != s2[i]) {
                    i++;
                }

                // Extract both substrings
                string sub1 = s1.substr(start, i - start);
                string sub2 = s2.substr(start, i - start);

                ans.push_back({sub1, sub2});
            }
            else {
                i++;
            }
        }

        return ans;
    }
};