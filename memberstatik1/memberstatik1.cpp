#include <iostream>
using namespace std;


class mahasiswa
{
private:
	long long static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

long long int mahasiswa::nim = 20230140148;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID   = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Arda");
	mahasiswa mhs2("Dhito");
	mahasiswa::setNim(9); // mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Jihad");
	mahasiswa mhs4("Galang");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //  mengakses

	return 0;
}