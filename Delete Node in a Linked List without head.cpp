//appoarch :phich nhi ptaa age to ptaa hai na

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
    void deleteNode(ListNode* pos) {
        if(pos==NULL||pos->next==NULL)
            return;
        
        ListNode *temp=pos->next;
        
        pos->val=pos->next->val;
        
        pos->next=temp->next;
        
        delete temp;
    }
};
