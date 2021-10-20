#include <fstream>
#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

using IntVector=std::vector<int>;

int main(int argc, char** argv) {
  assert(argc>1);
  ifstream is(argv[1]);
  IntVector values;
  while (is) {
    //TODO: load the values
    int tmp;
    is >> tmp;

    // Avoid pushing into the vector lines that do not contain integers
    if(!is.fail()) {
      cout << tmp << endl;
      values.push_back(tmp);
    }
  }
  std::sort(values.begin(), values.end());
  // TODO: print the values
  for(auto& n: values) {
    cout << n << " ";
  }

  return 0;
}