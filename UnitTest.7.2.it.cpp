#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.7.2.it/lab.7.2.it.cpp" // ���� �� ������ ��������� ����

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72it
{
	TEST_CLASS(UnitTest72it)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// ����������� ������ ������
			const int rows = 3;
			const int cols = 3;

			// ������� ������� ��� ��������
			int testMatrix[rows][cols] = {
				{ 14, 22, 5 },
				{ 7, 45, 30 },
				{ 25, 8, 60 }
			};
		}
	};
}
