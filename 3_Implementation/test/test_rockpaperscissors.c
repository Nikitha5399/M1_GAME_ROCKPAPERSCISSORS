#include "unity.h"
#include <RockPaperScissors.h>

/* Modify these two lines according to the project */
#include <RockPaperScissors.h>
#define PROJECT_NAME    "RockPaperScissors"

/* Prototypes for all the test functions */
void test_greater(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_main);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
 

/* Write all the test functions */ 
void test_greater(void) {
  
TEST_ASSERT_EQUAL(greater(playerScore,compScore),1);
    TEST_ASSERT_EQUAL(greater(playerScore,compScore),-1);
    TEST_ASSERT_EQUAL(greater(playerScore,compScore),0);
}
