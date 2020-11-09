#include <gtest/gtest.h>
#include <test_lib.h>

TEST(GTESTBase, CheckTrue) { ASSERT_TRUE(true); }

TEST(TESTLIB, Dodawanie) {
  double a = 9;
  double b = 6;
  EXPECT_EQ(Tools::dodaj(9, 6), 14);
}
