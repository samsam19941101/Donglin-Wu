#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CuTest.h"
#include "Questions.h"
    


   
    //student number 400036762 Donglin Wu
//=========test 1==================================
	void TestQ1_1(CuTest *tc) {
		
		int input1=2,input2=4,expected=6,actual;
		actual=addFunction(input1,input2);
		CuAssertIntEquals(tc, expected, actual);
	}

//=========test 2==================================
    
	void TestQ1_2(CuTest *tc) {
		
		int input1=0,input2=4,expected=4,actual;
		actual=addFunction(input1,input2);
		CuAssertIntEquals(tc, expected, actual);
	}
    
   
  
//===========================================================
	CuSuite* Lab0GetSuite() {
		CuSuite* suite = CuSuiteNew();
		SUITE_ADD_TEST(suite, TestQ1_1);
		SUITE_ADD_TEST(suite, TestQ1_2);
       
       

		return suite;
	}
    
