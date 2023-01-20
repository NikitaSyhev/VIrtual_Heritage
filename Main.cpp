
#include <iostream>




//����������� ������������

//class Vehicle
//{
//public:
//	Vehicle(int speed) : _speed(speed) {
//		std::cout << "Vehicle()" << std::endl;
//	}
//	int getSpeed() {
//		return _speed;
//	}
//
//private:
//	int _speed;
//};
//
//enum Transmission { // enum ������������� ���, ��� �����, ������ ���� ������
//	Auto,
//	Manual
//};
//
//
//class Car : public virtual Vehicle
//{
//public:
//	Car(int speed, Transmission transmition) : Vehicle (speed), _transmission(transmition) {}
//
//private:
//	Transmission _transmission;
//};
//
//
//enum OriginCountry {
//	Russia,
//	UAE
//};
//
//
//class Airplane : public virtual Vehicle {
//public:
//	Airplane(int speed, OriginCountry country) : Vehicle(speed), _originCountry(country) {}
//
//private:
//	OriginCountry _originCountry;
//
//};
//
//enum FlyingCarMode {
//	Drive,
//	Fly
//};
//
//
//class FlyingCar : public Car, Airplane {
//public:
//	FlyingCar (int speed, OriginCountry country, Transmission transmission, FlyingCarMode initialMode) :
//		Car(speed, transmission), Airplane(speed, country), _mode(initialMode), Vehicle(speed) {}
//private:
//	FlyingCarMode _mode;
//};



//����������� �������
class A
{
public:
	//static dispatch / early biding ( ������������ �����, ������ �������� )
	void foo() {
		std::cout << "A:foo()" << std::endl;
	}

private:

};

class B 
{
public:
	virtual void bar() {
		std::cout << "B:bar()" << std::endl;
	}
	virtual void qux() {
		std::cout << "B:qux()" << std::endl;
	}

};

class C :public B { //vptr
public:
	//vptr
	void bar() override {   //���������� �������, ������� ��� ����������
		std::cout << "C::bar()" << std::endl;
	}
};





int main() {
	setlocale(LC_ALL, "Russian");
	//����������� ������������
//����������� ������������
	//FlyingCar fc(800, OriginCountry::Russia, Transmission::Auto, FlyingCarMode::Fly);


	//std::cout << fc.getSpeed() << std::endl;

	//Vehicle* fc2 = new FlyingCar(800, OriginCountry::Russia, Transmission::Auto, FlyingCarMode::Fly); // �����

	//delete fc2;

	//�


	B* b = new C;
	b->bar();






	return 0;
}