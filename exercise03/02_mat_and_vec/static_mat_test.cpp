#include <iostream>
#include "static_mat.h"
#include <unistd.h>
using namespace rp;
using namespace std;

using Vec3f=Vec_<float, 3>;
using Mat3f=Mat_<float, 3,3>;
using Mat3_4f=Mat_<float, 3,4>;

int main() {
  // TODO FILL_HERE_THE_STUFF_FOR_EXERCISE_1
  Mat_<float, 3, 1> v;
  Mat_<float, 3, 2> A;
  Mat_<float, 2, 3> B;
  Mat3f C;

  randFill(A);
  randFill(B);
  randFill(C);
  randFill(v);

  for(int i=0; i<10000000; i++) {
    auto X = C * (A*B+v*v.transpose());
  }

  return 0;
}
