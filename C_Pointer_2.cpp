#include <iostream>
using namespace std;

int main() {
     int *ptr;
     for(int i = 0; i < 3; i++) {
     *(ptr+i) = (i+3);
     }
     cout<<*(ptr)<<endl<<*(ptr+1);
  return 0;
}
