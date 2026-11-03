#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void accelerate() {
        speed += 10;
    }
};

int main() {
   Car myCar;

   myCar.brand = "BMW";
   myCar.speed = 100;

   myCar.accelerate();

   cout << "BRAND NAME: " << myCar.brand << endl;
   cout << "SPEED: " << myCar.speed << endl;

}