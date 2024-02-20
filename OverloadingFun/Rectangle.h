//
// Created by nicarp on 10/15/23.
//

#ifndef RECTANGLECLASS_RECTANGLE_H
#define RECTANGLECLASS_RECTANGLE_H


class Rectangle {
public:
    Rectangle();

    Rectangle(double length, double width);


    double getLength() const;

    void setLength(double length);

    double getWidth() const;

    void setWidth(double width);

    double area() const;

    double perimeter() const;

    bool operator==(const Rectangle &other) const;
    Rectangle operator+(const Rectangle &other) const;
    void operator=(const Rectangle &other);
    bool operator!=(const Rectangle &other);

private:
    double length;
    double width;
};


#endif //RECTANGLECLASS_RECTANGLE_H
