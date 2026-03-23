class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;

        int a = 0, b = 1, c = 1;

        for(int i = 3; i <= n; i++){
            int d = a + b + c;
            a = b;//updating the "a" with the value in the b
            b = c;//updating the "b" with the value in the c
            c = d;//updating the "c" with the value in the d
        }

        return c; //At the end the updated element would be c since d is locally available(traking the last 3 digits only)
    }
};