class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int max_ele=INT_MIN;
        int j=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
            while(count>1){
                if(j<i && nums[j]==0){
                    count--;
                }
                j++;
            }
            max_ele=max(max_ele,i-j+1);
        }

        return max_ele-1;
            
    }
};