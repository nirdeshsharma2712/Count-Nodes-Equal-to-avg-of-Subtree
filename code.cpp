class Solution {
public:
    pair<int,int> check(TreeNode* root , int&count){
        if(root==NULL) return {0,0};
        pair<int,int> test1 = check(root->left,count);
        pair<int,int> test2 = check(root->right,count);
        if(((test1.first+test2.first+root->val)/(test1.second+test2.second+1))==root->val){
            count++;
        }
        return {test1.first+test2.first+root->val,test1.second+test2.second+1};
    }
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        check(root,count);
        return count;
    }
};
