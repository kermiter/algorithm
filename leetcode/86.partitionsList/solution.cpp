#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution{
    public:
        ListNode* partition(ListNode* head, int x) {
            ListNode*p1=NULL,*p2=head;
            while(p2)
            {
                if(p2->val<x)
                {
                    if(!p1)p1=head;
                    else p1=p1->next;
                    if(p1!=p2)
                    {   int tmp=p1->val;
                        p1->val=p2->val;
                        p2->val=tmp;
                    
                    }
                }
                p2=p2->next;
            }
            return head;
    }

};
int main()
{
    ListNode head(1),node1(4),node3(3),node2(2),node22(2),node5(5);
    head.next=&node1;
    node1.next=&node3;
    node3.next=&node2;
    node2.next=&node22;
    node22.next=&node5;
    Solution ans;
    ListNode *head0=ans.partition(&head,3);
    for(ListNode *s=head0;s;s=s->next)
        cout<<s->val<<",";
    return 0;
}

/*
 *ListNode node1(0), node2(0);
    ListNode *p1 = &node1, *p2 = &node2;
    while (head) {
        if (head->val < x)
            p1 = p1->next = head;
        else
            p2 = p2->next = head;
        head = head->next;
    }
    p2->next = NULL;
    p1->next = node2.next;
    return node1.next;
}
 *
 *
 * */
