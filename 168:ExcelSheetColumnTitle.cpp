/*
Note: I was real close to this algorithm. I subtracted the one with the logic but the substraction should take place to continuously decrement the columnNumber.

Runtime beats 100% while memory beats 89.96%

Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"
 

Constraints:

1 <= columnNumber <= 231 - 1

*/

#include <algorithm>

class Solution {
public:
    string convertToTitle(int columnNumber) {

        std::string preConversion = "";

        while(columnNumber){
            columnNumber--;
            preConversion = preConversion + (char)((columnNumber) % 26 + 'A');
            columnNumber = (columnNumber) / 26;
        }
        
        std::reverse(preConversion.begin(), preConversion.end());

        return preConversion;
    }
};
