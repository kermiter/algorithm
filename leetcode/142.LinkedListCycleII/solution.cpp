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
        ListNode *detectCycle(ListNode *head) {
            bool bHas=false;
            ListNode *p1=head,*p2=head;
            while(p2&&p2->next)
            {
                p1=p1->next;
                p2=p2->next->next;
                if(p1==p2)
                {
                    bHas=true;
                    break;
                }
            }

            if(!bHas)
            {
                return nullptr;
            }
            p1=head;
            while(p1!=p2)
            {
                p1=p1->next;
                p2=p2->next;
            }
            return p1;
    }

};
int main()
{


    return 0;
}
