class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int zero_count = 0;
        int max_so_far = 0;
        int n = nums.size();

        for(int j = 0; j < n; j++) {

            if(nums[j] == 0) {
                zero_count++;
            }

            while(zero_count > k) {
                if(nums[i] == 0) {
                    zero_count--;
                }
                i++;
            }

            int current_len = j - i + 1;
            max_so_far = max(max_so_far, current_len);
        }

        return max_so_far;
    }
};