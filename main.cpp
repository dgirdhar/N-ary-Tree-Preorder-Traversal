/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder(Node* root, vector<int> &arr) {
        if (root != nullptr) {
            arr.push_back(root->val);
            
            for (int i = 0; i < root->children.size(); ++i) {
                preorder(root->children[i], arr);
            }
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> arr;
        
        preorder(root, arr);
        
        return arr;
    }
};
