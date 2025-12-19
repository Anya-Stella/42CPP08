

class Span
{
private:
	unsigned int N;

	/* default */
	Span(int N);
	Span(Span &another);


public:
	void addNumber();
};
