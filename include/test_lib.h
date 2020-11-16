/*
 * test_lib.h
 *
 *  Created on: Oct 26, 2020
 *      Author: mwichro
 */

#ifndef INCLUDE_TEST_LIB_H_
#define INCLUDE_TEST_LIB_H_

#include <iostream>

static double PI_razy_dwa;

namespace Tools {
double dodawanie_d(double a, double b);

template <class T>
T dodawanie(T a, T b);

inline double dodaj(double a, double b, int coeff = 1) { return a + b * coeff; }
}  // namespace Tools

template <class T>
T odejmowanie(T a, T b);

class B;

class A {
 public:
  A();
  explicit A(int k);
  A(int b, int c);
  A(const A &inne_A);
  //  A(double k) = delete;

  A(const B &b);
  operator B() = delete;
  // rzutowanie obiektu klasy A na B
  //  A x
  // (B)x;

  const A &operator>(A &&drugie_a) {
    if (&drugie_a != this) {
      delete litera;
      litera = new char(*drugie_a.litera);
      //      delete drugie_a.litera;
    }
    return *this;
  }

  const A &operator=(const int &liczba) {
    std::cout << "operator przypisania" << std::endl;
    /*if (&drugie_a != this) {
      delete litera;
      litera = new char(*drugie_a.litera);
    }*/
    return *this;
  }

  A operator+(const A &drugie_a) const {
    std::cout << "operator dodawania" << std::endl;
    return A(this->numer + drugie_a.numer);
  }

  ~A();

  void b(A &drugie_a) const;
  void sprawdzenie() const {
    x = 50;
    // blad!
    // y = 8;
  }

 private:
  const int numer;
  const int numer_2;
  char *litera;
  // zmienna, która mogą modyfikować metody const
  mutable int x;
  int y;
};

#endif /* INCLUDE_TEST_LIB_H_ */
