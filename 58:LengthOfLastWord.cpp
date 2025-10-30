/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 Runtime beats 100% while memory beats 8.55% 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.

*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        string s1 = s;
        if(s1.length() == 0){
            return 0;
        }

        int counter = 0;
        int length = 0;
        bool stringClean = true;

        while(stringClean){
            string lastCharacter = s1.substr(s1.length() - 1, 1);
            if(lastCharacter == " "){
                s1.erase(s1.length() - 1);
                stringClean = true;
            }else{
            stringClean = false;
            }
        }

        while(counter < s1.length()){
            string character = s1.substr(counter, 1);
            if(character == " "){
                length = 0;
            }else{
                length++;
            }
            counter++;
        }
        return length;
    }
};
