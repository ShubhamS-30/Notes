#include <bits/stdc++.h>
using namespace std;

// Whenever const keyword is attached with any method(), variable, pointer variable, and with the object of a class it prevents that specific object/method()/variable to modify its data items value.
const int const_var1 = 10;
int not_const_var1 = 20;

int main()
{
    cout << const_var1 << endl;

    // error
    //  const_var1++;

    // pointers

    // const pointer  point to constant object
    const int *pointer_const_var1 = &const_var1;

    // *pointer_const_var1 = 9;
    // error

    cout << "value = " << *pointer_const_var1 << endl;
    cout << "address = " << pointer_const_var1 << endl;





    //  pointer pointing to non constant value
    const int *pointer_not_const_var1 = &not_const_var1;

    not_const_var1 = 15;

    // *pointer_not_const_var1 = 10;
    // error value cannot be modified by const pointers

    cout << "value = " << *pointer_not_const_var1 << endl;
    cout << "address = " << pointer_not_const_var1 << endl;

    // pointer variables that are pointing to a memory location const int-type but the value stored at these corresponding locations can be changed.




    // const pointer variable point to the value

    int *const const_pointer = &not_const_var1;

    *const_pointer = 12;
    // value can be modified directly by pointers

    cout << "value = " << *const_pointer << endl;
    cout << "address = " << const_pointer << endl;

    // The pointer variables are const and pointing to the locations if we try to change the address location then we’ll face the error.

    // error - > *const_pointer = &x


    // const pointer pointing to a const variable

    const int* const const_pointer_const_var1 = &const_var1;

    cout << "value = " << *const_pointer_const_var1 << endl;
    cout << "address = " << const_pointer_const_var1 << endl;


    // the const pointer variable points to the const variable. So, you are neither allowed to change the const pointer variable(*P) nor the value stored at the location pointed by that pointer variable(*P).


    // Passing const argument value to a non-const parameter of a function isn’t valid it gives you a compile-time error.



    
    return 0;
}