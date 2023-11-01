#ifndef RECTANGLE_H

#define RECTANGLE_H

#include "quadrilateral.hpp"

template <Number T>
class Rectangle : public Quadrilateral {

public:
    Rectangle();
    Rectangle(const std::initializer_list<flat_vector<T>>& list);
    
};

template <Number T>
Rectangle<T>::Rectangle() : Quadrilateral() {}

template <Number T>
Rectangle<T>::Rectangle(const std::initializer_list<flat_vector<T>>& list) : Quadrilateral(list) {}

#endif