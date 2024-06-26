// class Solution{
//     public:
//     //left child ->2*i+1;
//     // right chikd->2*i+2;
//     void heapify(vector<int>&v,int size,int curr)
//     {
//         //we have to loop till curr has child node
//         while(2*curr+1<size)
//         {
//             int leftchild=2*curr+1;
//             int rightchild=2*curr+2;
//             int maxchild=leftchild;
//             if(rightchild<size&&v[rightchild]>v[maxchild])
//             {
//                 maxchild=rightchild;
//             }
//             if(v[maxchild]<=v[curr])
//             {
//                 return;
//             }
//             swap(v[maxchild],v[curr]);
//             curr=maxchild;
//         }
//     }
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//         // your code here
//         vector<int>mergedHeap;
//         for(auto ele:a){
//         mergedHeap.push_back(ele);
//             }
//             for(auto ele:b){
//         mergedHeap.push_back(ele);
//             }
//             //loop all parent nodes
//             int lastparentNode=(n+m)/2-1; //we are doing minus 1 because here it is zero base indexing
//             for(int i=lastparentNode;i>=0;i--)
//             {
//                 heapify(mergedHeap,n+m,i);
//             }
//             return mergedHeap;
//     }