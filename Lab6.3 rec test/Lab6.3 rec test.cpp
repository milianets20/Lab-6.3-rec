#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3 rec/Lab6.3 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab63rectest
{
	TEST_CLASS(Lab63rectest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 0;
			int a[5] = { 1, -5, 4, -7, 9 };
			int i = 0;
			int max = a[0];
			t = find_maximum(a, 5, i, max);
			Assert::AreEqual(t, 9);
		}
	};
}
