#include <iostream>
#include "mat_f.h"
using namespace std;

int main() {

  // TODO: fill here the stuff required for exercise 1
  MatF A(3, 2), B(2, 3), C(3, 3), v(3, 1);

  A.randFill();
  B.randFill();
  C.randFill();
  v.randFill();

  for(int i=0; i<10000000; i++) {
    auto X = C * (A*B+v*v.transpose());
  }
}
