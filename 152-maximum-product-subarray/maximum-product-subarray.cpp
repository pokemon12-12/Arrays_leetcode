class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxp = INT_MIN;

        for (int i = 0; i < n; i++) {
            int currentp = 1;  // reset for each i

            for (int j = i; j < n; j++) {
                currentp *= nums[j];   // build product
                maxp = max(maxp, currentp);
            }
        }
        return maxp;
    }
};