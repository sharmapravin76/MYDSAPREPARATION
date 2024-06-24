
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// #include <unordered_map>

// using namespace std;
// class Node
// {
// public:
//     int data;
//     vector<Node *> children;
//     Node(int data)
//     {
//         this->data = data;
//     }
// };
// void levelorderTraversal(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         int currentlevelnodes = q.size();
//         while (currentlevelnodes--)
//         {
//             // dequeue
//             Node *curr = q.front();
//             q.pop();
//             cout << curr->data << " ";
//             // enqueue all child nodes
//             for (Node *child : curr->children)
//             {
//                 q.push(child);
//             }
//         }
//         cout << endl;
//     }
// }
// void serialiseTree(Node *root, string &ans)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     ans += to_string(root->data) + ":" + to_string(root->children.size()) + ":";
//     for (Node *child : root->children)
//     {
//         ans += to_string(child->data) + ",";
//     }
//     if (root->children.size())
//         ans.pop_back(); // to remove the last"."

//     ans += "\n";
//     for (Node *child : root->children)
//     {
//         serialiseTree(child, ans);
//     }
// }
// Node *deserialisedTreeHelper(int nodevalue, unordered_map<int, string> mp);
// Node *node = new Node(nodevalue);
// string nodeStr = mp[nodevalue];
// if (nodeStr[0] = '0')
// {
//     return node;
// }
// int brealpos = nodeStr.find(':');
// int childNodeNumber = stoi(nodeStr.substr(0, breakPos));
// string childNodeStr = nodeStr.substr(breakPos + 1);
// int start = 0;
// for (int i = 0; i < childNodeNumber; i++)
// {
//     int end = childNodeStr.find(',');
//     if(end==string::npos)end=childNodeStr.size();
//     int childNodesStr = stoi(childNodeStr.substr(start,end));
//     node->children.push_back(deserialisedTreeHelper(childNodevalue,mp));
//     start=end+1;
// }
// return Node;

// }
// Node *deserialisedTree(string serialisedstr)
// {
//     if (serialisedstr == "")
//     {
//         return NULL;
//     }
//     unordered_map<int, string> mp; // nodevalue ->childnodestring
//     int start = 0;
//     for (int i = 0; i < serialisedstr.size(); i++)
//     {
//         if (serialisedstr[i] == '\n')
//         {
//             string nodestr = serialisedstr, substr(start, i - start); //"10:2:30,40"""
//             int breakPos1 = nodestr.find(':');
//             int nodeValue = stoi(nodestr.substr(0, breakPos1)); // 10
//             mp[nodeValue] = nodestr.substr(breakPos1 + 1);//"2:30,40"
//             start=i+1;
//         }
//     }
//     int rootNodevalue = stoi(serialisedstr.substr(0, serialisedstr.find(':')));
//     return deserialisedTreeHelper(rootNodevalue, mp);
// }

// int main()
// {
//     Node *root = new Node(10);
//     root->children.push_back(new Node(2));
//     root->children.push_back(new Node(34));
//     root->children.push_back(new Node(56));
//     root->children.push_back(new Node(100));
//     root->children[1]->children.push_back(new Node(1));
//     root->children[3]->children.push_back(new Node(7));
//     root->children[3]->children.push_back(new Node(8));
//     root->children[3]->children.push_back(new Node(9));
//     levelorderTraversal(root);

//     string serialisedTree = "";
//     serialiseTree(root, serialisedTree);
//     cout << serialisedTree << endl;
//     Node *deserialisedroot = deserialisedTree(serialisedTree);
//     levelorderTraversal(deserialisedroot);

//     return 0;
// }
// //         10
// //     2   34  56  100
// //          1     7 8 9
// //