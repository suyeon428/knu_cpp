#include <iostream>
using namespace std;

//int main() {
//	int i, j, a=1;
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			cout << a++;
//			cout << "	";
//		}
//		cout << "\n";
//	}
//	//cout << "1	2	3	4	5	6	7	8	9	10\n";
//	//cout << "11	12	13	14	15	16	17	18	19	20\n";
//	//cout << "21	22	23	24	25	26	27	28	29	30\n";
//	// cin >> a >> b;
//
//	return 0;
//}

//int main() {
//	int i, j;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < 10; j++) {
//			cout << i << "x" << j << "=" << i * j<<" ";
//		}
//		cout << "\n";
//	}
//}

//int main() {
//	int a, b;
//	cout << "�� ���� �Է��϶�>>";
//	cin >> a >> b;
//
//	if (a > b) {
//		cout << "ū �� = " << a;
//	}
//	else {
//		cout << "ū �� = " << b;
//	}
//}

//int main() {
//	int i;
//	double ar[5];
//	cout << "5���� �Ǽ��� �Է��϶�>>";
//	for (i = 0; i < 5; i++) {
//		cin >> ar[i];
//	}
//
//	double max = ar[0];
//	for (i = 0; i < 5; i++) {
//		if (ar[i] > max) {
//			max = ar[i];
//		}
//	}
//	cout << "���� ū �� = " << max;
//}

//int main() {
//	char str[100];
//	int i, count=0;
//
//	cout << "���ڵ��� �Է��϶�(100�� �̸�.)\n";
//	cin.getline(str, 100);
//	for (i = 0; i < 100; i++) {
//		if (str[i] == 'x') {
//			count++;
//		}
//	}
//	cout << "x�� ������ "<<count;
//}

//int main() {
//	string str, str2;
//	cout << "�� ��ȣ�� �Է��ϼ���>>";
//	cin >> str;
//	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
//	cin >> str2;
//
//	if (str == str2) {
//		cout << "�����ϴ�";
//	}
//	else {
//		cout << "���� �ʽ��ϴ�";
//	}
//}

int main() {
	char str[100];

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(str, 100);
		char yes[] = "yes";
		bool b = true;

		for (int i = 0; i < 4; i++) {
			if (str[i] != yes[i]) {
				b = false;
				break;
			}
		}

		if (b == true) {
			cout << "�����մϴ�...";
			break;
		}
	}
	return 0;
}