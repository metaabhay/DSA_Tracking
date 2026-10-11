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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* a = nullptr;
        ListNode* b = nullptr;
        ListNode* taila = nullptr;
        ListNode* tailb = nullptr;
        ListNode* temp = head;
        while(temp != nullptr){
            if(temp->val < x){
                if(a==nullptr){
                    a = taila = new ListNode(temp->val);
                }
                else{
                    ListNode* s = new ListNode(temp->val);
                    taila->next = s;
                    taila = taila->next;
                }
            }
            else{
                if(b==nullptr){
                    b = tailb = new ListNode(temp->val);
                }
                else{
                    ListNode* t = new ListNode(temp->val);
                    tailb->next = t;
                    tailb = tailb->next;
                }
            }
            temp = temp->next;
        }
        if(a==nullptr) return b;
        if(b==nullptr) return a;
        ListNode* z = a;
        while(z->next != nullptr){
            z = z->next;
        }
        z->next = b;
        return a;

    }
};