/* Пример передачи параметров в функцию */
#include <iostream>
using namespace std;

void f(int a, int *b, int &c)
{
	a += 10;
	(*b) += 10;
	c += 10;
	cout << "f:\t" << a << "\t" << *b << "\t" << c << endl;
}

int main()
{
	int x = 10, y = 20, z = 30;
	cout << "main:\t" << x << "\t" << y << "\t" << z << endl;
	f(x, &y, z);
	cout << "main:\t" << x << "\t" << y << "\t" << z << endl;
	return 0;
}