#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int thickness;
	int getArea();
	int getVolume();
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getVolume() {
	return width * height * thickness;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	rect.thickness = 4;
	cout << "�簢���� ������ " << rect.getArea() << endl;
	cout << "�簢���� ü���� " << rect.getVolume() << endl;
}