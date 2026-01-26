/*
Completed on my own. Runtime beats 100% while memory beats 10%

Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

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

Input: columnTitle = "A"
Output: 1
Example 2:

Input: columnTitle = "AB"
Output: 28
Example 3:

Input: columnTitle = "ZY"
Output: 701
 

Constraints:

1 <= columnTitle.length <= 7
columnTitle consists only of uppercase English letters.
columnTitle is in the range ["A", "FXSHRXW"].

*/

class Solution {
public:
    int titleToNumber(string columnTitle) {

        int length = columnTitle.length();
        int result = 0;

        for(int i = 0, j = length - 1; i < length; i++, j--){
            char character = columnTitle[i];
            int characterNumber = (int)(character - 'A' + 1);
            result += (std::pow(26,j) * characterNumber);
        }

        return result;
    }
};
