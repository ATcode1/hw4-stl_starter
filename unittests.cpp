#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "hw4.h"

TEST_CASE("Stack Tests") {
    SUBCASE("Postive Numbers Test, Pushing/Popping from the stack") {
        string inputfile = "pos-num.txt";
        stack<int> s;
	insertStack(s, inputfile);

        CHECK(s.size() == 5);
	CHECK(s.top() == 5);
	CHECK(popElem(s) == 1);
    }

    SUBCASE("Negative Numbers Test, Pushing/Popping from the stack") {
        string inputfile = "neg-num.txt";
        stack<int> s;
        CHECK_THROWS(insertStack(s, inputfile));

	CHECK(s.size() == 5);
	CHECK(s.top() == -5);
	CHECK(popElem(s) == -1);
    }
}

TEST_CASE("Queue Tests"){

    SUBCASE("Postive Numbers Test, Queue/Dequeue") {
        string inputfile = "pos-num.txt";
        queue<int> q;
	insertQueue(q, inputfile);

        CHECK(q.size() == 5);
	CHECK(q.front() == 1);
	CHECK(popQueue(q) == 5);
    }

    SUBCASE("Negative Numbers Test, Queue/Dequeue") {
        string inputfile = "neg-num.txt";
        queue<int> q;
	insertQueue(q, inputfile);

        CHECK(q.size() == 5);
	CHECK(q.front() == -1);
	CHECK(popQueue(q) == -5);
    }

}
