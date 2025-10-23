/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Runtime beats 26.24% Memory beats 74.78%

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].
 
Seen this question in a real interview before?
1/5
Yes
No
Accepted
5,311,403/8.1M
Acceptance Rate
65.7%

*/

class Solution {
public:
    int romanToInt(string s) {
    int length = s.length();
    int solution = 0;


    if(s.length() == 0){
        return solution;
    }


    else if(s.length() ==1){
        if(s.substr(0,1) == "I"){
            solution += 1;
        }else if(s.substr(0,1) == "V"){
            solution += 5;
        }
        else if(s.substr(0,1) == "X"){
            solution += 10;
        }
        else if(s.substr(0,1) == "L"){
            solution += 50;
        }
        else if(s.substr(0,1) == "C"){
            solution += 100;
        }
        else if(s.substr(0,1) == "D"){
            solution += 500;
        }
        else if(s.substr(0,1) == "M"){
            solution += 1000;
        }
        }else{
        while(s.length() != 0){
        if(s.length() >= 2){
        if(s.substr(0,2) == "IV"){
            solution += 4;
            s.erase(0,2);
            continue;
        }else if(s.substr(0,2) == "IX"){
            solution += 9;
            s.erase(0,2);
            continue;
        }
        else if(s.substr(0,2) == "XL"){
            solution += 40;
            s.erase(0,2);
            continue;
        }
        else if(s.substr(0,2) == "XC"){
            solution += 90;
            s.erase(0,2);
            continue;
        }
        else if(s.substr(0,2) == "CD"){
            solution += 400;
            s.erase(0,2);
            continue;
        }
        else if(s.substr(0,2) == "CM"){
            solution += 900;
            s.erase(0,2);
            continue;
        }
        else if(s.substr(0,1) == "I"){
            solution += 1;
            s.erase(0,1);
            continue;
        }else if(s.substr(0,1) == "V"){
            solution += 5;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "X"){
            solution += 10;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "L"){
            solution += 50;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "C"){
            solution += 100;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "D"){
            solution += 500;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "M"){
            solution += 1000;
            s.erase(0,1);
            continue;
        }
        }
        if(s.length() == 1){
        if(s.substr(0,1) == "I"){
            solution += 1;
            s.erase(0,1);
            continue;
        }else if(s.substr(0,1) == "V"){
            solution += 5;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "X"){
            solution += 10;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "L"){
            solution += 50;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "C"){
            solution += 100;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "D"){
            solution += 500;
            s.erase(0,1);
            continue;
        }
        else if(s.substr(0,1) == "M"){
            solution += 1000;
            s.erase(0,1);
            continue;
        }
      }
    }
    }
    return solution;
    }

};
