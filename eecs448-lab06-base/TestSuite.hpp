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
  std::cout << "Test 1: isEmpty for initial list is true: "                                << (test1() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 2: size of initial list is 0: "                                       << (test2() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 3: addFront adds correct value to empty list: "                       << (test3() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 4: isEmpty returns false after one addFront: "                        << (test4() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 5: size of list after one addFront is 1: "                            << (test5() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 6: addBack adds correct value to empty list: "                        << (test6() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 7: isEmpty returns false after one addBack: "                         << (test7() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 8: size of list after one addBack is 1: "                             << (test8() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 9: list is empty after one addFront and one removeFront: "            << (test9() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 10: list is empty after one addFront and one removeBack: "            << (test10() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 11: isEmpty is true after one addFront and one removeFront: "         << (test11() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 12: isEmpty is true after one addFront and one removeBack: "          << (test12() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 13: removeFront after an addFront returns the true size to 0: "       << (test13() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 14: removeBack after an addFront returns the true size to 0: "        << (test14() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 15: size is 0 after an addFront and a removeFront: "                  << (test15() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 16: size is 0 after an addFront and a removeBack: "                   << (test16() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 17: size is correct after multiple addFronts: "                       << (test17() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 18: size is correct after mutiple addBacks: "                         << (test18() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 19: size is correct after multiple removeFronts: "                         << (test19() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 20: size is correct after multiple removeBacks: "                          << (test20() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 21: search is true for value at start of list with multiple addFronts: "   << (test21() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 22: search is true for value at middle of list with multiple addFronts: "  << (test22() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 23: search is true for value at end of list with multiple addFronts: "     << (test23() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 24: search is true for value at start of list with multiple addBacks: "    << (test24() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 25: search is true for value at middle of list with multiple addBacks: "   << (test25() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 26: search is true for value at end of list with multiple addBacks: "      << (test26() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 27: search is false looking for value in empty list: "                     << (test27() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 28: search is false looking for non-existent value in populated list: "    << (test28() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 29: search is true looking for only value in list after one addFront: "    << (test29() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 30: search is true looking for only value in list after one addBack: "     << (test30() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 31: removeFront removes value after one addFront: "                        << (test31() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 32: removeBack removes value after one addFront: "                         << (test32() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 33: removeFront removes value after multiple addFronts: "                  << (test33() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 34: removeBack removes value after multiple addFronts: "                   << (test34() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 35: addFront adds correct value to front after multiple addFronts: "       << (test35() ? "PASSED" : "FAILED") << "\n";
  std::cout << "Test 36: addBack adds correct value to back after multiple addBacks: "          << (test36() ? "PASSED" : "FAILED") << "\n";
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

bool TestSuite::test9() //see if vector is empty after removeFront
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeFront();
  return (testableList.toVector().empty() == true);
}

bool TestSuite::test10()//see if vector is empty after removeBack
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeBack();
  return (testableList.toVector().empty() == true);
}

bool TestSuite::test11()//see if vector isEmpty is true after removeFront
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeFront();
  return (testableList.isEmpty() == true);
}

bool TestSuite::test12()//see if vector isEmpty is true after removeBack
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeBack();
  return (testableList.isEmpty() == true);
}

bool TestSuite::test13()//see if size is 0 after removeFront
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeFront();
  return (testableList.toVector().size() == 0);
}

bool TestSuite::test14()//see if size is 0 after removeBack
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeBack();
  return (testableList.toVector().size() == 0);
}

bool TestSuite::test15()//see if size returns 0 after removeFront
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeFront();
  return (testableList.size() == 0);
}

bool TestSuite::test16()//see if size returns 0 after removeBack
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeBack();
  return (testableList.size() == 0);
}

bool TestSuite::test17()//see if size returns 4 after 4 addFronts
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  return (testableList.size() == 4);
}

bool TestSuite::test18()//see if size returns 4 after 4 addBacks
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  testableList.addBack(24);
  testableList.addBack(25);
  testableList.addBack(26);
  return (testableList.size() == 4);
}

bool TestSuite::test19()//see if size is correct after multiple removeFronts
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  testableList.removeFront();
  testableList.removeFront();
  return (testableList.size() == 2);
}

bool TestSuite::test20()//see if size is correct after multiple removeBacks
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  testableList.removeBack();
  testableList.removeBack();
  return (testableList.size() == 2);
}

bool TestSuite::test21()//see if search finds value at start of list after 4 addFronts
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  return (testableList.search(23) == true);
}

bool TestSuite::test22()//see if search finds value at middle of list after 4 addFronts
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  return (testableList.search(24) == true);
}

bool TestSuite::test23()//see if search finds value at end of list after 4 addFronts
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  return (testableList.search(26) == true);
}

bool TestSuite::test24()//see if search finds value at start of list after 4 addBacks
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  testableList.addBack(24);
  testableList.addBack(25);
  testableList.addBack(26);
  return (testableList.search(23) == true);
}

bool TestSuite::test25()//see if search finds value at middle of list after 4 addBacks
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  testableList.addBack(24);
  testableList.addBack(25);
  testableList.addBack(26);
  return (testableList.search(24) == true);
}

bool TestSuite::test26()//see if search finds value at end of list after 4 addBacks
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  testableList.addBack(24);
  testableList.addBack(25);
  testableList.addBack(26);
  return (testableList.search(26) == true);
}

bool TestSuite::test27()//see if search returns false looking through empty list
{
  LinkedListOfInts testableList;
  return (testableList.search(26) == false);
}

bool TestSuite::test28()//see if search returns false looking for value not in list
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  return (testableList.search(35) == false);
}

bool TestSuite::test29()//see if search returns true looking for value in singly populated list after addFront
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  return (testableList.search(23) == true);
}

bool TestSuite::test30()//see if search returns true looking for value in singly populated list after addBack
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  return (testableList.search(23) == true);
}

bool TestSuite::test31()//see if removeFront removes the value from single linked list
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeFront();
  return (!(testableList.toVector().at(0) == 23));
}

bool TestSuite::test32()//see if removeBack removes the value single linked list
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.removeBack();
  return (!(testableList.toVector().at(0) == 23));
}

bool TestSuite::test33()//see if removeFront removes the value populated linked list
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  testableList.removeFront();
  return (!(testableList.toVector().at(0) == 26));
}

bool TestSuite::test34()//see if removeBack removes the value populated linked list
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  testableList.removeBack();
  return (!(testableList.toVector().back() == 23));
}

bool TestSuite::test35()//see if addFront adds to front after multiple addFronts
{
  LinkedListOfInts testableList;
  testableList.addFront(23);
  testableList.addFront(24);
  testableList.addFront(25);
  testableList.addFront(26);
  return (testableList.toVector().at(0) == 26);
}

bool TestSuite::test36()//see if addBack adds to front after multiple addBacks
{
  LinkedListOfInts testableList;
  testableList.addBack(23);
  testableList.addBack(24);
  testableList.addBack(25);
  testableList.addBack(26);
  return (testableList.toVector().back() == 26);
}


















