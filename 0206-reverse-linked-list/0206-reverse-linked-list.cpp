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
    ListNode* reverseList(ListNode* head) {
        ListNode*temp;
        ListNode*temp2;
        if(head == nullptr || head->next == nullptr)
            return head;
        temp = head->next;
        temp2 = temp->next;
         head->next = nullptr;
        while(temp!=nullptr)
        {
            temp->next = head;
            
            head = temp;
            temp = temp2;
            if(temp2 == nullptr)
                return head;
            if(temp2->next == nullptr)
            {
                temp->next = head;
            
                head = temp;
                temp = temp2;
                break;
            }
                
            temp2 = temp->next;
            
        }
        return head;
    }
};