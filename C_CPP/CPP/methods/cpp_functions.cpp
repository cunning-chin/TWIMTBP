#include <iostream>
using namespace std;

void hello_world() {
  cout << "[hello_world]\n";
}

void hello_world_params(string fname = "PVIPS") {
  cout << "[hello_world] \t" << fname << "\n";
}

int add_pbv(int x) {
  return x + 1;
}

void add_pbr(int &x) {
  x = 5;
}

void argv_arr(int argv [5]) {
  for (int ii=0; ii < 5; ii++){
    cout << "argv_arr[ii]: \t" << argv[ii] << "\n";
  }
}

//Square
void area (int x) {
  cout << "Area of square is: \t" << x*x << "\n";
}

//Rectangle
void area (int x, int y) {
  cout << "Area of rectangle is: \t" << x*y << "\n";
}

int main() {
  int x = 5;
  cout << "[main]\n";
  hello_world();
  hello_world_params();
  hello_world_params("AMD");
  x = add_pbv(x);
  cout << "[main] x:\t" << x << "\n";
  add_pbr(x);
  cout << "[main] x:\t" << x << "\n";

  int arr[5] = {1,2,3,4,5};
  cout << "arr size: \t" << sizeof(arr) / sizeof(arr[0]) << "\n";
  argv_arr(arr);

  //Function Overloading.
  //Multiple functions: Same name, different parameters.
  
  area(5);
  area(5,2);

  return 0;
}
