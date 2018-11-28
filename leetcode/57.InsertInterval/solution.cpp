#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
struct Interval{
    int start;
    int end;
    Interval():start(0),end(0){}
    Interval(int s,int e):start(s),end(e){}

};

bool compare(Interval &a,Interval &b)
{
    return a.start<b.start;
}

class Solution{
    public:
    vector<Interval> merge(vector<Interval>& intervals,Interval newInterval) {
        if(intervals.empty())return vector<Interval>({newInterval});
        vector<Interval>res;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end(),compare);
        Interval first=intervals[0];
        for(int i=0; i<intervals.size();i++)
        {
            if(first.end>=intervals[i].start)
            {
                first=Interval(first.start,max(first.end,intervals[i].end));
            }
            else
            {
                res.push_back(first);
                first=intervals[i];
            }
        
        }
        res.push_back(first);
        //for(auto s:res)
          //  cout<<"("<<s.start<<","<<s.end<<")";
        return res;
    }

};

int main()
{
    Solution ans;
    vector<Interval>Ivec({Interval(1,3),Interval(6,9),Interval(8,10),Interval(15,18)});
    /*for(auto s:Ivec)
        cout<<"("<<s.start<<","<<s.end<<")"<<",";
    */
    ans.merge(Ivec,Interval(2,5));

    return 0;
}
