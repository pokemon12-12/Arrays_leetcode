class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int> mp;   // 🔧 added
        int j = 0;
        int max_ele = 0;             // 🔧 INT_MIN not needed

        for(int i = 0; i < n; i++) {
            mp[fruits[i]]++;         // 🔧 add current fruit

            while(mp.size() > 2) {   // 🔧 fix condition
                mp[fruits[j]]--;
                if(mp[fruits[j]] == 0) {
                    mp.erase(fruits[j]);
                }
                j++;                 // shrink window
            }

            max_ele = max(max_ele, i - j + 1);
        }
        return max_ele;
    }
};