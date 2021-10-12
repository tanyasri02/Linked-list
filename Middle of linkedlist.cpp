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
    ListNode* middleNode(ListNode* head) {
        ListNode *ptr=head;
        ListNode *mid=head;
        
        while(ptr!=NULL&&ptr->next!=NULL)
        {   
            mid=mid->next;
            ptr=ptr->next;
            ptr=ptr->next;
        }
        return mid;
    }
};
