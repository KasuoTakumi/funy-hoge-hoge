#include <iostream>

using namespace std;

//びよーん
void biyo_n(int homeru_count) {
	cout << " ┏━┓ ┏━┓" << endl;

	for (int i = 0; i <= homeru_count; i++) {
		cout << " ┃  ┃┃  ┃" << endl;
	}
	cout << "┏┛　┗┛　 ┗┓" << endl;
	cout << "┃  ＞ ┳  ＜┃" << endl;
	cout << "┃ ◎ ┗┻┛ ◎┃        <もっと褒めて！" << endl;
	cout << "┃      U   ┃　" << endl;
	cout << "┃          ┃ 　" << endl;
	cout << "┗━━━━┫┣━━━━┛" << endl;

}


int main(void) {

	//褒めると伸びるヤツ(語彙力)

	int homeru_count = 0;


	cout << "何回褒めますか？ : "; cin >> homeru_count;
	biyo_n(homeru_count);

	system("pause");
	return 0;
}