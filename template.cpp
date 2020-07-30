#include <iostream>
using namespace std;

template <class T>
void swapoi(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 3;
	int b = 4;
	swapoi(a,b);
	cout << a << " " << b << endl;
	
	return 0;
}


