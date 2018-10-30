/**
*	@author Ian Yake
*	@date 10/20/18
*	@brief A header file for a testing class
*/

#ifndef TESTER_H
#define TESTER_H

template <typename T>
class Tester
{
	public:

	/** @pre None
	*   @post A testing object is created
	*/
	Tester();
  
  /** @pre None
	*   @post print out the success of tests on the linkeed list
	*/
  void runTests();
  /*
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
  bool test11();*/

	private:
};

#include "TestSuite.hpp"

#endif
