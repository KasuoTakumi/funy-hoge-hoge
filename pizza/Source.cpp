#include <iostream>
using namespace std;


void cutPizza(int humans, double pizza_size) {
	//�s�U�̉~
	static double wheel = 360;
	//��l������̃s�U���蓖�Ċp�x
	double one_piece = 0.0;

	double pizza_area = ((pizza_size/2) * 2) * 3.14;

	double pizza_proportion = pizza_area / humans;

	double pizza_kakudo = 360 / humans;

	cout << "===============================" << endl;
	cout << "�s�U�̖ʐ�" << pizza_area << "�����Z���`���[�g��" << endl;
	cout << "��l������̊p�x" << pizza_kakudo << "�x" << endl;
	cout << "��l������̖ʐ�" << pizza_proportion << "�����Z���`���[�g��" << endl;
	if (pizza_kakudo >= 90)
		cout << "���S�p�͓݊p�ł��B" << endl;
	else
		cout << "���S�p�͉s�p�ł��B" << endl;
	cout << "===============================" << endl;
}

int main(void) {
	//�l��
	int humans = 0;
	double pizza_size = 0;
	cout << "�s�U�֐�" << endl;
	cout << "===============================" << endl;
	cout << "�l�� : ";			cin >> humans;
	cout << "�s�U�̒��a : ";	cin >> pizza_size;

	cutPizza(humans, pizza_size);


	system("pause");
	return 0;
}
