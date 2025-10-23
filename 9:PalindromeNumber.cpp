/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Runtime beats 21.34% and Memory beats 20.92%

 Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
*/

class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0){return false;}
        else if((x > 0) && (x < 10)){return true;}
        
        else{
            string number = std::to_string(x);

            for(int i = 0, j = number.length() - 1; i <= number.length() / 2 && j >= number.length() / 2; i++, j-- ){
                if(number[i] != number[j]){return false;}
                else{
                    continue;
                }
            }
        return true;
        }
    }
};
