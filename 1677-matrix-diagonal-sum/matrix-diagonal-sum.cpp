class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    sum=sum+mat[i][j];
                }
                if (i+j==n-1){
                    sum=sum+mat[i][j];
                    if(i==n/2 && j==n/2){
                        sum=sum-mat[i][j];
                    }
                }
            }
        }
        return sum;
    }
};