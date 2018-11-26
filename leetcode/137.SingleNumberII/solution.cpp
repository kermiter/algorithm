#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
class Solution{
/*
 *"(ones ^ A[i]) & ~twos" basically means perform the above mentioned operation if and only if A[i] is not present in the set "twos".
 IF the set "ones" does not have A[i]
       Add A[i] to the set "ones" if and only if its not there in set "twos"
 ELSE
       Remove it from the set "ones"
(twos^ A[i]) & ~ones" basically means
IF the set "twos" does not have A[i]
       Add A[i] to the set "twos" if and only if its not there in set "ones"
   ELSE
       Remove it from the set "twos"

 *
 *
 * */

    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        for(auto s:nums)
        {
            ones=(s^ones)&(~twos);
            twos=(s^twos)&(~ones);
        }
        return ones;
    }
};
int main()
{
    
    
    return 0;
}
