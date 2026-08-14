class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt = 0;
        int curr_alt = 0;
        
        for (int g : gain) {
            curr_alt += g;
            max_alt = max(max_alt, curr_alt);
        }
        
        return max_alt;
    }
};