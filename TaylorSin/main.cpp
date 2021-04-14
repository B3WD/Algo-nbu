#include <iostream>

int main() {

  double sum = 0, zn = 1, x, frac;

  std::cin >> x;

  frac = x;

  for(int i = 1; i < 100; i++){
    sum = sum + frac;
    std::cout << sum << std::endl;
    zn += 2;
    frac = -frac*x*x / (zn * (zn - 1));
  }

  std::cout << sum;
}