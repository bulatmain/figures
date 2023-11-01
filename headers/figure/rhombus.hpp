#ifndef RHOMBUS_H

#define RHOMBUS_H

#include "quadrilateral.hpp"

template <Number T>
class Rhombus : public Quadrilateral {

public:
    Rhombus();
    Rhombus(const std::initializer_list<flat_vector<T>>& list);
    
};

template <Number T>
Rhombus<T>::Rhombus() : Quadrilateral() {}

template <Number T>
Rhombus<T>::Rhombus(const std::initializer_list<flat_vector<T>>& list) : Quadrilateral(list) {}

#endif