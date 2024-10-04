#include <iostream>
using namespace std;

int A(int m, int n, int &recursion_deep) {
	if (m == 0 && n != 0) {
		return n + 1;
	}
	if (m != 0 && n == 0) {
		recursion_deep++;
		return A(m - 1, 1, recursion_deep);
	}
	else {
		recursion_deep++;
		return A(m - 1, A(m, n - 1, recursion_deep), recursion_deep);
	}
}

int main()
{
	int m, n, recursion_deep=0;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	cout << "A = " << A(m, n, recursion_deep) << " | Deep = " << recursion_deep;
}