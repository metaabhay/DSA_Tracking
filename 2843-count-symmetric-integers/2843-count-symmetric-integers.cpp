class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;

        for (int x = low; x <= high; x++) {
            string s = to_string(x);
            int n = s.size();
            if (n % 2 != 0)
                continue;

            int half = n / 2;
            int sum1 = 0, sum2 = 0;

            for (int i = 0; i < half; i++) {
                sum1 += s[i] - '0';
            }

            for (int i = half; i < n; i++) {
                sum2 += s[i] - '0';
            }

            if (sum1 == sum2)
                ans++;
        }

        return ans;
    }
};