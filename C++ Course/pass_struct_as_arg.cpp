#include <bits/stdc++.h>
using namespace std;

struct Car{
    string model;
    int year;
    string color;
};


void printCar(Car &car){
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';

}

void paintCar(Car &car, string color) {
    car.color = color;
}

int main() {

    Car car1;
    Car car2;

    car1.model = "Maserati";
    car1.year = 2011;
    car1.color = "yellow";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "red";

    paintCar(car1, "gold");
    paintCar(car2, "silver");
    
    printCar(car1);
    cout << '\n';
    printCar(car2);

    return 0;
}