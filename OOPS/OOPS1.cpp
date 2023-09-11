#include <bits/stdc++.h>
using namespace std;
class object{
    private:
    int length;
    int width;
    int height;

    public:
    static int mass;
    int area;
    int volume;
};
// initialize static var outside class
int object::mass = 100;

class Student{
    private:
    string name;
    int height;
    int age;
    public:
    int get_age()
    {
        return this->age;
    }
};

class Human {
    public:
    int height;
    int weight;
    int age;

    int get_age()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};
// inherit human class in public mode
class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping ..."<<endl;
    }
};
int main()
{
    Male m1;
    cout<< m1.age <<endl;
    return 0;
}