// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include <stdlib.h>
#include <memory>

#include "exampleConfig.h"
#include "example.h"
#include "Task.h"

/*
 * Command Line program to organise tasks.
 */
int main() {
	std::cout << "Task List" << std::endl << std::endl;

	Task t1{};
	auto t2 = std::make_unique<Task>("Laundry",
			"wash the clothes");
	auto t3 = std::make_shared<Task>("Grooming",
			"trim beard");

	t1.Title("Gardening").Description("mow the lawn");

	std::cout << t1.Details() << std::endl << std::endl;
	std::cout << t2->Details() << std::endl << std::endl;
	std::cout << t3->Details() << std::endl << std::endl;
}
