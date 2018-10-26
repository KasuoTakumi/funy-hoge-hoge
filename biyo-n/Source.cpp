#include <iostream>

using namespace std;

//‚Ñ‚æ[‚ñ
void biyo_n(int homeru_count) {
	cout << " „¬„ª„­ „¬„ª„­" << endl;

	for (int i = 0; i <= homeru_count; i++) {
		cout << " „«  „«„«  „«" << endl;
	}
	cout << "„¬„®@„¯„®@ „¯„­" << endl;
	cout << "„«  „ „±  ƒ„«" << endl;
	cout << "„«  „¯„³„® „«        <‚à‚Á‚Æ–J‚ß‚ÄI" << endl;
	cout << "„«      U   „«@" << endl;
	cout << "„«          „« @" << endl;
	cout << "„¯„ª„ª„ª„ª„²„°„ª„ª„ª„ª„®" << endl;

}


int main(void) {

	//–J‚ß‚é‚ÆL‚Ñ‚éƒ„ƒc(Œêœb—Í)

	int homeru_count = 0;


	cout << "‰½‰ñ–J‚ß‚Ü‚·‚©H : "; cin >> homeru_count;
	biyo_n(homeru_count);

	system("pause");
	return 0;
}