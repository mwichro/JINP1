#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "test_lib.h"

template <typename T>
using mapa_1 = std::map<std::string, T>;


using namespace Tools;

int
main()
{
  A obiekt;
  A obiekt1(4);
  A obiekt2(1, 3);

  A obiekt3 = 6;

  A obiekt4 = obiekt3;

  A(99, 99);

  A obiekt5 = A(6, 8);


  std::vector<double>           piatki(10, 5.);
  std::vector<std::vector<int>> tablica_2D(10, std::vector<int>(20, 6));



  return 0;
  std::cout << __FILE__ << std::endl;

  //  std::cout << PI_razy_dwa << std::endl;

  printf("!!!Hello World!!!"); // prints !!!Hello World!!!

  typedef std::map<std::string, int> mapa_2;


  double a = 4.;
  double b = 6.;
  dodawanie(a, b);

  return 0;
}
