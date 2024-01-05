#include <unity.h>
#include <lib.h>

void setUp(void) {
	// set stuff up here
}

void tearDown(void) {
	// clean stuff up here
}

void test_returnstrue(void) {
	TEST_ASSERT(returnstrue());
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_returnstrue);
	return UNITY_END();
}
