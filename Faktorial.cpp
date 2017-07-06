#include <iostream>

using namespace std;

int Faktorial(int n)
{
	// base untuk faktorial
	if (n==1)
	return 1;
	else
	return n * Faktorial (n - 1);
}
void Faktor()
{
	int hasil = Faktorial(3);
	cout<<hasil<<endl;
} 