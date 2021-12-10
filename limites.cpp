#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();
	
	cout << " imin = " << imin << endl;
	cout << " imax = " << imax << endl;
	cout << " tamanio de int : " << sizeof(int) << endl;
	
	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();
	
	cout << " fmix = " << fmin << endl;
	cout << " fmax = " << fmax << endl;
	cout << " tamanio de float " << sizeof(float) << endl;
	
	return 0;
}
