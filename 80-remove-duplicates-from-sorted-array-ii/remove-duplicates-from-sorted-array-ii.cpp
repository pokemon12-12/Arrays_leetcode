class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for (int j = 0; j < n; j++) {

            // reset count for new element
            if (j == 0 || nums[j] != nums[j - 1]) {
                k = 1;
            } else {
                k++;
            }

            if (k > 2) {
                nums.erase(nums.begin() + j);
                j--;   // adjust index after deletion
                n--;   // update size
            }
        }
        return nums.size();
    }
};