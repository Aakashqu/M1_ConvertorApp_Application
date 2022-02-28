#include"convertor.h"
#include"unity.h"
void test_convertor();
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_convertor);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecords(void)
{
    char name[20]="Aakash";
    TEST_ASSERT_EQUAL("Aakash", name);
   
}