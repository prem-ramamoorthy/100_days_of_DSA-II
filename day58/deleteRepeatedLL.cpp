#include<bits/stdc++.h>
using namespace std ;

struct ListNode{
    int val ;
    ListNode* next ;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
        ListNode* head1 = head ;
        while(head1 && head1->next) {
            if(head1->val == head1->next->val){
                head1->next = head1->next->next ;
            }
            else {
                head1 = head1->next ;
            }
        }
        return head ;
    }

int main(){
    return 0 ;
}