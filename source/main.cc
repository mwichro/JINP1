#include <cstdio>
#include <map>
#include <string>

#include "test_lib.h"

template <typename T>
using mapa_1 = std::map<std::string, T>;

using namespace Tools;

int
main()
{
  printf("!!!Hello World!!!"); // prints !!!Hello World!!!

  typedef std::map<std::string, int> mapa_2;

  double a = 4.;
  double b = 6.;
  dodawanie(a, b);

  return 0;
}
