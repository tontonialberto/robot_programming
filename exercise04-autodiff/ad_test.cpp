#include <iostream>
#include "ad.h"

using namespace std;

enum class DisplayType {
  Function = 0,
  DerivativeX,
  DerivativeY
};

void exercise(DisplayType disp) {
  cout << "# x y f(x,y) df/dx df/dy" << endl;
  for(int i=-100; i<=100; i+=10) {
    float xVal = (float)i/100;
    for(int j=-100; j<=100; j+=10) {
      float yVal = (float)j/100;
      DualValuef x(xVal), y(yVal);
      DualValuef _2(2, 0);
      DualValuef f = sin(x) * cos(y) / log(_2 + sin(x));

      x.derivative = 1.f;
      y.derivative = 0;

      cout << x.value << " " << y.value << " " <<  f.value << " " << f.derivative;
      
      x.derivative = 0;
      y.derivative = 1.f;
      DualValuef dfdy = sin(x) * cos(y) / log(_2 + sin(x));
      
      cout << " " << dfdy.derivative << endl;
    }
  }
}

float f(const float& x, bool value_false_derivative_true=false) {
  // we cache the constants
  static const DualValuef _5=DualValuef(5);
  static const DualValuef _3=DualValuef(3);
  
  // convert to DualValue the linearization point;
  DualValuef _x(x);

  // if we want to compute the derivative, we need to set
  // to one the x' value on the item
  if (value_false_derivative_true)
    _x.derivative=1.f;
  // here we go with the calculation
  const DualValuef _y=cos(_5*_x)/(sin(exp(_x+_3)));

  // depending on what is asked we return either the value field
  // or the derivative field
  if (value_false_derivative_true) {
    return _y.derivative;
  } else
    return _y.value;
}

int main() {
  float x=0.5;
  float y=f(x);
  float dy_dx=f(x,true);
  //cout << "the value of f in " << x << " is: " << y << "its derivative is: " << dy_dx << endl;
  
  exercise(DisplayType::DerivativeX);
  return 0;
}
