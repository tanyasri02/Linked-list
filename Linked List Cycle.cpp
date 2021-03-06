// HINT: if cycle exist with terversing we will traverse a node twice 

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
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return false;
        
        unordered_set<ListNode *>s;
        
        while(head!=NULL)
        {
            if(s.find(head)!=s.end())
                return true;
            
            s.insert(head);
            
            head=head->next;
        }
        
        return false;
    }
};
