#include<iostream>

class Shape { // abstract class - a class which has pure virtual function

    std::string color;
    public:
        Shape():color("white"){ }
        Shape(std::string c):color(c) { }

        void fillColor() {
            std::cout<<"\nFilling with "<<color<<" color";
        }

        virtual void calArea()=0;  ///abstract function
};

class Circle : public Shape {

    double radius;
    public:
        Circle():radius(5){ }
        Circle(std::string c, double r):Shape(c),radius(r){ };

        void calArea() {
            std::cout<<"\n area of circle = "<<3.14*radius*radius;
        }
};

class Square : public Shape {

    double side;
    public:
        Square():side(5) { }
        Square(std::string c, double s):Shape(c),side(s) { }

        void calArea() {
            std::cout<<"\n Area of Square : "<<side*side;
        }

};

class Rectangle : public Shape {

    double length,breadth;
    public:
        Rectangle():length(4),breadth(5) { }
        Rectangle(std::string c, double l, double b):Shape(c),length(l),breadth(b) { }

        void calArea() {
            std::cout<<"\nArea of rectangle : "<<length*breadth;
        }

};

// we cannot create object of abstract class
// we  can create pointer/references to abstract class

int main() {

    Shape *sp = new Circle("Red", 3);
    sp->fillColor();
    sp->calArea();

    sp = new Square;
    sp->fillColor();
    sp->calArea();

    sp = new Rectangle;
    sp->fillColor();
    sp->calArea();
}