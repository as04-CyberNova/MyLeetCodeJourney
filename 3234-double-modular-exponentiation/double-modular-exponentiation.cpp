class Solution {
private:
    int power(int base, int exp, int mod) {
        int res = 1;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1) {
                res = (res * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }

public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> ans;
        for (int i = 0; i < variables.size(); i++) {
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int m = variables[i][3];

            int first = power(a, b, 10);
            int second = power(first, c, m);

            if (second == target) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};