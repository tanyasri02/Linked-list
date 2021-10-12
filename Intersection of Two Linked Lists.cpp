// A linked list ke har element ke liye check karo kahin yahi to == B nhi hai means this the intersection point.

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr;
        
        while(headA!=NULL)
        {
            ptr=headB;
            
            while(ptr!=NULL)
            {
                if(headA==ptr)
                    return ptr;
                ptr=ptr->next;
            }
            
            headA=headA->next;
        }
        return NULL;
    }
};
