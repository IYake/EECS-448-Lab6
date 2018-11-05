/**
*	@author Ian Yake
*	@date 10/20/18
*	@brief A header file for a testing class
*/
#include "LinkedListOfInts.h"

#ifndef TESTER_H
#define TESTER_H

class TestSuite
{
	public:

	/** @pre None
	*   @post A testing object is created
	*/
	TestSuite();
  
  /** @pre None
	*   @post print out the success of tests on the linkeed list
	*/
  void runTests();
  
  bool test1();
	bool test2();
	bool test3();
	bool test4();
	bool test5();
	bool test6();
	bool test7();
	bool test8();
	bool test9();
	bool test10();
	bool test11();
	bool test12();
	bool test13();
	bool test14();
	bool test15();
	bool test16();
  bool test17();
	bool test18();
	bool test19();
	bool test20();
	bool test21();
	bool test22();
	bool test23();
	bool test24();
	bool test25();
	bool test26();
	bool test27();
	bool test28();
	bool test29();
	bool test30();
	bool test31();
	bool test32();
	bool test33();
	bool test34();
	bool test35();
	bool test36();

	private:
  
  int size;
};

#include "TestSuite.hpp"

#endif
