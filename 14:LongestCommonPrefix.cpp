/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Beat 5.19% of submissions both for speed and memory. 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";
        int nbrelements = strs.size();
        unordered_map<string, int> maps;

        for(auto &str: strs){
            for(int i = 1; i <= str.length(); i++){
                maps[str.substr(0,i)]++;
            }
        }

        for(auto &[key, value] : maps){
            if((value == nbrelements) & (key.length() > lcp.length())){
                lcp = key;
            }
        }
        
        return lcp;
    }
};
