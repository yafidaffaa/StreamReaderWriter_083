#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; //melempar sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//block ini akan di eksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		//jika selain int maka block ini akan di eksekusi
		cout << "default pengecualian akan di eksekusi" << endl;
	}

	return 0;
}