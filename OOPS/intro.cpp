#include<bits/stdc++.h>
using namespace std;
class hero{
    // properties

    private:
    int health;
    string level;
    string name;
    

    public:
    char* team;
    //default constructor
    hero(){
        cout<<"Default constructor called!!"<<endl;
        health = 10;
        level = "I";
        name = "Default";
        team = new char[100];
    }


    // parameterized constructor
    hero(int health,string level,string name){
        cout<<"Parameterized constructor"<<endl;
        this->health = health;
        this->level = level;
        this->name = name;
    }

    //copy constructor
    // user defined copy constructor makes deepcopy
    hero(hero &t)
    {
        cout<<"Copy Constructor"<<endl;
        this->level = t.level;
        this->health = t.health;
        this->name = t.name;
        char *temp = new char[strlen(t.team)+1];
        strcpy(temp,t.team);
        this->team = temp;

    }

    // destructor invoked when object goes out of scope and is used to deallocate memory.
    //  automatically called for static objects.
    // for dynamically objects call manually
    ~hero()
    {
        cout<<"Destructor called !!!"<<endl;
    }

    void print()
    {
        cout<<endl;
        cout<<name<<" , "<<team<<" , "<<health<<" , "<<level<<endl;
        cout<<endl;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setLevel(string c)
    {
        level = c;
    }

    int getHealth()
    {
        return health;
    }

    string getLevel()
    {
        return level;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }

    void setTeam(char team[])
    {
        strcpy(this->team,team);
    }
};
int main()
{
    // class is a user defined data type template

      
    // empty class has size of 1 just for identification.


    //static allocation
    // hero h1;

    //dyanmic allocation
    // hero *h2 = new hero;



    // operations with static allocation
    // h1.sethealth(15);
    // h1.print();

    // operation with dynamic allocation
    // h2->sethealth(30);
    // h2->setLevel("III");
    // h2->print();
    //alternative
    // int h2_health = (*h2).getHealth();


    // static creation with parameterized constructor
    // hero h3(20,"II","Hero_3");
    // h3.print();

    // dynamic creation with paramerterized constructor
    // hero *h4 = new hero(40,"IV","Hero_4");
    // h4->print();


    //using copy constructor
    // use * for dynamically created objects.
    // hero h5(*h3);
    // cout<<"Hero 5 details:"<<endl;
    // h5.setName("Hero_5");
    // h5.print();




    // shallow copy

    hero h6;
    h6.sethealth(12);
    h6.setLevel("I");
    char team[7] = "Alpha";
    h6.setTeam(team);
    h6.setName("Hero_6");

    cout<<"H6"<<endl;
    h6.print();


    // use default copy constuctor 

    hero h7(h6);
    cout<<"H7"<<endl;

    
    h7.setName("Hero_7");
    h7.print();

    h7.team[0] = 'a';

    //("Hero_7");
    h7.print();

    cout<<"H6"<<endl;

    h6.print();

    // team name of both h6 and h7 change due to shallow copy

    // default constructor always makes shallow copy

    // shallow copy -> accessing same memory using different names

    // deepcopy -> memory is allocated to make a copy


    //copy assignment operator

    cout<<"H8"<<endl;
    hero h8(h6);
    h8.print();


    //copy assignment operator
    h8 = h7;

    cout<<"updated value"<<endl;
    h8.print();



    hero *h9 = new hero();

    // manually calling destructor
    // delete h9 or  h9->~hero();
    // or 
    delete h9;



    return 0;
}