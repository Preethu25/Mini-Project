#include <unity.h>
#include "functions.h"
#define PROJECT_NAME    "Calendar"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void Test_getDayNumber(){
    TEST_ASSERT_EQUAL(5,getDayNumber(16,02,2005));
    TEST_ASSERT_EQUAL(6, getDayNumber(05,11,1990));
    TEST_ASSERT_EQUAL(0, getDayNumber(28,06,2010));
}

}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(Test_getDayNumber);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
