// TestCOMFromCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <combaseapi.h>
#include <iostream>
#include "ClassCOMConsumer.h"

int main()  // NOLINT(bugprone-exception-escape)
{
	CoInitialize(nullptr);
	// ReSharper disable once CppUseAuto
	ClassCOMConsumer* obj = new ClassCOMConsumer();  // NOLINT(modernize-use-auto, modernize-use-auto)
    std::cout << "Hello World!\n";
	std::cout << obj->add(1, 2);
	return 0;
}