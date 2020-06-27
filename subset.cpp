#include<bits/stdc++.h>

using namespace std;


void gensub(int i,int n,vector<int>curr,vector<vector<int>>&res,vector<int>&nums)
{
    if(i==n)

    {
        res.emplace_back(curr);
        curr.emplace_back(nums[n]);
        res.emplace_back(curr);
        return;
    }
    for(int j=i+1;j<n;j++)
    {
        gensub(j+1,n,curr,res,nums);
        curr.emplace_back(nums[]);
        gensub(j+1,n,curr,res,nums);
    }
}
vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<int>temp;
    vector<vector<int>>res;
    vector<int>cur;
    gensub(0,nums.size()-1,cur,res,nums);
    
   return res;     
        
}


int main()
{
    vector<int>nums={1,2,3};
    vector<vector<int>>res=subsets(nums);
    return 0;
}