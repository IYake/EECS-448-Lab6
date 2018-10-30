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
  

	private:
  
  int size;
};

#include "TestSuite.hpp"

#endif
