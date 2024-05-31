#include<iostream>
using namespace std;
class parent{
public:
int x;
private:
int y;
protected:
int z;
};
class child1:public parent{
    //x will remain public;
    //y will remain protected;
    //z will not be accessible;
};
class child2:private parent{
    //x will be private
    //y will be private
    //z will be inaccessible
};
class child3:protected parent{
    //x will be protected
    //y will be protected
    //z will be inaccesible
};

int main(){
    parent p;
    p.x;
    return 0;
}