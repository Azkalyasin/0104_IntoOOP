
#include <iostream>
using namespace std;

int main()
{
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
}
