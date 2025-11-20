/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Beats 100% in terms of runtime and 11.80% in terms of memory.
 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 

Constraints:

1 <= numRows <= 30
 
Seen this question in a real interview before?
1/5
Yes
No
Accepted
2,476,068/3.2M
Acceptance Rate
78.3%

*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    if(numRows == 1){
        result = {{1}};
        return result;
    }

    if(numRows == 2){
        result = {{1},{1,1}};
        return result;
    }

    if(numRows > 2){
    result = {{1},{1,1}};
    for(int i = 3; i <= numRows; i++){
        vector<int> priorRecord = result.at(i-2);
            for(int j = 0; j < i; j++){
                if(j == 0){
                result.push_back({1});
                }

                else if((j > 0) & (j < (i-1))){
                result[i-1].push_back(priorRecord[j-1] + priorRecord[j]);
                
                }

                else if(j == (i-1)){
                result[i-1].push_back(1);   
                }

        }
    }
    }
    
    return result;

    }
};
