#include <unity.h>
#include "functions.h"
#define PROJECT_NAME    "Calendar"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void Test_calendar(){
    TEST_ASSERT_EQUAL(5,calendar(2020,08));
    TEST_ASSERT_EQUAL(6, calendar(2005,09));
    TEST_ASSERT_EQUAL(0, calendar(1975,05));
}

}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(Test_calendar);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
