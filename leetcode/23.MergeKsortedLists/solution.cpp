#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
struct mycmp{
    bool operator()(ListNode *p1,ListNode *p2)
    {
        
        return (p1->val)>(p2->val);
    }

};
class Solution{
    public:
        ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode *,vector<ListNode*>,mycmp>pq;            
        for(ListNode* l:lists)
        {
            if(l)
            {
                pq.push(l);
            }
        }

        ListNode* head=NULL,*p=NULL;
        while(!pq.empty()){
        
            ListNode*l=pq.top();
            pq.pop();
            if(l)
            {    if(!head)
                {
                    head=new ListNode(l->val);
                    p=head;
            
                }
                else
                {
                    p->next=new ListNode(l->val);
                    p=p->next;
                
                }
                l=l->next;
                if(l)
                pq.push(l);
            }
        }
        if(p)
            p->next=NULL;
        return head;
    }

};
int main()
{


    return 0;
}


/*
 *class Solution {
    struct compare {
        bool operator()(const ListNode* l, const ListNode* r) {
            return l->val > r->val;
        }
    };
    
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        priority_queue<ListNode *, vector<ListNode *>, compare> q;
        for (auto l : lists) {
            if (l) {
                q.push(l);
            }
        }
        
        if (q.empty()) {
            return NULL;
        }
        
        ListNode* result = q.top();
        q.pop();
        if (result->next) {
            q.push(result->next);
        }

        ListNode* tail = result;            
        while (!q.empty()) {
            tail->next = q.top();
            q.pop();
            tail = tail->next;
            if (tail->next) {
                q.push(tail->next);
            }
        }
        
        return result;
    }
};

 *
 *
 *
 *
 *
 *
 * */
