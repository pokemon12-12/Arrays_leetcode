class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int k = 0;
            for (int j = 0; j <= i; j++) {
                if (nums[i] == nums[j]) {
                    k++;
                }
            }
            if (k > 2) {
                nums.erase(nums.begin() + i);
                i--;
                n--;
            }
        }
        
        return nums.size();
    }
};