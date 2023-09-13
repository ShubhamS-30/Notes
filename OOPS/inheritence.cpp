#include <bits/stdc++.h>
using namespace std;
/*
single inheritance ->only a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.
*/
class Person
{
public:
    Person()
    {
        cout << "Person class called" << endl;
    }
};

class Male : public Person
{
public:
    Male()
    {
        cout << "Male class called" << endl;
    }
};
/*
Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.
*/
class A
{
public:
    A()
    {
        cout << "Class A called" << endl;
    }
};
class B
{
public:
    B()
    {
        cout << "Class B called" << endl;
    }
};
/*
order of inheritence matters ->
class C : public A ,public B
Order of calling ->  A,B,C;
class C : public B ,public A
Order of calling ->  B,A,C;
*/
class C : public A, public B
{
public:
    C()
    {
        cout << "Class C called" << endl;
    }
};

/*
Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.

order of constuctors is top down
base -> derived -> derived
*/
class Child : public Male
{
public:
    Child()
    {
        cout << "Class Child called" << endl;
    }
};
/*
Hierarchical Inheritance: In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

A->B
A->C
*/
class Female : public Person{
    public:
    Female()
    {
        cout<<"Female class called"<<endl;
    }
};
/*
Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 
*/
int main()
{
    cout << "Single Level Inheritence" << endl;
    Male m;
    // calls both base and derived class constructor.
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Multiple Inheritance" << endl;
    C c;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Multilevel Inheritance" << endl;
    Child chld;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Hierarchical Inheritance" << endl;
    cout<<"Male Class"<<endl;
    Male m1;
    cout<<endl;
    cout<<"Female Class"<<endl;
    Female f1;
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}