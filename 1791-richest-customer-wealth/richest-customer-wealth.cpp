class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int n = accounts.size();
        vector<int> wealth;

        // Step 1: sum krenge (per customer)
        for (vector<int> x : accounts) {
            int sum = 0;
            for (int i = 0; i < x.size(); i++) {
                sum += x[i];
            }
            wealth.push_back(sum);
        }

        // Step 2: sort using swap (your idea)
        for (int i = 0; i < wealth.size(); i++) {
            for (int j = i + 1; j < wealth.size(); j++) {
                if (wealth[i] < wealth[j]) {
                    swap(wealth[i], wealth[j]);
                }
            }
        }

        // Step 3: max wealth at index 0
        return wealth[0];
    }
};