/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

Runtime beats 1.6% and memory beats 9.29%

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
 
Seen this question in a real interview before?
1/5
Yes
No
Accepted
6,749,934/15.7M
Acceptance Rate
43.1%

*/

#include <stack>

class Solution {
public:
    bool isValid(string s) {
    
    std::stack<std::string> stringstack;
    std::string s1 = s;
    int stringSize = s.length();
    bool valid = true;

    if(s.length() == 1 || s.length() == 0){
        return false;
    }

    for(int i = 0; i < stringSize; i++){
        string s2 = s1.substr(0,1);
        if((s2 == "(") || (s2 == "[") || (s2 == "{")){
        stringstack.push(s2);
        s1.erase(0,1);
        }else{
            if(stringstack.empty()){
            return false;
            }
            std::string s3 = stringstack.top();
            if(((s3 == "(") && (s2 == ")")) || ((s3 == "{") && (s2 == "}")) || ((s3 == "[") && (s2 == "]"))){
            s1.erase(0,1); 
            stringstack.pop();
            continue;
            }else{
                valid = false;
                break;
            }
        }    
    }
    if(!stringstack.empty()){
        valid = false;
    }

    return valid;
    }
};
