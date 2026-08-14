class NumArray {
    vector<int> p = {0};
public:
    NumArray(vector<int>& nums) {
        for (int n : nums) p.push_back(p.back() + n);
    }
    
    int sumRange(int left, int right) {
        return p[right + 1] - p[left];
    }
};