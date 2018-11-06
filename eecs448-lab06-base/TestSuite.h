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
	*   @post print out the success of tests on the linked list
	*/
  void runTests();
  
	/** @pre None.
	*   @post None.
	*   @return true if isEmpty for initialized list is true, false otherwise.
	*/	
  bool test1();
	
	/** @pre None.
	*   @post None.
	*   @return true if size of initial list is 0, false otherwise.
	*/	
	bool test2();
	
	/** @pre None.
	*   @post None.
	*   @return true if addFront adds correct value to empty list, false otherwise.
	*/	
	bool test3();
	
	/** @pre None.
	*   @post None.
	*   @return true if isEmpty returns false after one addFront, false otherwise.
	*/	
	bool test4();
	
	/** @pre None.
	*   @post None.
	*   @return true if size of list after one addFront is 1, false otherwise.
	*/	
	bool test5();
	
	/** @pre None.
	*   @post None.
	*   @return true if addBack adds correct value to empty list, false otherwise.
	*/	
	bool test6();
	
	/** @pre None.
	*   @post None.
	*   @return true if isEmpty returns false after one addBack, false otherwise.
	*/	
	bool test7();
	
	/** @pre None.
	*   @post None.
	*   @return true if size of list after one addBack is 1, false otherwise.
	*/	
	bool test8();
	
	/** @pre None.
	*   @post None.
	*   @return true if list is empty after one addFront and one removeFront, false otherwise.
	*/	
	bool test9();
	
	/** @pre None.
	*   @post None.
	*   @return true if list is empty after one addFront and one removeBack, false otherwise.
	*/	
	bool test10();
	
	/** @pre None.
	*   @post None.
	*   @return true if isEmpty is true after one addFront and one removeFront, false otherwise.
	*/	
	bool test11();
	
	/** @pre None.
	*   @post None.
	*   @return true if isEmpty is true after one addFront and one removeBack, false otherwise.
	*/	
	bool test12();
	
	/** @pre None.
	*   @post None.
	*   @return true if removeFront after an addFront returns the true size to 0, false otherwise.
	*/	
	bool test13();
	
	/** @pre None.
	*   @post None.
	*   @return true if removeBack after an addFront returns the true size to 0, false otherwise.
	*/	
	bool test14();
	
	/** @pre None.
	*   @post None.
	*   @return true if size is 0 after an addFront and a removeFront, false otherwise.
	*/	
	bool test15();
	
	/** @pre None.
	*   @post None.
	*   @return true if size is 0 after an addFront and a removeBack, false otherwise.
	*/	
	bool test16();
	
	/** @pre None.
	*   @post None.
	*   @return true if size is correct after multiple addFronts, false otherwise.
	*/	
  bool test17();
	
	/** @pre None.
	*   @post None.
	*   @return true if size is correct after mutiple addBacks, false otherwise.
	*/	
	bool test18();
	
	/** @pre None.
	*   @post None.
	*   @return true if size is correct after multiple removeFronts, false otherwise.
	*/	
	bool test19();
	
	/** @pre None.
	*   @post None.
	*   @return true if size is correct after multiple removeBacks, false otherwise.
	*/	
	bool test20();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true for value at start of list with multiple addFronts, false otherwise.
	*/	
	bool test21();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true for value at middle of list with multiple addFronts, false otherwise.
	*/	
	bool test22();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true for value at end of list with multiple addFronts, false otherwise.
	*/	
	bool test23();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true for value at start of list with multiple addBacks, false otherwise.
	*/	
	bool test24();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true for value at middle of list with multiple addBacks, false otherwise.
	*/	
	bool test25();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true for value at end of list with multiple addBacks, false otherwise.
	*/	
	bool test26();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is false looking for value in empty list, false otherwise.
	*/	
	bool test27();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is false looking for non-existent value in populated list, false otherwise.
	*/	
	bool test28();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true looking for only value in list after one addFront, false otherwise.
	*/	
	bool test29();
	
	/** @pre None.
	*   @post None.
	*   @return true if search is true looking for only value in list after one addBack, false otherwise.
	*/	
	bool test30();
	
	/** @pre None.
	*   @post None.
	*   @return true if removeFront removes value after one addFront, false otherwise.
	*/	
	bool test31();
	
	/** @pre None.
	*   @post None.
	*   @return true if removeBack removes value after one addFront, false otherwise.
	*/	
	bool test32();
	
	/** @pre None.
	*   @post None.
	*   @return true if removeFront removes value after multiple addFronts, false otherwise.
	*/	
	bool test33();
	
	/** @pre None.
	*   @post None.
	*   @return true if removeBack removes value after multiple addFronts, false otherwise.
	*/	
	bool test34();
	
	/** @pre None.
	*   @post None.
	*   @return true if addFront adds correct value to front after multiple addFronts, false otherwise.
	*/	
	bool test35();
	
	/** @pre None.
	*   @post None.
	*   @return true if addBack adds correct value to back after multiple addBacks, false otherwise.
	*/	
	bool test36();

	private:
  
  int size;
};

#include "TestSuite.hpp"

#endif
