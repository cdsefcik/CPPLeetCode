/*
runtime beats 100% and space beats 60%.
Given an array of strings wordsDict and two different strings that already exist in the array word1 and word2, return the shortest distance between these two words in the list.

 

Example 1:

Input: wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "coding", word2 = "practice"
Output: 3
Example 2:

Input: wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "makes", word2 = "coding"
Output: 1
 

Constraints:

2 <= wordsDict.length <= 3 * 104
1 <= wordsDict[i].length <= 10
wordsDict[i] consists of lowercase English letters.
word1 and word2 are in wordsDict.
word1 != word2
*/

class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {

        std::vector<int> word1I;
        std::vector<int> word2I;
        int index[100000] = {0};

        for(int i = 0; i < wordsDict.size(); i++){
            if(word1 == wordsDict[i]){
                word1I.push_back(i);
            }
            else if(word2 == wordsDict[i]){
                word2I.push_back(i);
            }else{
                continue;
            }
        }
    int shortdist = 100000;
    for(const auto& value1 : word1I){
        for(const auto& value2 : word2I){
            if(std::abs(value1-value2)< shortdist){
                shortdist = std::abs(value1-value2);
            }
        }
    }

    return shortdist;
    }
};
