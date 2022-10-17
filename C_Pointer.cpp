/*
I tried to add new element to the need to full array using pointer.
so i counter that you can assign pointer to array which makes you get the first element address and you can access all the other element using PTR + i, where i is interger number 
that is incremented.
for more information: 
    https://www.programiz.com/cpp-programming/pointers-arrays
to use pointer and array method to access 2d array read:
    https://www.geeksforgeeks.org/pointer-array-array-pointer/
    
    
so i tried to use PTR+i and change it's value, to be more specific add subarray to it. Eg.
arr[3] = [1,2,3]
subarr[2] = [4,5]
so i want to add this subarr at the end of the arr
newarr = [1,2,3,4,5]
by assign the PTR+i_last ( i but is the last element in the arr) to subarr first element address.Eg.
PTR+i = subarr
so i encounter the first problem, which is: lvalue required as left operand of assignment error when using C++.
i can't explain here what is the problem but if you don't know what lvalue is, please read the post:
    https://stackoverflow.com/questions/33375136/lvalue-required-as-left-operand-of-assignment-error-when-using-c


i played with the code and i noticed that you can access the next array data using pointer from another array assign to it. but with a catch
you can use it when you declear the new arrya after the first one.


**RUN THE CODE BELOW**
*/

#include <iostream>
using namespace std;

int main() {
    float arr[3] = {1.2,2.2,3.2};
    float* ptr = &arr[1];
    //new array assigned after the pervious array
    float newarr[3] = {0.5,1.5,2.5};
    float temp = 1.2;
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< (ptr + i) << endl;
    }
      for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &newarr[i] << endl;
    }
    //you can access next array using pointer that is assigned to the pervious pointer 😀😀🙃
    cout<< *(ptr+2)<<endl<<*(ptr+3);
  return 0;
}
