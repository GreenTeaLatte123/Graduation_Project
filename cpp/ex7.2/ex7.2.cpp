#include <iostream>
using namespace std;

class Car {
private:
	int number;
	int year;
public:
	Car() :number(0), year(0) { };
	Car(int n, int y) :number(n), year(y) { };
	void showCar();
};

void Car::showCar() {
	cout << "��ȣ : " << number << ", �⵵ : " << year << endl;
}

void main() {
	int i;
	Car car[3] = { Car(), Car(1234, 2011), Car(2345, 2012) };
	Car* pcar = car;

	for (i = 0; i < 3; i++) {
		cout << "(pcar + " << i << ") ==> ";
		(pcar + i)->showCar();
	}
}