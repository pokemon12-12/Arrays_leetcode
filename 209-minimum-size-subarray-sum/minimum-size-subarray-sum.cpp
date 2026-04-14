class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int i=0,j=0;
        int min_m=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
            int lenght=j-i+1;
            sum-=nums[i];
            i++;
            min_m=min(min_m,lenght);
        }
        j++;
        }
        return (min_m == INT_MAX) ? 0 : min_m;
    }
};