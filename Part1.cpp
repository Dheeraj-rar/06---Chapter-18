// Kumar Dheeraj - VXC7Y1 -
// Chapter 18 - Part 1 Drills 

#include "std_lib_facilities.h"

int ga[10] ={1,2,4,8,16,32,64,128,256,512}; // 1 

void f(int a[], int n) 						// 2
{

	int la[10];
	for (int i = 0;i < 10;i++){
		la[i] = ga[i];
	}
	for (int i = 0;i < 10;i++){
		cout << la[i] << " " ;
	}
	int* p = new int[n];
	for (int i = 0;i < 10;i++){
		p[i] = a[i];
	}cout << endl;

	for (int i = 0;i < 10;i++){
		cout << p[i] << " " << endl;
	}
	delete[] p;
}
int main()
{
	f(ga, 10);
	int aa[10] = {1,2,6,24,120,720,5040,40320,362880,3628800};
	f(aa, 10);

	
	return 0;
}