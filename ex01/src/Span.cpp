#include "../include/Span.hpp"
#include <algorithm>
#include <climits>

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

int	Span::shortestSpan() const
{
	if (_v.size() < 2) throw NoSpanException();

	std::vector<int>	tmp(_v);
	std::sort(tmp.begin(), tmp.end());

	int	best = INT_MAX;
	for (size_t i = 1; i < tmp.size(); ++i)
	{
		int	diff = tmp[i] - tmp[i-1];
		if (best > diff) best = diff;
	}
	return best;
}

int Span::longestSpan() const
{
	if (_v.size() < 2) throw NoSpanException();

	int min = *std::min_element(_v.begin(), _v.end());
	int max = *std::max_element(_v.begin(), _v.end());
	
	return max - min;
}
