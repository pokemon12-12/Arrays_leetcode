class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        double avg;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[i];
            avg=(double)sum/k;
        }
        double max_avg=avg;

    for(int i=k;i<n;i++){
        sum+=nums[i];  //add k th number
        sum-=nums[i-k]; //remove first old index number
        double new_avg=(double)sum/k;
        max_avg=max(max_avg,new_avg);
    }
    return max_avg;
    }
};