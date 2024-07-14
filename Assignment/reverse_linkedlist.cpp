#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Linked_List{
public:
    ListNode* reverseList(ListNode* head) {
        //base case
        if(head==NULL || head->next==NULL)return head;

        //recursive case
        ListNode* uh=reverseList(head->next);
        ListNode* ch=head;
        ch->next->next=ch;
        ch->next=NULL;
        return uh;
    }
};

   