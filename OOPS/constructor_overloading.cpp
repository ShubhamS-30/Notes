// C++ program to show how to call parameterized Constructor 
// of base class when derived class's Constructor is called 

#include <iostream> 
using namespace std; 


class GrandParent{
        
    public:
    int x;
    GrandParent()
    {
        cout<<"default constructor grandparent class"<<endl;
    }
    GrandParent(int k)
    {
        x = k;
        cout<<"parameterized constructor 1 grandparent class"<<endl;
    }
    GrandParent(int i,int j)
    {
        x = i + j;
        cout<<"parameterized constructor 2 grandparent class"<<endl;
        cout<<"GrandParent x = "<<i+j<<endl;
    }
};
// base class 
class Parent{ 
	int x; 

public: 
	// base class's parameterized constructor 
	Parent(int i) 
	{ 
		x = i; 
		cout << "Inside base class's parameterized "
				"constructor"
			<< endl; 
        
	} 
    Parent(int i,int j)
    {
        x = i + j;
        cout<<"Inside base class's second parameterized "
				"constructor"<<endl;
        cout<<"Parent x = "<<x<<endl;
    }
}; 

// sub class 
class Child : public Parent , public GrandParent { 
public:     
    int x;
	// sub class's parameterized constructor 
	Child(int x):  GrandParent(x,25),Parent(x,2)
	{ 
        this->x = x;
		cout << "Inside sub class's parameterized "
				"constructor"
			<< endl; 
	} 
}; 

// main function 
int main() 
{ 

	// creating object of class Child 
	Child obj1(10); 
	return 0; 
}
