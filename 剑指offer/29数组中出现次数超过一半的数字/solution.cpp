#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
        //利用partition的方法
        int partition(vector<int>&numbers,int start,int end)
        {
            int key=numbers[end-1];
            int small=start-1,big=small+1;
            while(big<end)
            {
                if(numbers[big]<key)
                {    small++;
                    if(small!=big)
                    {
                        int tmp=numbers[big];
                        numbers[big]=numbers[small];
                        numbers[small]=tmp;
                    }
                }

                big++;
            }
            small++;
            int tmp=numbers[big-1];
            numbers[big-1]=numbers[small];
            numbers[small]=tmp;
            //返回分割点
            return small;
        
        }
        int MoreThanHalfNum_Solution(vector<int>numbers)
        {
            if(numbers.empty())
                return 0;
            int start=0,end=numbers.size();
            int split=-1,mid=numbers.size()/2;
            split=partition(numbers,start,end);

            while (split!=mid)
            {
                if(split<mid)
                {
                    start=split+1;
                    split=partition(numbers,start,end);
                }
                else if(split>mid)
                {
                    end=split;
                    split=partition(numbers,start,end);
                }
            
            }
            int key=numbers[mid],cnt=0;
            for(auto num:numbers)
                if(num==key)
                    cnt++;
            if(cnt>mid)
                return key;
            return 0;
        }

};
int main()
{
    Solution ans;
    vector<int>vec({1,2,3,2,2,2,5,4,2});
    cout<<ans.MoreThanHalfNum_Solution(vec);


    return 0;
}

