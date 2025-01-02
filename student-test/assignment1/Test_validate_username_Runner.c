/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"
#include <stdbool.h>
#include <stdlib.h>

/*=======External Functions This Runner Calls=====*/
extern void Test_validate_username_setUp(void);
extern void Test_validate_username_tearDown(void);
extern void test_validate_my_username();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Setup (stub)=====*/
void Test_validate_username_setUp(void) {}

/*=======Teardown (stub)=====*/
void Test_validate_username_tearDown(void) {}

/*=======Test Reset Options=====*/
void Test_validate_username_resetTest(void);
void Test_validate_username_resetTest(void)
{
  Test_validate_username_tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  Test_validate_username_setUp();
}
void Test_validate_username_verifyTest(void);
void Test_validate_username_verifyTest(void)
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
        Test_validate_username_setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        Test_validate_username_tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
 int Test_validate_username_main(void);
int Test_validate_username_main(void)
{
  UnityBegin("/home/piratage/Coursera/Assignment_1/assignment-1-CyberPirata/assignment-autotest/../student-test/assignment1/Test_validate_username.c");
  run_test(test_validate_my_username, "test_validate_my_username", 15);

  return UnityEnd();
}
