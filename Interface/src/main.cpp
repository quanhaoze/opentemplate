#include <iostream>
#include "facttail.h"
#include "StringHash.h"

int main(int argc, char *argv[])
{
	std::cout << "5!=" << hashStringValue((void *)"hello,world") << std::endl;
	return 0;
}
