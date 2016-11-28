// CPPSandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector3.h"

int main()
{
	Vector3 v1(0, 1, 2), v2(2, 3, 4);

	std::cout << "hi" << std::endl;

	std::cout << v1 + v2 << std::endl;
	std::cout << v1 * v2 << std::endl;
	std::cout << v1 * 2 << std::endl;
	std::cout << v1 * 2 - v1 << std::endl;
	std::cout << v1 % v2 << std::endl;
	std::cout << (v1 % v2) * v1 << std::endl;

	return 0;
}
