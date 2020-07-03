#include "example.h"

example::example()
{
	std::cout << "constructed" << std::endl;
}

example::example(char name)
{
	m_name = name;
	std::cout << name << " created" << std::endl;
}

example::~example()
{
	std::cout << m_name << " destructed" << std::endl;
}
