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

double dodaj(double a, double b) { return a + b; }
}  // namespace Tools

template <class T>
T odejmowanie(T a, T b);

class A {
 public:
  A();
  A(int k);
  A(int b, int c);
  A(const A &inne_A);

  ~A();

  void b();

 private:
  const int numer;
  const int numer_2;
  char *litera;
};

#endif /* INCLUDE_TEST_LIB_H_ */
