#include <iostream>
using namespace std;

template <class Summable>
Summable sum(const Summable data[], int size, Summable s= 0){
	for (int i=0; i<size; i++)
		s += data[i]; //most work for Summable
	return s;
}

int main(){
	
	cout << "template for sum()" << endl;
	int a[] = {1,2,3};
	double b[] = {2.1, 2.2, 2.3};
	cout << sum(a,3) << endl;
	cout << sum(b,3) << endl;

	return 0;
}
