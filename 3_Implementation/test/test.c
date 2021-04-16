#include <unity.h>
#include "functions.h"
#define PROJECT_NAME    "Calendar"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void Test_calendar(){
    TEST_ASSERT_EQUAL(5,calendar(2005,08));
    TEST_ASSERT_EQUAL(6, calendar(1965,22));
    TEST_ASSERT_EQUAL(0, calendar(2020,02));
}

void Test_getName(){
 TEST_ASSERT_EQUAL_CHAR_ARRAY("Sunday",getname(0),7);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("Monday",getname(1),8);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("Tuesday",getname(2),5);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("Wednesday",getname(3),5);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("Thursday",getname(4),3);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("Friday",getname(5),4);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("Saturday",getname(6),4);
}

void Test_isLeapYear(){
    TEST_ASSERT_EQUAL(5,isLeapYear(2005));
    TEST_ASSERT_EQUAL(6,isLeapYear(1965));
    TEST_ASSERT_EQUAL(0,isLeapYear(2020));
}

}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(calendar);
  RUN_TEST(getname);
  RUN_TEST(isLeapYear);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
