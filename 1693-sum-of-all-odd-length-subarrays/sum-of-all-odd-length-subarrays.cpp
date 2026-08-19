class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n + 1, 0);
        
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }
        
        int totalSum = 0;
        
        for (int i = 0; i < n; i++) {
            for (int len = 1; i + len <= n; len += 2) {
                totalSum += prefix[i + len] - prefix[i];
            }
        }
        
        return totalSum;
    }
};