#ifndef MVECTOR_H
#define MVECTOR_H

#include <vector>

// Class that represents a mathematical vector
class MVector
{
public:
	// constructors
	MVector() {}
	explicit MVector(int n) : v(n) {}
	MVector(int n, double x) : v(n, x) {}
	MVector(std::initializer_list<double> l) : v(l) {}

	// access element (lvalue)
	double &operator[](int index)
	{
		return v[index];
	}

	// access element (rvalue)
	double operator[](int index) const
	{
		return v[index];
	}

	int size() const { return v.size(); } // number of elements

private:
	std::vector<double> v;
};

#endif
