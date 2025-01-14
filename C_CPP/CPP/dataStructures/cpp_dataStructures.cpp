#include <iostream>
#include <vector>
#include <set>
using namespace std;

/*
 * Vector: Resizable Array. Stores like an array but can change in size. Index accessible.
 * List: Store elements sequentially, each element connected to next. Add/Remove elements at both ends. Not index accessible.
 * Stack: LIFO. Add & Remove from top. Not index accessible.
 * Queue: FIFO. Add at end. Remove from Top. Not index accessible.
 * Deque: Double ended queue. Elements can be added and removed from both end. Not index accessible.
 * Set: Store unique elements. Not index accessible.
 * Map: Store key/value pairs. Accessible by keys.
*/

int main() {

  //Vector.
  vector<string> Cars = {"BMW", "Volvo"};
 
  for (string cars: Cars) {
   cout << cars << "\n";
  }

  //Methods:
  //front() & back()
  //at()
  //push_back() pop_back()
  //size()
  //empty()
  bool vect_is_empty = Cars.empty();
  cout << "Is Empty? \t" << vect_is_empty <<"\n";

  //Set
  set<int> sets = {1,5,2,2,3,9};

  for (int sets: sets) {
    cout << sets << "\t";
  }
  cout << endl;

  //Methods:
  //.insert() Add element.
  //.erase()  Remove element.
  //.size()   Size of set.
  //.empty()  is empty?

  return 0;
}
