#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string baris;

	//membuka file dengan mode menulis
	ofstream outfile;
	//menunjuk ke subuah nama file
	outfile.open("contogfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true)
	{
		cout << "- ";

		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}

	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	
}


