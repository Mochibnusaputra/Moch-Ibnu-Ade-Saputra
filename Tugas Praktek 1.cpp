#include<stdio.h>
#include<iostream>
#include<conio.h>
#define phi 0.5

using namespace std;
int main()
{
	float luas,alas,tinggi;
	
	cout<<("PROGRAM MENGHITUNG LUAS SEGITIGA")<<endl;
	printf("Masukan Alas Segitiga   :");scanf("%f",&alas);
	printf("Masukan Tinggi Segitiga :");scanf("%f",&tinggi);
	
	luas=phi*(alas*tinggi);
	printf("Luas Segitiga : %f",luas);
	
	return 0;
}
