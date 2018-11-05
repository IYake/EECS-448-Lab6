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
  std::cout << "Test 1: isEmpty for initial list is true: " << (test1() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 2: size of initial list is 0: " << (test2() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 3: addFront adds correct value to empty list: " << (test3() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 4: isEmpty returns false after one addFront: " << (test4() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 5: size of list after one addFront is 1: " << (test5() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 6: addBack adds correct value to empty list: " << (test6() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 7: isEmpty returns false after one addBack: " << (test7() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 8: size of list after one addBack is 1: " << (test8() ? "PASSED" : "FAILED") << "\n";
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
  testableList.addFront(23);
  return (testableList.toVector().at(0) == 23);
}

bool TestSuite::test4()
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  return (testableList.isEmpty() == false);
}

bool TestSuite::test5()
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  return (testableList.size() == 1);
}

bool TestSuite::test6()
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  return (testableList.toVector().at(0) == 23);
}

bool TestSuite::test7()
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  return (testableList.isEmpty() == false);
}

bool TestSuite::test8()
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  return (testableList.size() == 1);
}

