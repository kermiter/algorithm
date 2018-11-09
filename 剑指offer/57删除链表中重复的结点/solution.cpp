#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ListNode{
    int val;
    struct ListNode *next;
    ListNode(int x):val(x),next(NULL){
        
    }


};
class Solution{
    public:
        ListNode* deleteDuplication(ListNode* pHead){
            if(pHead==NULL||pHead->next==NULL)
            {
                return pHead;
            }
            ListNode *pBegin = NULL;
            ListNode *pEnd   = NULL;
            ListNode *p=pHead,*pNext=nullptr;
            bool bBegin=true,bEnd=true;
            while(p)
            {
                pNext=p->next;
                if(!bBegin&&!pEnd)
                {
                    if(pBegin)
                        pBegin->next=NULL;
                    else
                        pHead=NULL;
                    break;
                
                }

                
                if(p->val==pNext->val)
                {
                    if(bBegin)
                    {
                        bBegin=false;
                    }
                
                }
                else
                {
                    if(bBegin)
                    {
                        pBegin=p;
                    }
                    else
                    {
                        pEnd=pNext;
                        bEnd=false;          
                    }
                    if(!bBegin&&!bEnd)
                    {
                    
                        p->next=NULL;
                        if(pBegin==NULL)
                        {
                            deleteListNode(pHead);
                            pHead=pEnd;
                        }
                        else
                        {
                            deleteListNode(pBegin->next);
                            pBegin->next=pEnd;
                        }
                        p=pEnd;
                        bBegin=true;
                        bEnd =true;
                        continue;
                    }
                }
            p=p->next; 
            
            
            
            }
            //for(ListNode *p=pHead;p;p=p->next)
              //  cout<<"p->val:"<<p->val<<",";
            return pHead;
        }
        void deleteListNode(ListNode*pNode)
        {
            if(!pNode)
            {
                return;
            }
            ListNode* p=pNode,*pdel=NULL;
            while(p)
            {
                pdel=p->next;
                //free(p);
                p=pdel;
            
            }
            p=NULL;
            return;
        }

};
int main()
{
    ListNode Head(2),*pHead=NULL;
    ListNode node2(2),node22(2),node3(3),node33(3),node4(4),node5(4);
    Head.next  =&node2;
    node2.next =&node22;
    node22.next=&node3;
    node3.next=&node33;
    node33.next=&node4;
    node4.next =&node5;
    cout<<"before delete:"<<endl;
    for(ListNode *s=&Head;s;s=s->next)
        cout<<s->val<<",";
    cout<<"after delete:"<<endl;
    Solution s;
    pHead=s.deleteDuplication(&Head);
    for(ListNode *s=pHead;s;s=s->next)
        cout<<s->val<<",";
    
    return 0;
}

