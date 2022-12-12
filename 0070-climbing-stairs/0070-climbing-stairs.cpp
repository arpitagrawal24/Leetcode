class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 )return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        int res = 0;
        int a = 1,b = 2; //a for n-2 and b for n-1 element
        for(int i = 3 ; i <= n ; i++)
        {
            res = a+b; // nth step has to possiblity either add 1 to n-1th ways or add 2 to n-2th ways of movement
            a = b; 
            b = res;
        }
        return res;
    }
};