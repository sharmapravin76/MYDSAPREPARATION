#include <iostream>
using namespace std;
class fruit
{
public:
    string name;
    string color;
};
class student
{
    string name;
    int roll_number;
};

int main()
{
    fruit apple; // object
    apple.name = "Apple";
    apple.color = "red";

    fruit *mango = new fruit();
    mango->name = "MANGO";
    mango->color = "Yellow";

    cout << apple.name << "- " << apple.color << endl;
    cout << mango->name << "--" << mango->color << endl;

    return 0;
}