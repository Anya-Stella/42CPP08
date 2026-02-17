#pragma once
#include <vector>

class Span
{
private:
	unsigned int		_cap;
	std::vector<int>	_v;

public:
	/* default */
	Span(unsigned int n);
	Span(const Span &other);
	Span &operator=(const Span &rhs);
	~Span();

	/* using */
	void	addNumber(int X);
	int		shortestSpan() const;
	int		longestSpan() const;

	/* exception */
	class FullException : public std::exception
	{
	public:
		const char* what() const throw() { return "Span: Full"; }
	};
	class NoSpanException : public std::exception
	{
	public:
		const char* what() const throw() { return "Span: Not enough elements"; }
	};
};
