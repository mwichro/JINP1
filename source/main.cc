#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "test_lib.h"

template <typename T>
using mapa_1 = std::map<std::string, T>;

using namespace Tools;

int main() {
  A obiekt;
  A obiekt1(4);
  A obiekt2(1, 3);

  A obiekt3 = A(6);
  obiekt3 = 7;

  A obiekt4 = obiekt3;

  A(99, 99);

  obiekt > obiekt4 + obiekt3;

  A obiekt5 = A(6, 8);

  std::cout << "NIEBEZPIECZNA LINIA" << std::endl;
  A obiekt6((int)6.5);
  std::cout << "NIEBEZPIECZNA LINIA" << std::endl;

  //  obiekt1 = obiekt5 = obiekt3;
  //  obiekt5 = obiekt5;

  A(5);

  std::vector<double> piatki(10, 5.);
  std::vector<std::vector<int>> tablica_2D(10, std::vector<int>(20, 6));

  return 0;
  std::cout << __FILE__ << std::endl;

  //  std::cout << PI_razy_dwa << std::endl;

  printf("!!!Hello World!!!");  // prints !!!Hello World!!!

  typedef std::map<std::string, int> mapa_2;

  double a = 4.;
  double b = 6.;
  dodawanie(a, b);

  return 0;
}
