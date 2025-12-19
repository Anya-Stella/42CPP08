#include <iostream>
#include <vector>
#include <list>
#include "../include/easyfind.hpp"

int	main()
{
	try {
		std::vector<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);

		std::vector<int>::iterator	it = easyfind(v, 20);
		std::cout << "found in vector: " << *it << std::endl;

		std::list<int>	lst;
		lst.push_back(1);
		lst.push_back(2);
        lst.push_back(3);

		std::list<int>::const_iterator it2 = easyfind(lst, 4);
        std::cout << "found in list: " << *it2 << std::endl;
	}
	catch (const std::exception &e){
		std::cout << "error: " << e.what() << std::endl;
	}
}
