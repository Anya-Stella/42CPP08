#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/Span.hpp"

int main()
{
	std::srand(std::time(NULL));

	Span sp(5);
	sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl; // 2
    std::cout << sp.longestSpan() << std::endl;  // 14

	Span big(10000);
	for (int i=0;i<10000;i++) big.addNumber(std::rand());
    std::cout << big.shortestSpan() << std::endl;
    std::cout << big.longestSpan() << std::endl;
}

