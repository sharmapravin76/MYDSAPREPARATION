#include <iostream>
#include <string>
#include <regex>

using namespace std;
int main()
{
    string s;
    std::cin>>s;
    bool b=false;
    const regex Regex("0*10*");
    b = regex_match(s,Regex);
    if(!b ){
        std::cout<<"false";
    }
    else{
        std::cout<<"True";
    }
    
    return 0;
}