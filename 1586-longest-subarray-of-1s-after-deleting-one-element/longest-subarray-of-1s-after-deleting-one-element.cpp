class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, zeroCount = 0, maxLen = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) zeroCount++;

            while (zeroCount > 1) {
                if (nums[i] == 0) zeroCount--;
                i++;
            }

            maxLen = max(maxLen, j - i);
        }

        return maxLen;
    }
};