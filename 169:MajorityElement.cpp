/*
Completed this myself. Runtime beats 100% while memory beats 86.47%
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
The input is generated such that a majority element will exist in the array.
 

Follow-up: Could you solve the problem in linear time and in O(1) space?


*/

#include<unordered_map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int majority_element_count = 0;
    int majority_element;
    unordered_map<int,int> map;

    for(const auto& numsNumber: nums){
        map[numsNumber]++;
    }

    //Check for the count of the
    for(const auto& numsCount: map){
        if(numsCount.second > majority_element_count){
        majority_element_count = numsCount.second;    
        }
    }

    //Return the key based on the value
    for(const auto& [key,value]: map){
        if(value == majority_element_count){
        majority_element = key;  
        }
    }

    return majority_element;
    }
};
