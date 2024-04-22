

#include <iostream>
using namespace std;

class bangunDatar {
private:
	float panjang, lebar;
public:
	float luas;

	void input() {
		cout << " masukkan panjangnya = ";
		cin >> panjang;
		cout << " masukkan lebarnya = ";
		cin >> lebar;
	}

	float hitungLuas() {
		return panjang * lebar;
	}

	void display(){
		cout << "panjangnya = " << panjang << endl;
		cout << "lebarnya = " << lebar << endl;
		cout << "luasnya = " << hitungLuas() << endl;
	}
};

int main()
{

}

