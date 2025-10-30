/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 Runtime beats 100% and memory beats 78.61%

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
 

Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int length = digits.size();
        int carryover = 0;

        for(int i = length - 1; i >= 0; i--){
            int digit = digits.at(i); 
            if(i == length - 1){
            digit = ++digit + carryover;}
            else{
                digit = digit + carryover;
            }
            if(digit == 10){
                digits.at(i) = 0;
                carryover = 1;

            if((i == 0) && (carryover = 1)){
            digits.insert(digits.begin(),1);
            return digits;
             }

            continue;//}
            }else{
                digits.at(i) = digit;
                carryover = 0;
                break;
            }
        }
        return digits;
    }
};
