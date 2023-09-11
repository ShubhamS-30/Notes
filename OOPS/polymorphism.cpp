#include <bits/stdc++.h>
#include <cstring>
using namespace std;
/*
polymorphism ->  compile time , runtime polymorphism

compile time polymorphism -> operator overloading , function overloading

runtime polymorphism -> function overriding , virtual functions
*/

// compile time  polymorphism

class objectA
{
private:
    int a;
    int b;
    string s;

public:
    objectA()
    {
        this->a = 0;
        this->b = 0;
        this->s = "";
    }
    objectA(int a, int b, string s)
    {
        this->a = a;
        this->b = b;
        this->s = s;
    }

    void print()
    {
        cout << "a = " << this->a << endl;
        cout << "b = " << this->b << endl;
        cout << "s = " << this->s << endl;
    }

    // function overloading
    //  a single function named function acts differently in different situations, which is a property of polymorphism.
    int fun(int a, int b)
    {
        cout << "function 1" << endl;
        cout << a * b << endl;
        return a * b;
    }
    int fun(int a, int b, int c)
    {
        cout << "function 2" << endl;
        cout << a * b * c << endl;
        return a * b * c;
    }

    // virtual function (runtime polymorphism)

    // A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class.

    /*
        Virtual functions are Dynamic in nature.

        They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class

        A virtual function is called during Runtime
    */

    virtual void object_name()
    {
        cout << "Object A" << endl;
    }

    // operator overloading
    // It is an idea of giving special meaning to an existing operator without changing its original meaning.
    objectA operator+(objectA x)
    {
        objectA res;
        res.a = this->a + x.a;
        res.b = this->b + x.b;
        res.s = this->s + " + " + x.s;

        return res;
    }
};

class objectB : public objectA
{
public:
    // function overriding
    // Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
    int fun(int a, int b, int c)
    {
        cout << "function 3" << endl;
        cout << a * b + c << endl;
        return a * b + c;
    }

    // overriding the virtual function
    void object_name()
    {
        cout<<"Object B"<<endl;
    }
};
int main()
{
    // function overloading
    cout << "function overloading" << endl;
    objectA x;
    x.fun(1, 2);
    x.fun(2, 3, 4);

    cout << endl;
    cout << endl;
    cout << endl;

    // operator overloading
    cout << "operator overloading" << endl;
    objectA obj1(5, 10, "obj1");
    objectA obj2(2, 3, "obj2");

    cout << "obj1" << endl;
    obj1.print();
    cout << "obj2" << endl;
    obj2.print();
    objectA obj3 = obj1 + obj2;
    cout << "obj3" << endl;
    obj3.print();

    cout << endl;
    cout << endl;
    cout << endl;

    // function overriding
    cout << "function overriding" << endl;
    objectB obj4;
    cout << "obj 4" << endl;
    obj4.fun(2, 3, 4);
    cout << "obj 1" << endl;
    obj1.fun(2, 3, 4);

    cout << endl;
    cout << endl;
    cout << endl;

    // virtual functions
    cout << "virtual functions" << endl;
    objectA *obj5 = new objectB;

    cout<<"Calling overriden function"<<endl;
    obj5->object_name();
    cout<<"Calling orignal function"<<endl;
    obj5->objectA::object_name();



    return 0;
}