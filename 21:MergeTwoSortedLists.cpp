/**
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 Runtime beats 100% of solutions, memory beats 62.68% of solutions.

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.



 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    if(!list1 && !list2){
        return list1;
    }

    if(list1 && !list2){
        return list1;
    }

    if(!list1 && list2){
        return list2;
    }

    ListNode* list3;
        if (list1->val <= list2->val) {
            list3 = list1;
            list1 = list1->next;
        } else {
            list3 = list2;
            list2 = list2->next;
        }

        ListNode* temp3 = list3;
    

    
    while (list1 && list2) {
            if (list1->val <= list2->val) {
                temp3->next = list1;
                list1 = list1->next;
            } else {
                temp3->next = list2;
                list2 = list2->next;
            }
            temp3 = temp3->next;
        }

        temp3->next = list1 ? list1 : list2;
        return list3;
    
    return list3; 
    }
};
