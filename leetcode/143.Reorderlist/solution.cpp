#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct ListNode{
      int val;
      ListNode  *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution{
    public:
        void reorderList(ListNode* head) {
            if(head==NULL||head->next==nullptr||head->next->next==nullptr)
                return;
            ListNode*p1=head,*p2=head;
            //获取后半链表
            while(p2&&p2->next)
            {
                p1=p1->next;
                p2=p2->next->next;
            }
            p2=p1->next;
            p1->next=nullptr;
            //翻转后半链表
            ListNode *pre=NULL,*curr=p2,*Next=p2->next;
            while(Next)
            {
                curr->next=pre;
                pre=curr;
                curr=Next;
                Next=Next->next;
            
            }
            curr->next=pre;
            p2=curr;
            p1=head;
            ListNode *tmp=NULL;
            while(p2)
            {
                tmp=p1->next;
                p1->next=p2;
                p2=p2->next;
                p1->next->next=tmp;
                p1=tmp;
            }
            p1=head;
            while(p1)
            {
                if(p1->next)
                    cout<<p1->val<<"->";
                else
                    cout<<p1->val;
                p1=p1->next;
            }
            return;
    }


};
int main()
{
    ListNode head(1),head2(2),head3(3),head4(4),head5(5);
    head.next=&head2;
    head2.next=&head3;
    head3.next=&head4;
    head4.next=&head5;
    Solution ans;
    ans.reorderList(&head);

    return 0;
}
