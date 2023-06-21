#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string baris;
	string NamaFile;

	cout << "Masukan Nama FIle : ";
	cin >> NamaFile;

	//membuka file dengan mode menulis
	ofstream outfile;
	//menunjuk ke subuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	
}


