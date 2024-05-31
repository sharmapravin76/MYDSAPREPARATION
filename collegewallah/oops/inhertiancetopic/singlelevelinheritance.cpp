#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"parent class"<<endl;
    }
};
class child:public parent{
public:
child()
{
    cout<<"child class"<<endl;
}
};

int main(){
    child c;
    
    return 0;
}