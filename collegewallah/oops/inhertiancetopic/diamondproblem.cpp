#include<iostream>
using namespace std;
class parent1{
    public:
    parent1(){
        cout<<"parent1 class"<<endl;
    }
};
class parent2{
    public:
    parent2(){
        cout<<"parent2 class"<<endl;
    }
};
class child1:public parent1 {
public:
child1()
{
    cout<<"child class"<<endl;
}
};
class child2:public parent1{
public:
child2()
{
    cout<<"child class"<<endl;
}
};

class grandchild:public child1,child2{
    public:
    grandchild(){
        cout<<"grand child class"<<endl;
    }
};

int main(){
   grandchild c;
    
    return 0;
}