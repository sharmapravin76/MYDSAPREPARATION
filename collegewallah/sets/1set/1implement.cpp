 #include<iostream>
 #include<set>
 using namespace std; 
 int main(){
    
    set<int>set1;
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    cout<<set1.size()<<endl;
    set1.insert(1);
    cout<<set1.size()<<endl;
    //size remain same because duplicate value is added 
    //and sets contains only unique values
    return 0;
 }