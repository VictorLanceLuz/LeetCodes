/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val; // Copy next node into this node.
        node->next = node->next->next; // Skip to the node after next node.
        //delete node->next;
    }
};
// @lc code=end

