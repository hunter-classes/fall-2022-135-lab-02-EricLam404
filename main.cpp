#include <iostream>
#include "funcs.h"

int main(){

  print_interval(0, 10);
  std::cout << "\n";

  print_interval(-10,0);
  std::cout << "\n";
  
  print_interval(-10,10);
  std::cout << "\n";
  
  return 0;
}