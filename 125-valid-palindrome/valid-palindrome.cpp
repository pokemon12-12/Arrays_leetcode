class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1: keep only alphanumeric and lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Step 2: reverse string
        string rev = cleaned;
        reverse(rev.begin(), rev.end());

        // Step 3: compare
        return cleaned == rev;
    }
};