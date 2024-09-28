#include "pch.h"
#include "CppUnitTest.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        double h(const double a, const double b) {
            return (a * a - sin(b) * cos(a) + b * b);
        }

        TEST_METHOD(TestHFunction)
        {   
            Assert::AreEqual(1.0, h(1, 0), 1e-9); 
        }
    };
}
