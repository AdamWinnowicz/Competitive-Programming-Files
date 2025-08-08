#include <bits/stdc++.h>
using namespace std;

class Human {
    public:
        string name;
        string occupation;
        int age;
        bool awesome = true;

        void eat(){
            cout << "This person is eating\n";
        }
        void drink(){
            cout << "This person is drinking\n";
        }
        void sleep(){
            cout << "This person is sleeping\n";
        }
};

class Car {
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "You step on the gas!\n";
        }
        void brake(){
            cout << "You step on the brakes!\n";
        }
};
int main() {

    // object = a collection of attributes and methods
    // they can have characteristic that could perform actions
    // can be used to mimic real world items (ex. Phone, Book, Dog)
    // created from a class which acts as a "blue-print"
    // objects are similar to structs because they are given attributes
    // however, objects can also perform methods!

    // Human human1;
    // Human human2;

    // human1.name = "Rick";
    // human1.occupation = "Scientist";
    // human1.age = 70;

    // human2.name = "Morty";
    // human2.occupation = "Student";
    // human2.age = 15;

    // cout << human1.name << '\n';
    // cout << human1.occupation << '\n';
    // cout << human1.age << '\n';
    // cout << human1.awesome << '\n';

    // human1.eat();
    // human1.drink();
    // human1.sleep();
    // cout << '\n';

    // cout << human2.name << '\n';
    // cout << human2.occupation << '\n';
    // cout << human2.age << '\n';
    // cout << human2.awesome << '\n';
    // human2.eat();

    Car car1;
    Car car2;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Silver";

    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}