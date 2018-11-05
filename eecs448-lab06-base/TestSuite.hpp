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
  std::cout << "Test 1: Initial list is empty: " << (test1() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 2: Initial list is size 0: " << (test2() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 3: addFront adds correct value to empty list: " << (test3() ? "PASSED" : "FAILED") << "\n";
}

bool TestSuite::test1()
{
  LinkedListOfInts testableList;
  return(testableList.isEmpty() == true);
}

bool TestSuite::test2()
{
  LinkedListOfInts testableList;
  int size = 0;
  return(testableList.size() == size);
}

bool TestSuite::test3()
{
  LinkedListOfInts testableList;
  // printout the list, and then see if it's the expected print out
  testableList.addFront(23);
  return (testableList.toVector().at(0) == 23);
  
}