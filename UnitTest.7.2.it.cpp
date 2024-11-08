#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.7.2.it/lab.7.2.it.cpp" // шлях до вашого основного коду

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72it
{
	TEST_CLASS(UnitTest72it)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Ініціалізація розмірів масиву
			const int rows = 3;
			const int cols = 3;

			// Тестова матриця для перевірки
			int testMatrix[rows][cols] = {
				{ 14, 22, 5 },
				{ 7, 45, 30 },
				{ 25, 8, 60 }
			};
		}
	};
}
