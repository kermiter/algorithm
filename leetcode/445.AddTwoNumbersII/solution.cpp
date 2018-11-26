#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){
    
    }


};
class Solution{
    public:

        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            if(l1==NULL)
            {
                return l2;
            }

            if(l2==NULL)
            {
                return l1;
            
            }
            stack<ListNode*>s1;
            stack<ListNode*>s2;
            ListNode *p1=l1,*p2=l2;
            while(p1)
            {
                s1.push(p1);
                p1=p1->next;
            }
            while(p2)
            {
                s2.push(p2);
                p2=p2->next;
            }
            
            int carry=0,sum=0;
            int tmp=0;
            ListNode *res=NULL,*head=NULL;
            while(!s1.empty()&&!s2.empty()){
                p1=s1.top();
                p2=s2.top();
                tmp=p1->val+p2->val+carry;
                sum=tmp%10;
                carry=tmp/10;
                ListNode *p=new ListNode(sum);
                p->next=res;
                res=p;
                s1.pop();
                s2.pop();
            }
            while(!s1.empty()){
            
                p1=s1.top();
                tmp=p1->val+carry;
                sum=tmp%10;
                carry=tmp/10;
                ListNode *p=new ListNode(sum);
                p->next=res;
                res=p;    
                s1.pop();
            }
            while(!s2.empty())
            {
                p2=s2.top();
                tmp=p2->val+carry;
                sum=tmp%10;
                carry=tmp/10;
                ListNode*p=new ListNode(sum);
                p->next=res;
                res=p;
                s2.pop();
            }
            head=res;
            if(carry==1)
            {
                ListNode *p=new ListNode(carry);
                p->next=res;
                head=p;
            
            }
            return head;
            
        }

};
int main()
{
    ListNode *p1=new ListNode(7);
    p1->next=new ListNode(2);
    p1->next->next=new ListNode(4);
    p1->next->next->next=new ListNode(3);
    ListNode *p2=new ListNode(5);
    p2->next=new ListNode(6);
    p2->next->next=new ListNode(4);
    Solution ans;
    ListNode *res=ans.addTwoNumbers(p1,p2);
    for(ListNode *p=res;p;p=p->next)
        cout<<p->val<<",";
}
