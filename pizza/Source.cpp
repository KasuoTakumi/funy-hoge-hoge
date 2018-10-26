#include <iostream>
using namespace std;


void cutPizza(int humans, double pizza_size) {
	//ピザの円
	static double wheel = 360;
	//一人当たりのピザ割り当て角度
	double one_piece = 0.0;

	double pizza_area = ((pizza_size/2) * 2) * 3.14;

	double pizza_proportion = pizza_area / humans;

	double pizza_kakudo = 360 / humans;

	cout << "===============================" << endl;
	cout << "ピザの面積" << pizza_area << "平方センチメートル" << endl;
	cout << "一人当たりの角度" << pizza_kakudo << "度" << endl;
	cout << "一人当たりの面積" << pizza_proportion << "平方センチメートル" << endl;
	if (pizza_kakudo >= 90)
		cout << "中心角は鈍角です。" << endl;
	else
		cout << "中心角は鋭角です。" << endl;
	cout << "===============================" << endl;
}

int main(void) {
	//人数
	int humans = 0;
	double pizza_size = 0;
	cout << "ピザ関数" << endl;
	cout << "===============================" << endl;
	cout << "人数 : ";			cin >> humans;
	cout << "ピザの直径 : ";	cin >> pizza_size;

	cutPizza(humans, pizza_size);


	system("pause");
	return 0;
}
