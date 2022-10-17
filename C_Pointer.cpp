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
