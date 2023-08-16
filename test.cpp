#include <gtest/gtest.h>

// Define a test case
TEST(MyTest, Test1) {
    int x = 1;
    ASSERT_EQ(x, 1);
}

TEST(MyTest, Test2) {
    int y = 2;
    ASSERT_NE(y, 1);
}

// Define the main function
int main(int argc, char** argv) {
    // Initialize the Google Test framework
    ::testing::InitGoogleTest(&argc, argv);

    // Run all tests
    return RUN_ALL_TESTS();
}
