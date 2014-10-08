#include <iostream>
using namespace std;

void main()
{
	int A;
	int B;
	int C;

	cout << "Anna kolme lukua:" << endl;
	cin >> A >> B >> C;

	if (A < B && B < C)
		cout << A << " " << B << " " << C << endl;

	if (A < C && C < B)
		cout << A << " " << C << " " << B << endl;

	if (B < A && A < C)
		cout << B << " " << A << " " << C << endl;

	if (B < C && C < A)
		cout << B << " " << C << " " << A << endl;

	if (C < A && A < B)
		cout << C << " " << A << " " << B << endl;

	if (C < B && B < A)
		cout << C << " " << B << " " << A << endl;

}