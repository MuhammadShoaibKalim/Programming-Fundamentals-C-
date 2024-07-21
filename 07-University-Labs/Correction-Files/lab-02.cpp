//class, constructor
#include <iostream>
using namespace std;

class Car {
  public:
     int speedcar;
     Car(int s):speedcar(s){};
    int speed(int maxSpeed);
     
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}; 

int main() {
      int speed_car;
      Car civic(speed_car);
    //   civic.speedcar = 120;
      cout << "Car's speed: " << civic.speed(250) << endl;
      return 0;
}
