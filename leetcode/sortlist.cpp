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
    ListNode* sortList(ListNode* head) {
        // trivially, pour numbers into array, sort, then remake the singly list.

        // pour numbers out, sort, then trade numbers with original.

        int l[50000];
        int i=0;
        ListNode* temp = head;
        while(head) {
            l[i]=head->val;
            head = head->next;
            i++;
        }

        sort(l, l+i);

        ListNode* res = temp;
        for (int j=0;j<i && temp;j++, temp=temp->next) {
            temp->val = l[j];
        }

        return res;
    }
};