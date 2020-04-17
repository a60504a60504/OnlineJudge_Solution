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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root;
        ListNode* item;
        ListNode* item_next = NULL;
        int carry = 0;
        item = new ListNode;
        item->val = (l1->val+l2->val)%10;
        carry = (l1->val+l2->val)/10;
        item->next = item_next;
        root = item;
        while (l1->next!=NULL||l2->next!=NULL||carry!=0) {
            if (l1->next!=NULL) l1=l1->next;
            else l1->val=0;
            if (l2->next!=NULL) l2=l2->next;
            else l2->val=0;
            
            item_next = new ListNode;
            item_next->val = (l1->val+l2->val+carry)%10;
            carry = (l1->val+l2->val+carry)/10;
            item_next->next = NULL;
            item->next = item_next;
            item = item_next;
        }
        return root;
    }
};