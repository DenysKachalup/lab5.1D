#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1D/Pair.h"
#include "../lab5.1D/Pair.cpp"
#include "../lab5.1D/Vector2D.h"
#include "../lab5.1D/Vector2D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Vector2D b(1, 0);
			++b;
			Assert::AreEqual(b.getX(), 2.0);
		}
	};
}
