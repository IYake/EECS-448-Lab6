/**
*	@author Ian Yake
*	@date 10/30/18
*	@file TestSuite.hpp
*/
#include <iostream>

TestSuite::TestSuite()
{
    
}

void TestSuite::runTests()
{
  std::cout << "Test 1: size of empty list is zero: " << (test1() ? "PASSED" : "FAILED") << "\n";
}

bool TestSuite::test1()
{
  LinkedListOfInts testableList;
  size = 0;
  return(testableList.isEmpty() == size);
}