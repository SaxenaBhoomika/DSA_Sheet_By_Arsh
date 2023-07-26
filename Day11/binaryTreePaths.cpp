class Solution {
    string convert(vector<int>&path){
        string res="";
        int n=path.size();
        for(int i=0;i<n-1;i++){
            res+=to_string(path[i]);
            res.push_back('-');
            res.push_back('>');

        }
        res+=to_string(path[n-1]);
        return res;
    }
public:
    void solve(TreeNode* root, vector<string>&res, vector<int>&path){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            path.push_back(root->val);
            res.push_back(convert(path));
            path.pop_back();
            return;
        }
        path.push_back(root->val);
        solve(root->left,res,path);
        solve(root->right,res,path);
        path.pop_back();
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        vector<int>path;
        solve(root,res,path);
        return res;
    }
};
