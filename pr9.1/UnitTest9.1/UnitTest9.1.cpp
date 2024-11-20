#include "pch.h"
#include "CppUnitTest.h"

#include "../pr9.1/Source.cpp"
#include "../pr9.1/var.h"
#include "../pr9.1/var.cpp"
#include "../pr9.1/dod.h"
#include "../pr9.1/dod.cpp"
#include "../pr9.1/sum.h"
#include "../pr9.1/sum.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:

        TEST_METHOD(TestDod)
        {
            x = 1.0;
            n = 1;
            a = 1.0;
            double expected = a * (2 * n - 1) / (2.0 * n + 1.0) * (1 / (x * x));

            dod();

            Assert::AreEqual(expected, a, 1e-6);
        }
    };
}