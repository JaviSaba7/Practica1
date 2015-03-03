#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Pràctica1_Classes\Point2d.h"
#include "..\Pràctica1_Classes\String.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPoint2d
{
	TEST_CLASS(UnitTestPoint2d)
	{
	
	public:

		TEST_METHOD(IsZero)
		{
			Point2d Point1;

			Point1.x = 3;
			Point1.y = 3;

			Assert::IsFalse(Point1.IsZero());

		}

		TEST_METHOD(SetZero)
		{
			Point2d Point1;

			Point1.x = 9;
			Point1.y = 9;

			Point1.SetZero();

			Assert::IsTrue(Point1.x == 0 && Point1.y == 0);
		}

		TEST_METHOD(DistanceTo)
		{
			Point2d Point1, Point2;
			float Distance;

			Point1.x = 0;
			Point1.y = 0;
			Point2.x = 4;
			Point2.y = 3;
			
			Distance = Point1.DistanceTo(Point2);

			Assert::IsTrue(Distance == 5);
		}

		TEST_METHOD(Addition)
		{
			Point2d Point1, Point2, Point3;
			
			Point1.x = 2;
			Point1.y = 2;
			Point2.x = 1;
			Point2.y = 1;

			Point1 = Point1 + Point2;

			Assert::IsTrue(Point3.x == 3 && Point3.y == 3);
		}

		TEST_METHOD(Substract)
		{
			Point2d Point1, Point2, Point3;

			Point1.x = 4;
			Point1.x = 4;
			Point2.x = 3;
			Point2.y = 3;

			Point3 = Point1 - Point2;

			Assert::IsTrue(Point3.x == 1 && Point3.y == 1);
		}

		TEST_METHOD(AditionEqual)
		{
			Point2d Point1, Point2;

			Point1.x = 6;
			Point1.y = 6;
			Point2.x = 7;
			Point2.y = 7;

			Point1 += Point2;

			Assert::IsTrue(Point1.x == 13 && Point1.y == 13);

		}

		TEST_METHOD(SubstractEqual)
		{
			Point2d Point1, Point2;

			Point1.x = 19;
			Point1.y = 19;
			Point2.x = 20;
			Point2.y = 20;

			Point1 -= Point2;

			Assert::IsTrue(Point1.x == -1 && Point1.y == -1);

		}

		TEST_METHOD(EqualEqual)
		{
			Point2d Point1, Point2;

			Point1.x = 3;
			Point1.y = 3;
			Point2.x = 3;
			Point2.y = 3;

			Assert::IsTrue(Point1.operator== (Point2));

		}

		TEST_METHOD(Different)
		{
			Point2d Point1, Point2;

			Point1.x = 13;
			Point1.y = 13;
			Point2.x = 14;
			Point2.y = 14;

			Assert::IsTrue(Point1.operator!= (Point2));
		}
	};


	TEST_CLASS(UnitTestString)
	{

	public:

		TEST_METHOD(EmptyConstructor)
		{
			String ad;

			Assert::IsTrue(ad.str[0] == '\0');
		}

		TEST_METHOD(FirstConstructor)
		{
			String a = "hello";

			Assert::IsTrue(a.size == 5);
		}

		TEST_METHOD(SecondConstructor)
		{
			String a = "hello";

			Assert::IsTrue(strcpy_s(a.str, a.size, a.GetString()));
		}

		TEST_METHOD(FirstEqualEqual)
		{
			String a = "hello";
			String b = "hello";

			Assert::IsTrue(a.operator==(b));
		}

		TEST_METHOD(SecondEqualEqual)
		{
			String a = "hello";
			char* b = "hello";

			Assert::IsTrue(a.operator==(b));
		}

		TEST_METHOD(FirstDifferent)
		{
			String a = "hello";
			String b = "world";

			Assert::IsTrue(a.operator!=(b) != 0);
		}

		TEST_METHOD(SecondDifferent)
		{
			String a = "hello";
			char* b = "world";

			Assert::IsTrue(a.operator!=(b) != 0);
		}

		TEST_METHOD(FirstEqual)
		{
			String a = "hello";
			String b = "world";

			a = b;

		}

		TEST_METHOD(SecondOperator)
		{
			String a = "hello";
			char* b = "world";

			a = b;

		}

		TEST_METHOD(AdditionalEqual)
		{
			String a = "hello";
			String b = "world";

			a += b;

			Assert::IsTrue(a == "helloworld");
		}

		TEST_METHOD(SecondAdditionalEqual)
		{
			String a = "hello";
			char* b = "world";

			a += b;
			Assert::IsTrue(a == "helloworld");
		}

		TEST_METHOD(Lenght)
		{
			String a = "hello";
			Assert::IsTrue(a.len() == 10);
		}

		TEST_METHOD(Alloc)
		{
			String a = "hello";
			String b = "world";
		}

		TEST_METHOD(Clear)
		{
			String a = "hello";
			a.Clear();

			Assert::IsTrue(a.str[0] = '\0');
		}

		TEST_METHOD(GetString)
		{
			String a = "hello";
			Assert::IsTrue(a.GetString() == "hello");
		}
		
		TEST_METHOD(Capacity)
		{
			String a = "hello";
			int cap;

			cap = a.Capacity();

			Assert::IsTrue(cap = 5);
		}
	};
};
