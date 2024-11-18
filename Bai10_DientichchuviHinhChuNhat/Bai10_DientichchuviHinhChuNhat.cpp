#include <iostream>
using namespace std;
int main()
{
	cout << "tinh dien tich chu vi hinh chu nhat\n";
	double dai, rong, chuvi, dientich;

	cout << "Nhap chieu dai:"; cin >> dai;
	cout << "Nhap chieu rong:"; cin >> rong;

	chuvi = (dai + rong) * 2;
	dientich = dai * rong;

	cout << "Chu vi: " << chuvi << endl;
	cout << "Dien tich:: " << dientich << endl;

	return 0;
}

