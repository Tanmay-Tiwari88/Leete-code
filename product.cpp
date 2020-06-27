#include<bits/stdc++.h>

using namespace std;


 vector<int> productExceptSelf(vector<int>& nums) 
 {
     int n=nums.size();
     vector<int>res(n);
     res[0]=nums[0];
     for(int i=1;i<n;i++)
     {
         res[i]=res[i-1]*nums[i];
     }
     int r=1;
     for(int i=n-1;i>0;i--)
     {
        res[i]=r*res[i-1];
        r*=nums[i];
     }
     res[0]=r;
     return res;



        
 }

 int main()
 {
     vector<int>p={1,2,3,4};
     vector<int>res=productExceptSelf(p);
 }
