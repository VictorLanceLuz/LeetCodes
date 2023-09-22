#include <iostream>
using namespace std;
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
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr)  {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* dummyHead = new ListNode(0); // Make the head for result.
            ListNode* current = dummyHead;
            int carry = 0;
            while (l1 != nullptr || l2 !=  nullptr || carry != 0) {
                int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
                carry = sum / 10;
                int digit = sum % 10; // Calculate the  digit to be placed in the result list.
                
                current->next = new ListNode(digit); // Create a new node with the result inside.
                current = current->next;

                // Move to next node.
                l1 = (l1 != nullptr) ? l1->next : nullptr;
                l2 = (l2 != nullptr) ? l2->next : nullptr;
            }

            return dummyHead->next; // Return actual result, not the dummy head.
        }
};
int main() {
    Solution S;

    cout << "Hello World" << endl;
    // Create ListNode objects for List 1
    ListNode* nodeA1 = new ListNode(1);
    ListNode* nodeA2 = new ListNode(2);
    ListNode* nodeA3 = new ListNode(3);

    // Helper pointer
    ListNode* helper = nodeA1;
    // Link together
    nodeA1->next = nodeA2;
    nodeA2->next = nodeA3;


    while (helper != nullptr) {
        cout << helper->val;
        helper = helper->next;
    }

    // Create another ListNode objects
    ListNode* nodeB1 = new ListNode(2);
    ListNode* nodeB2 = new ListNode(2);
    ListNode* nodeB3 = new ListNode(3);
    // Helper pointer
    helper = nodeB1;
    // Link together
    nodeB1->next = nodeB2;
    nodeB2->next = nodeB3;

    while (helper != nullptr) {
        cout << helper->val;
        helper = helper->next;
    }

    // Run the function
    ListNode* result = S.addTwoNumbers(nodeA1, nodeB1);
    
    // Print result
    cout << "Result: ";
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }

    // Clean memory
    delete nodeA1;
    delete nodeA2;
    delete nodeA3;
    delete nodeB1;
    delete nodeB2;
    delete nodeB3;

    system("pause"); // Pause the console to see the output
    return 0;
};