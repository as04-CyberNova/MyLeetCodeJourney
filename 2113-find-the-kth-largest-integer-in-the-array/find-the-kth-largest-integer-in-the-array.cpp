class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto comp = [](const string& a, const string& b) {
            if (a.size() != b.size()) {
                return a.size() > b.size();
            }
            return a > b;
        };

        sort(nums.begin(), nums.end(), comp);

        return nums[k - 1];
    }
};