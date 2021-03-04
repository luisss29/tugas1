#include <iostream>

using namespace std;

class Tugas
{
private:
	int bil1,bil2,hasil;
public:
	void getAngka1();
	void getAngka2();
	void hitung(){hasil=bil1+bil2;}
	void display();
};

void Tugas::getAngka1()
{
	cout << "Angka Pertama : " << endl;
	cin >> bil1;
}

void Tugas::getAngka2()
{
	cout << "Angka Kedua : " << endl;
	cin >> bil2;
}

void Tugas::display()
{
	cout << "Hasil tambah kedua bilangan : " << endl;
	cout << bil1 << " + " << bil2 << " = " << hasil << endl;
}

int main()
{
	Tugas a;

	a.getAngka1();
	a.getAngka2();
	a.hitung();
	a.display();

	return 0;
}
