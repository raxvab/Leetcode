/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size(); 
            for(int i=0 ; i < size ; i++){
                Node* v = q.front(); 
                if(size - 1 == i) 
                     v -> next = NULL; 
                
                q.pop();
                
                if(size -1 != i) 
                     v -> next = q.front(); 
                
                if(v -> left != NULL)
                    q.push(v -> left);
                if(v -> right != NULL)
                    q.push(v -> right);
            }
        } 
        return root;
    }
};