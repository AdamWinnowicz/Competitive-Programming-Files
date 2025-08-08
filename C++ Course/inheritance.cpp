#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "This animal is eating.\n";
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << "The dog goes woof!\n";
    }

};
class Cat : public Animal{
    public:
    void meow(){
        cout << "The cat goes meow!\n";
    }
};

class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side*side*6;
        this->volume = side*side*side;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14 * radius * radius;
        this->volume = (4/3.0) * 3.14 * radius * radius * radius;
    }
};

int main() {

    //inheritance = a class can recieve attributes and methods from another class
    //children inherit from a parent class
    //helps to reuse similar code found within multiple classes

    // Dog dog;
    // Cat cat;

    // cout << dog.alive << '\n';
    // dog.eat();
    // dog.bark();

    // cat.eat();
    // cat.meow();
    // cout << cat.alive << '\n';

    Cube cube(10);

    cout << "Area: " << cube.area << "cm^2\n";
    cout << "Volume: " << cube.volume << "cm^3\n";

    cout << '\n';

    Sphere sphere(5);

    cout << "Area: " << sphere.area << "cm^2\n";
    cout << "Volume: " << sphere.volume << "cm^3\n";
    return 0;
}