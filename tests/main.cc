#include <gtest/gtest.h>

#include <fstream>


int
main(int argc, char *argv[])
{

  std::ofstream logfile;
    {
      logfile.open("output");
//      deallog.attach(logfile);
//      deallog << std::setprecision(4);
//      deallog.depth_file(10);
    }

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

