#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1_string/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(testCount)
        {
            string str1 = "BKACCIS";

            Assert::AreEqual(6, Count(str1));
        }

        TEST_METHOD(testChange)
        {
            string str1 = "BASIC{}";

            string result1 = Change(str1);

            Assert::AreEqual(string("Delphi{}"), result1);

        }
    };
}