#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3.D/DateOpen.h"
#include "../Lab_3.3.D/DateOpen.cpp"
#include "../Lab_3.3.D/DateClosed.h"
#include "../Lab_3.3.D/DateClosed.cpp"
#include "../Lab_3.3.D/Triad.h"
#include "../Lab_3.3.D/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			DateOpen m(8, 5, 15);
			Assert::AreEqual(8, m.getFirst());
		}
	};
}
