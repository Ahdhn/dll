#ifndef _MYLIB_
#define _MYLIB_
#include <string>
void f();

template <typename T>
class X {
public:
	explicit X(T in);
	void mX();

private:
	T m_var;
};

extern template class X<int>;
extern template class X<float>;
extern template class X<double>;
extern template class X<std::string>;

#endif /*_MYLIB_*/