#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node {
public:
    int value;
    node *left;
    node *right;
    node(int v) {
        value = v;
        left = NULL;
        right = NULL;
    }
};

vector<int> leftviewbinarytree(node *root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty()) {
        int nodeatcurrentlevel = q.size();
        for (int i = 0; i < nodeatcurrentlevel; i++) {
            node *currnode = q.front();
            q.pop();
            if (i == 0) { // This condition ensures the first node at each level is added to ans.
                ans.push_back(currnode->value);
            }
            if (currnode->left) {
                q.push(currnode->left);
            }
            if (currnode->right) {
                q.push(currnode->right);
            }
        }
    }
    return ans;
}

int main() {
    node *rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->left->right = new node(9);
    rootnode->left->right = new node(5);
    rootnode->right->left = new node(12);
    rootnode->right->right = new node(11);

    vector<int> ans = leftviewbinarytree(rootnode);
    for (auto i : ans) {
        cout << i<<" " ;
    }
    return 0;
}
