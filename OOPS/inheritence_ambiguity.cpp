#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void print()
    {
        cout << "Class A print called" << endl;
    }
};
class B
{
public:
    void print()
    {
        cout << "Class B print called" << endl;
    }
};
class C : public A, public B
{
public:
    void print()
    {
        cout << "Class C print called" << endl;
    }
};
int main()
{
    /*
        In multiple inheritances, when one class is derived from two or more base classes then there may be a possibility that the base classes have functions with the same name, and the derived class may not have functions with that name as those of its base classes. If the derived class object needs to access one of the similarly named member functions of the base classes, then it results in ambiguity because the compiler gets confused about which base’s class member function should be called.
    */

    C objc;
    // calling print of derived class
    objc.print();

    // calling class A print
    objc.A::print();
    
    // calling class B print
    objc.B::print();
    return 0;
}