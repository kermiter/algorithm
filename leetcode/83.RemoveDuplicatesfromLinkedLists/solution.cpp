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
        ListNode* deleteDuplicates(ListNode* head) {
            if(head==nullptr) return head;

            ListNode*p1=head,*p2=head->next;
            while(p2){
                if(p1->val!=p2->val)
                {    
                     p1=p2;
                }
                else
                {
                    p1->next=p2->next;
                }
                p2=p2->next;
            }
            return head;
    }

};
int main()
{


    return 0;
}
