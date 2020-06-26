#include<bits/stdc++.h>

using namespace std;

void genratepermutation(vector<int>&av,int l,int r,vector<vector<int>>&res)

 {
     if(l==r)
     {
        res.emplace_back(av);
        return;
     }
    
    for(auto i=0;i<=r;i++)
    {
       swap(av[l],av[i]);
       genratepermutation(av,l+1,r,res);
       swap(av[l],av[i]);

    }
     

    
      
 }

 vector<vector<int>> permute(vector<int>& nums)
 {
     vector<vector<int>>res;
     vector<int>cur(nums.size());
     genratepermutation(nums,0,nums.size()-1,res);
     return res;
   
        
 }

 
 

int main()
{
    vector<int>a={1,2,3};
   permute(a); 
}