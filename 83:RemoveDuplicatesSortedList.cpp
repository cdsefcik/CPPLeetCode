/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:

Beats 100% in runtime and 89.78% with memory.

Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
 

Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.

*/

/**
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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head == nullptr){
        return head;
    }
    else if(head->next == nullptr){
        return head;
    }

    ListNode* pre = nullptr;
    ListNode* current = head;
    ListNode* post = head->next;

    while(post){
        if(current == head){
            pre = nullptr;
            current = head;
            post = head->next;
        }else if(current == nullptr){
            current = pre;
            pre = nullptr;
        }

        if(post->val == current->val){
            pre = current;
            current = post;
            post = post->next;
            delete current;
            current = nullptr;
            pre->next = post;
        }else{
            pre = current;
            current = post;
            post = post->next;
        }
    }


    return head;
    }
};
