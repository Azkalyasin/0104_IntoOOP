
#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};

class matakuliah {
private:
	string kodeMK;
	string namaMK;
	int sks;
public:
	void input() {
		cout << "Kode MK: ";
		cin >> kodeMK;
		cout << "Nama MK: ";
		cin >> namaMK;
		cout << "SKS: ";
		cin >> sks;
	}

	void output() {
		cout << "Kode MK: " << kodeMK << endl;
		cout << "Nama MK: " << namaMK << endl;
		cout << "sks: " << sks << endl;
	}

};

int main()
{
	mahasiswa mhs;
	matakuliah mk;

	mhs.nama = "Budi";
	mhs.umur = 20;
	mhs.jurusan = "Teknik informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;
}
