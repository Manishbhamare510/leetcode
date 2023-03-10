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
    ListNode* swapNodes(ListNode* head, int k) {
        int ct=0;
        ListNode* temp = head;
        while (temp){
            ct += 1;
            temp = temp->next;
        }
        int i=k-1;
        int j=ct-k;
        ListNode* a = head;
        ListNode* b = head;
        while(i--){
            a=a->next;
        }
        while(j--){
            b=b->next;
        }
        swap(a->val,b->val);
        return head;
    }
};
