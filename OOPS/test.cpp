#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    void say()
    {
        std::cout << "1";
    }
};

class Child : public Parent
{
public:
    void say()
    {
        std::cout << "2";
    }
};

int main()
{
    Parent *a = new Child();
    Parent *b = new Parent();

    a->say();
    b->say();
    return 0;
}