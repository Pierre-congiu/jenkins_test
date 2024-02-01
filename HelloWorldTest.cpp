#include <gtest/gtest.h>

extern "C" {
#include "HelloWorld.h"
}


TEST(HelloWorld, FailingOnPurpose) {
	ASSERT_TRUE(false);
}

TEST(HelloWorld, Greetings) {
	ASSERT_EQ("Hello World", greetings());
}