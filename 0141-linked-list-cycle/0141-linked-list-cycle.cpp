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
        vector<ListNode*> vec;
        while(head)
        {
            vector<ListNode*>::iterator it;
            it = find (vec.begin(), vec.end(), head);
            if (it != vec.end())
            {
                return true;
            }
            else
                vec.push_back(head);
            head = head->next;
        }
        return false;
        
    }
};