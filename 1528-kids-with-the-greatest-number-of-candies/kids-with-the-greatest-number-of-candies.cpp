class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>result;
        int max_array=INT_MIN;
        //Aranging the array of candies in desc order
        for(int i=0;i<n;i++){
            if(candies[i]>=max_array){
                max_array=candies[i];          }
        }
        //now comparing the conditions
        for(int i=0;i<n;i++){
            if((candies[i]+ extraCandies)>=max_array){
                 result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};