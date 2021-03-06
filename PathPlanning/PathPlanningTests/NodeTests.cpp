#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PathPlanning/Node.h"
#include "../PathPlanning/Node.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PathPlanningTests
{
	TEST_CLASS(NodeTests)
	{
	public:

		TEST_METHOD(NodeSetGetTest)
		{
			Node* n = new Node{};
			n->SetG(0);
			n->SetH(1);
			Assert::AreEqual(0, n->GetG());
			Assert::AreEqual(1, n->GetH());
			Assert::AreEqual(1, n->GetF());
			n->SetG(1);
			Assert::AreEqual(1, n->GetG());
			Assert::AreEqual(1, n->GetH());
			Assert::AreEqual(2, n->GetF());
			n->SetH(3);
			Assert::AreEqual(1, n->GetG());
			Assert::AreEqual(3, n->GetH());
			Assert::AreEqual(4, n->GetF());
		}

		TEST_METHOD(NodeLessThanOperatorTest)
		{
			Node* n1 = new Node{};
			n1->SetG(0);
			n1->SetH(1);
			Node* n2 = new Node{};
			n2->SetG(0);
			n2->SetH(2);
			Assert::IsTrue(*n1 < *n2);
			Node* n3 = new Node{};
			n2->SetG(0);
			n2->SetH(0);
			Assert::IsFalse(*n1 < *n3);
			Node* n4 = new Node{};
			n2->SetG(1);
			n2->SetH(0);
			Assert::IsFalse(*n1 < *n4);
		}
	};
}