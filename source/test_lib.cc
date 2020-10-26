#include "test_lib.h"

double
Tools::dodawanie_d(double a, double b)
{
  return a + b;
}

namespace Tools
{
  template <class T>
  T
  dodawanie(T a, T b)
  {
    // From global namespace:
    ::odejmowanie(a, -b);
  }

  template double
  dodawanie<double>(double, double);
} // namespace Tools

template <class T>
T
odejmowanie(T a, T b)
{
  return a - b;
}

// Klasa A, definicja konstruktora
A::A()
{}
