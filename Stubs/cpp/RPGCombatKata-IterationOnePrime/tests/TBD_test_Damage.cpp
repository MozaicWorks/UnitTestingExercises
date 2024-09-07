#include "doctest.h"
#include "fakeit.hpp"

using fakeit::Mock;
using fakeit::When;

TEST_SUITE_BEGIN("unit");

TEST_CASE("A failing test"){
	//Mock<...> xStub;
	//When(Method(xStub, ...)).Return(value);
	// xStub.get()

	CHECK(false);
}

TEST_SUITE_END();
