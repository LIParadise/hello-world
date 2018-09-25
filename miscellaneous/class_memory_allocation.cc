#include <iostream>

using namespace std;

class S{
  public: 
    int i1;
    char c1;
    int i2;
    char c2;
    int i3;
    char c3;
    int i4;
    char c4;
    char c5;
    char c6;
    char c7;
    int* ptr1;
}global, local;

int main(){
  cout << sizeof(S) << endl;
  return 0;
}
// either w/ or w/o {c4, c5, c6, c7}, sizeof(S) == 40;
// either "class S" or "struct S" are the same;
// think memory allocation;
