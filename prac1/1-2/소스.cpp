#include <iostream>
using namespace std;

//int main() {
//	int a = 0;
//	for (int i = 0; i < 10; i++) {
//		a += (i + 1);
//	}
//	cout << "1���� 10���� ���� ����� " << a << "�Դϴ�";
//}

int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}