/**
Beat 100% runtime and 55.03% memory or solutions.

Given a string num which represents an integer, return true if num is a strobogrammatic number.

A strobogrammatic number is a number that looks the same when rotated 180 degrees (looked at upside down).

 

Example 1:

Input: num = "69"
Output: true
Example 2:

Input: num = "88"
Output: true
Example 3:

Input: num = "962"
Output: false
 

Constraints:

1 <= num.length <= 50
num consists of only digits.
num does not contain any leading zeros except for zero itself.


**/

class Solution {
public:
    bool isStrobogrammatic(string num) {
        
        for(int i = 0, j = num.length()-1; i < num.length(); i ++, j--){
            
            if((i == j) && (num[i] == '8' || num[i] == '1' || num[i] == '0')){
                return true;
            }else if((num[i] == '6' && num[j] == '9') || (num[i] == '9' && num[j] == '6')){
                continue;
            }
            else if(!((num[i] == '8' && num[j] == '8') || (num[i] == '1' && num[j] == '1')|| (num[i] == '0' && num[j] == '0'))){
                return false;
            }
        }
        return true;
    }
};
