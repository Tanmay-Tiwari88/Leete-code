#include<bits/stdc++.h>

using namespace std;

 struct TreeNode {

     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
 
vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>tr;
        
          while(!tr.empty() || root!=NULL)
        {
            while(root!=NULL)
            {
                tr.push(root);
                root=root->left;
            }
            TreeNode* temp=tr.top();
            res.emplace_back(temp->val);
            root=temp;
            tr.pop();
            root=root->right;
                
            
            
            
                
        }
        return res;
        
    }

int main()
{
    TreeNode* root=new TreeNode(1);
    TreeNode* r=new TreeNode(2);
    root->right=r;
    r=new TreeNode(3);
    root->right->left=r;
    vector<int>res=inorderTraversal(root);
    return 0;


}