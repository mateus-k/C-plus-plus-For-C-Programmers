// Convert this program to C++
// change to C++ io
// change to one line comments
//change defines of constants to const
//change array to vector<>
// inline any short function

//#include <stdio.h>
#include <iostream>
using namespace std;

//#define N 40
const int N = 40;

//void sum(int*p, int n, int d[]){
inline void sum(int&p, int n, int d[]){
	int i;
	p = 0;
	for(i = 0; i < n; ++i)
	p = p + d[i];
}

int main(){
	
	int i;
	int accum = 0;
	int data[N];

	for(i = 0; i < N; ++i)
		data[i] = i;
	
	sum(accum, N, data);

//	printf("sum is %d\n", accum);
	cout << "sum is " << accum << "\n";

return 0;

}
