#include "mylib.h"
#include <iostream>
#include <typeinfo>

template <typename T>
X<T>::X(T in) : m_var(in) {
	std::cout << "X::X()\n";
}

template <typename T>
void X<T>::mX() {
	std::cout << "X::mX()\n";
	std::cout << "typeid(m_var): " << typeid(m_var).name();
}

template class X<int>;
template class X<float>;
template class X<double>;
template class X<std::string>;