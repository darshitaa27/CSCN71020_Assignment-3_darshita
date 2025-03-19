#include "pch.h"
#include "CppUnitTest.h"
#include "..\project1\is_prime.c" // Include the header file instead of .c

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PrimeCheckerTests
{
    TEST_CLASS(PrimeCheckerTests)
    {
    public:
        TEST_METHOD(TestIsPrime_PrimeNumber)
        {
            // Test case: Checking a prime number
            int num = 11;

            // Call the function
            const char* result = is_prime(num);

            // Verify the expected output
            Assert::AreEqual("Prime", result);
        }

        TEST_METHOD(TestIsPrime_NonPrimeNumber)
        {
            // Test case: Checking a non-prime number
            int num = 6;

            // Call the function
            const char* result = is_prime(num);

            // Verify the expected output
            Assert::AreEqual("Not Prime", result);
        }

        TEST_METHOD(TestIsPrime_EdgeCaseOne)
        {
            // Test case: Checking the edge case where the number is 1
            int num = 1;

            // Call the function
            const char* result = is_prime(num);

            // Verify the expected output
            Assert::AreEqual("Not Prime", result);
        }

        TEST_METHOD(TestIsPrime_EdgeCaseZero)
        {
            // Test case: Checking the edge case where the number is 0
            int num = 0;

            // Call the function
            const char* result = is_prime(num);

            // Verify the expected output
            Assert::AreEqual("Not Prime", result);
        }
    };
}
