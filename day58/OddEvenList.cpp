#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int data ;
    ListNode* next ;
}

ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }

int main() {
    return 0 ;
}