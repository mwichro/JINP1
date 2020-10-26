/*
 * test_lib.h
 *
 *  Created on: Oct 26, 2020
 *      Author: mwichro
 */

#ifndef INCLUDE_TEST_LIB_H_
#define INCLUDE_TEST_LIB_H_

namespace Tools
{
  double
  dodawanie_d(double a, double b);

  template <class T>
  T
  dodawanie(T a, T b);
} // namespace Tools

template <class T>
T
odejmowanie(T a, T b);

class A
{
  A();
  void
  b();

  const int a;
};

#endif /* INCLUDE_TEST_LIB_H_ */
