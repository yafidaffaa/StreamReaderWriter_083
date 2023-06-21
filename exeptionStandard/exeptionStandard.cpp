#include <iostream>
#include <exception>
//untuk object exception yang akan digunakan
#include <array>
//untuk object array yang akan kita gunakan
using namespace std;

int main() {

	cout << "Awal program" << endl; //penanda 1
	try {
		array <int, 3> data = { 3,5,7 };
		//pesan array int 3 element
		cout << data.at(5) << endl;
		//memanggil array index ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan object exception
		cout << e.what() << endl;
		//akan di eksekusi karena array data hanya memiliki 3 element
	}
	cout << "Baris Program Yang Terakhir" << endl;
	//penanda 2: bahwa program berjalan tampa berhenti meskipin terjadi kesalahan

	return 0;
}