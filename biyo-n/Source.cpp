#include <iostream>

using namespace std;

//�т�[��
void biyo_n(int homeru_count) {
	cout << " ������ ������" << endl;

	for (int i = 0; i <= homeru_count; i++) {
		cout << " ��  ����  ��" << endl;
	}
	cout << "�����@�����@ ����" << endl;
	cout << "��  �� ��  ����" << endl;
	cout << "�� �� ������ ����        <�����ƖJ�߂āI" << endl;
	cout << "��      U   ���@" << endl;
	cout << "��          �� �@" << endl;
	cout << "������������������������" << endl;

}


int main(void) {

	//�J�߂�ƐL�т郄�c(��b��)

	int homeru_count = 0;


	cout << "����J�߂܂����H : "; cin >> homeru_count;
	biyo_n(homeru_count);

	system("pause");
	return 0;
}