#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double getPerimeter() const = 0;  // Pure virtual function
    virtual double getArea() const = 0;       // Pure virtual function
    virtual ~Shape() {}                       // Virtual destructor for proper cleanup
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getPerimeter() const override {
        return 2 * M_PI * radius;
    }

    double getArea() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getPerimeter() const override {
        return 2 * (width + height);
    }

    double getArea() const override {
        return width * height;
    }
};

int main() {
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    std::cout << "Circle perimeter: " << circle->getPerimeter() << std::endl;
    std::cout << "Circle area: " << circle->getArea() << std::endl;

    std::cout << "Rectangle perimeter: " << rectangle->getPerimeter() << std::endl;
    std::cout << "Rectangle area: " << rectangle->getArea() << std::endl;

    delete circle;
    delete rectangle;

    return 0;
}sssss
