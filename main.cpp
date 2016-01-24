#include <iostream>
#include "inf.hpp"

using namespace std;

int main()
{
	inf a = 152125;
	inf b = 52398;
	cout << a.toInt() << endl;
	cout << b.toLong() << endl;
}
