#include <iostream>
#include <string>

using namespace std;


void swapValue(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 5, y = 10;
	swapValue(&x, &y);
	cout << "x = " << x << " " << "y = " << y << endl;
	return 0;
}