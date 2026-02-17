#include "../include/Span.hpp"

Span::Span(unsigned int	n) : _cap(n), _v() { _v.reserve(n); }
Span::Span(const Span &other) : _cap(other._cap), _v(other._v) {}
Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		_cap = rhs._cap;
		_v = rhs._v;
	}
	return *this;
}
Span::~Span(){}

void	Span::addNumber(int x)
{
	if (_v.size() >= _cap)
		throw FullException();
	_v.push_back(x);
}

