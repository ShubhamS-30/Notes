#include<bits/stdc++.h>
using namespace std;
void memory_leak()
{
    for(int i = 0;i<100000;i++)
    {
        int *a = new int(10);
        // delete(a);  // to remove memory leak
    }
}

class Wrapper{
    public:
    int *mem;
    Wrapper(int *a)
    {
        this->mem = a;
        cout<<"Constructor"<<endl;
    }
    ~Wrapper()
    {
        cout<<"Destructor"<<endl;
        delete mem;
    }
};
// unique PTR
template<typename T>
class uniqueptr{

    public:
        T* res;
        uniqueptr(T* a)
        {
            this->res = a;
            cout<<"Constructor unique ptr"<<endl;
        }
        // anyone who uses copy constructor will get comp err
        uniqueptr(const uniqueptr<T> &ptr) = delete;

        uniqueptr &operator = (const uniqueptr<T> &ptr) = delete;


        // && to send r value
        uniqueptr(uniqueptr<T> &&ptr) 
        {
            this->res = ptr.res;
            // transfer ownership
            ptr.res = nullptr;
        }

        // for copy operator
        uniqueptr& operator= (uniqueptr<T>&& ptr)
        {
            if(this != &ptr)
            {
                // deleting previous memory taken by res
                if(res)
                {
                    delete res;
                }
                res = ptr.res;
                //transfer ownership
                ptr.res = nullptr;
            }

            return *this;
        }

        T* operator->(){
            return res;
        }

        T& operator*(){
            return *res;
        }

        //return raw ptr

        T* get()
        {
            return res;
        }

        // assign new value
        void reset(T* newres = nullptr)
        {
            if(res){
                delete res;
            }
            res = newres;
        }

        ~uniqueptr(){
            cout<<"Destructor Unique ptr"<<endl;
            if(res)
            {
                delete res;
                res = nullptr;
            }
        }
};
int main()
{
    Wrapper obj = Wrapper(new int(10));
    cout<<*obj.mem<<endl;



    // usage of unique ptr
    uniqueptr<int> ptr1(new int(2));
   // uniqueptr<int> ptr2(ptr1); // compilation error
    //uniqueptr<int> ptr3 = ptr1 ; // compilation error
    // ptr3 = ptr1; //compilation error
    cout<<*(ptr1.get())<<endl;
    uniqueptr<int> ptr3 = std::move(ptr1);
    
    ptr1.reset(new int(30));
    cout<< *(ptr1)<<endl;
    vector<int> v;
    return 0;
}