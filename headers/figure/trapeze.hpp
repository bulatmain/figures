#ifndef RHOMBUS_H

#define RHOMBUS_H

#include "quadrilateral.hpp"

template <Number T>
class Trapeze : public Quadrilateral {

public:
    Trapeze();
    Trapeze(const std::initializer_list<flat_vector<T>>& list);
    
};

template <Number T>
Trapeze<T>::Trapeze() : Quadrilateral() {}

template <Number T>
Trapeze<T>::Trapeze(const std::initializer_list<flat_vector<T>>& list) : Quadrilateral(list) {}

#endif