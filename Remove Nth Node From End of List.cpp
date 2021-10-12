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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * slow=head;
        ListNode * fast=head;
        ListNode * temp=NULL;
        
        for(int i=1;i<=n;i++)
            fast=fast->next;
        while(fast!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next;
        }
        
        if(!temp)
            return slow->next;
        temp->next=slow->next;
        delete slow;
        return head;
    }
};
