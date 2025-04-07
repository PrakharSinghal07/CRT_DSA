#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
  public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
      this -> val = val;
      left = NULL;
      right = NULL;
    }
};

vector<vector<int>> levelOrder(TreeNode* root){
  vector<vector<int>> ans;
  if(root == NULL) return ans;
  queue<TreeNode *>q;
  q.push(root);
  while(!q.empty()){
    int size = q.size();
    vector<int> a;
    for(int i=1; i<=size; i++){
      TreeNode* node = q.front();
      q.pop();
      a.push_back(node -> val);
      cout << node -> val << " ";
      if(node -> left) q.push(node -> left);
      if(node -> right) q.push(node -> right);
    }
    ans.push_back(a);
  }
  return ans;
}
int main()
{
  TreeNode* root = new TreeNode(5);
  TreeNode* node2 = new TreeNode(6);
  TreeNode* node3 = new TreeNode(7);
  root -> left = node2;
  root -> right = node3;
  vector<vector<int>> ans = levelOrder(root);
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}