#include "test_lib.h"

// PI_razy_dwa = 6.28;

namespace
{
  double
  funkcja_pomocnicza()
  {
    return 5.;
  }
} // namespace


double
Tools::dodawanie_d(double a, double b)
{
  funkcja_pomocnicza();
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
  : numer(1)
  , numer_2(numer)
  , litera(new char)
{
  double *zmienna_2(new double(5.));
  //
  std::cout << *zmienna_2 << std::endl;
  ///......
  // robimy cos z zmienna_2
  ///

  // kasujemy zmienna_2
  delete zmienna_2;
}

// Klasa A, definicja konstruktora
A::A(int k)
  : numer(k * k)
  , numer_2(numer)
  , litera(new char)
{
  std::cout << "konstruktor z k:" << k << std::endl;
}


// Klasa A, definicja konstruktora
A::A(int b, int c)
  : numer(b * c)
  , numer_2(numer)
  , litera(new char)
{
  std::cout << "konstruktor z b,c:" << numer << std::endl;
}



// Klasa A, definicja konstruktora
// konstruktor kopiujący
A::A(const A &inne_A)
  : numer(inne_A.numer)
  , numer_2(inne_A.numer)
  , litera(new char(*(inne_A.litera)))
{
  std::cout << "kopiowanie z inne_A" << std::endl;
}


// Klasa A, definicja konstruktora
A::~A()
{
  std::cout << "destruktor " << numer << std::endl;
  delete litera;
}
