#include <iostream>
using namespace std;

#define PRINT(var) cout << #var << ": \t" << hex << var << "\n";

// For set/clr range of bits between x & y, y > x, (((1 << (y-x+1)) - 1) << x)
int setbit(int argv, int bitp) {
  argv = argv | 1 << bitp;
  return argv;
}

int clrbit(int argv, int bitp) {
  argv = argv & ~(1 << bitp);
  return argv;
}


int tglbit(int argv, int bitp) {
  argv = argv ^ (1 << bitp);
  return argv;
}

bool isPOW2(int argv) {
  return !(argv & (argv - 1));
}

int CountSetBits(int argv) {
  int count = 0;
  while(argv) {
    count += argv & 1;
    argv >>= 1;
  }
  return count;
}

int main() {

  unsigned int mcause;
  //Set.
  mcause = setbit(mcause,24);
  mcause = setbit(mcause,23);
  PRINT(mcause);

  //Clear.
  mcause = clrbit(mcause,24);
  PRINT(mcause);

  //Toggle
  mcause = tglbit(mcause,23);
  PRINT(mcause);
  mcause = tglbit(mcause,23);
  PRINT(mcause);

  //isPOW2
  cout << "1 isPOW2 ? \t" << isPOW2(1) << "\n";
  cout << "2 isPOW2 ? \t" << isPOW2(2) << "\n";
  cout << "3 isPOW2 ? \t" << isPOW2(3) << "\n";
  cout << "4 isPOW2 ? \t" << isPOW2(4) << "\n";
  cout << "255 isPOW2 ? \t" << isPOW2(255) << "\n";
  cout << "256 isPOW2 ? \t" << isPOW2(256) << "\n";

  //CountSetBits
  mcause = setbit(mcause, rand()/32);
  mcause = setbit(mcause, rand()/32);
  mcause = setbit(mcause, rand()/32);
  PRINT(mcause);
  cout << "SetBits are: \t" << CountSetBits(mcause) << "\n";

  return 0;
}
