#include "position.h"
#include <iostream>



Position::Position(double x, double y)
    : x_(x)
    , y_(y)
{

}


Position::~Position()
{

}

int Position::getXPosition()
{
    std::cout << "X position: " << x_ << std::endl;
    return x_;
}

int Position::getYPosition()
{
    std::cout << "Y position: " << y_ << std::endl;
    return y_;
}

void Position::setXPosition(double x)
{
    x_ = x;
    std::cout << "New X value: " << x_ << std::endl;
}

void Position::setYPosition(double y)
{
    y_ = y;
    std::cout << "New Y value: " << y_ << std::endl;
}
