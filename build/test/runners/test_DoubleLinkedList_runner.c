/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_DoubleLinkedListAddItemToHead_given_item2_expect_head_points_item2_and_tail_points_item1_both_item1next_item2prev_points_to_null();
extern void test_DoubleLinkedListAddItemToTail_given_item2_expect_tail_points_item2_and_head_points_item1_both_item2next_item1prev_points_to_null();
extern void test_DoubleLinkedListRemoveItemfromHead_given_list_contains_no_item_expect_function_to_return_null();
extern void test_DoubleLinkedListRemoveItemfromHead_given_item1_expect_no_item_function_to_return_null();
extern void test_DoubleLinkedListRemoveItemfromHead_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1();
extern void test_DoubleLinkedListRemoveItemToTail_given_list_contains_no_item_expect_function_to_return_null();
extern void test_DoubleLinkedListRemoveItemToTail_given_item1_expect_no_item_function_to_return_null();
extern void test_DoubleLinkedListRemoveItemToTail_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_DoubleLinkedList.c");
  run_test(test_DoubleLinkedListAddItemToHead_given_item2_expect_head_points_item2_and_tail_points_item1_both_item1next_item2prev_points_to_null, "test_DoubleLinkedListAddItemToHead_given_item2_expect_head_points_item2_and_tail_points_item1_both_item1next_item2prev_points_to_null", 32);
  run_test(test_DoubleLinkedListAddItemToTail_given_item2_expect_tail_points_item2_and_head_points_item1_both_item2next_item1prev_points_to_null, "test_DoubleLinkedListAddItemToTail_given_item2_expect_tail_points_item2_and_head_points_item1_both_item2next_item1prev_points_to_null", 77);
  run_test(test_DoubleLinkedListRemoveItemfromHead_given_list_contains_no_item_expect_function_to_return_null, "test_DoubleLinkedListRemoveItemfromHead_given_list_contains_no_item_expect_function_to_return_null", 115);
  run_test(test_DoubleLinkedListRemoveItemfromHead_given_item1_expect_no_item_function_to_return_null, "test_DoubleLinkedListRemoveItemfromHead_given_item1_expect_no_item_function_to_return_null", 145);
  run_test(test_DoubleLinkedListRemoveItemfromHead_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1, "test_DoubleLinkedListRemoveItemfromHead_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1", 183);
  run_test(test_DoubleLinkedListRemoveItemToTail_given_list_contains_no_item_expect_function_to_return_null, "test_DoubleLinkedListRemoveItemToTail_given_list_contains_no_item_expect_function_to_return_null", 226);
  run_test(test_DoubleLinkedListRemoveItemToTail_given_item1_expect_no_item_function_to_return_null, "test_DoubleLinkedListRemoveItemToTail_given_item1_expect_no_item_function_to_return_null", 255);
  run_test(test_DoubleLinkedListRemoveItemToTail_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1, "test_DoubleLinkedListRemoveItemToTail_given_item2_expect_itemRemoved_of_item2_head_and_tail_points_to_item1", 294);

  return UnityEnd();
}
