/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Beats 100% with time complexity and 52.27% with memory.

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45
*/
#include<vector>

class Solution {
public:
    int climbStairs(int n) {

    if(n == 0){
        return 0;
    }else{

    vector<int> fib = {0,1};
    int solutions = 0;


    for(int i = 1; i <= n; i++){
        fib.push_back(fib[i-1] + fib[i]);
    }
    
    return fib.back();
    } 
    }
};
