#include<bits/stdc++.h>

using namespace std;


 
bool isvalid(string&curr)
{
    stack<char>par;

    for(auto i:curr)
    {
        if(i=='(')
            par.push(i);
        else
        {
            if(par.empty())
                return false;
            par.pop();
        }
    }

    return par.empty();
    
    
}
void paragen(int curin,int x,int y,vector<string>&res,string curr,int n)
{
    if(curin==2*n-1)
    {
        curr[2*n-1]=')';
        //if(isvalid(curr))
        res.push_back(curr);
        return;
    }
    if(x<n)
    {
        curr[curin]='(';
        paragen(curin+1,x+1,y,res,curr,n);
    }
    if(y<n && x>y) 
    {
        curr[curin]=')';
        paragen(curin+1,x,y+1,res,curr,n);

    }

}
vector<string> generateParenthesis(int n) {
     vector<string>res;
     string curr;
     curr.resize(2*n);
     curr[0]='(';
     paragen(1,1,0,res,curr,n);
    return res;
        
    }
int main()
{
    int n=3;
    vector<string>res=generateParenthesis(3);
    return 0;
}