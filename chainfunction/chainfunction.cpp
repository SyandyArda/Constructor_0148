#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this; //chain function
	}
	string getJudull()
	{
		return this->judul;
	}

} bukunya;

int main()
{
	//bukunya.setJudul{"Matematika");
	// cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudull(); // chain function calls
	return 0;
}
