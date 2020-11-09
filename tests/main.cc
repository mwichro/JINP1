#include <gtest/gtest.h>

#include <fstream>

int main(int argc, char *argv[]) {
  std::ofstream logfile;

  logfile.open("output");

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
