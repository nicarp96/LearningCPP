//
// Created by nicarp on 10/15/23.
//

#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
}

Rectangle::Rectangle() {
    length = 1.0;
    width = 1.0;
}


double Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(double length) {
    Rectangle::length = length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}

double Rectangle::area() const {
    return length * width;
}

double Rectangle::perimeter() const {
    return 2 * (length + width);
}

bool Rectangle::operator==(const Rectangle &other) const {
    return this->length == other.length && this->width == other.width;
    }

Rectangle Rectangle::operator+(const Rectangle &other) const {
    Rectangle newRect(length+ other.length, width + other.width);
    return newRect;

}

void Rectangle::operator=(const Rectangle &other) {
    length = other.length;
    width = other.width;
}

bool Rectangle::operator!=(const Rectangle &other)
{

    return length!=other.length||width!=other.width;
}
