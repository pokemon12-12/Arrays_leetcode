class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=1;i<=n;i++){
            if((i&1)!=0){
                for(int j=0;j<=n-i;j++){
                    for(int k=j;k<j+i;k++){
                        sum += arr[k];
                    }
                }
            }
        }
        return sum;
    }
};