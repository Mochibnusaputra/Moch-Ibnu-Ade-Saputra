#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
	int tglhr,blnlhr,thlhr;
	char nama[30];
	cout<<"PROGRAM USIA ANDA"<<endl;
	printf("Masukkan Nama Anda   		:");scanf("%s",&nama);
	printf("Masukkan Tanggal Lahir Anda 	:");scanf("%d",&tglhr);
	printf("Masukkan Bulan Lahir Anda  	:");scanf("%d",&blnlhr);
	printf("Masukkan Tahun Lahir Anda 	:");scanf("%d",&thlhr);
	
	printf("\nHallo %s ",nama);
	printf("\nUsia Anda Saat Ini : \n%d tahun ",2021-thlhr);
	printf("\n%d bulan",12-blnlhr);
	printf("\n%d hari ",9-tglhr);
	{
	cout<<"\nTERIMAKASIH DARI IBNU SAPUTRA"<<endl;
}
	return 0;
}
