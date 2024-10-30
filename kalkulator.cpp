// By Muhammad Rheza Pahleevi
#include <conio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>

using namespace std;

float penjumlahan(float bil1, float bil2){
	float hasil;
	hasil=bil1+bil2;
	return (hasil);
}
float pengurangan(float bil1,float bil2){
	float hasil;
	hasil=bil1-bil2;
	return (hasil);
}
float perkalian(float bil1,float bil2){
	float hasil;
	hasil=bil1*bil2;
	return (hasil);
}
float pembagian(float bil1,float bil2){
	float hasil;
	hasil=bil1/bil2;
	return (hasil);
}
float pangkat(float bil1,float bil2){
	float hasil;
	hasil = bil1;
		hasil = pow(bil1,bil2);
	return (hasil);
}


int main(){
	
	int bil1,bil2,pil;
	int pilih;
	float  hasil;
	string operasi;
	do
	{
	cout<<"================================================================="<<endl;
	cout<<"|           "<<"PROGRAM KALKULATOR SEDERHANA                        |"<<endl;
	cout<<"================================================================="<<endl;
	cout<<"|                  "<<"INGIN MENGHITUNG APA?                        |"<<endl;
	cout<<"|    "<<"(1) Penjumlahan       (2) Pengurangan       (5) Pangkat    |"<<endl;
	cout<<"|    "<<"(3) Perkalian         (4) Pembagian         (6) Exit       |"<<endl;
	cout<<"================================================================="<<endl;
	cout<<endl;
	
	cout<<" Masukkan Pilihan : ";
	cin>>pil;
	if(pilih>=1 && pilih<=5)
	{
	cout<<"========================================================="<<endl;
	cout<<"|                 "<<"Masukan Bilangan                      |"<<endl;
	cout<<"========================================================="<<endl;
	cout<<" Masukkan Bilangan Pertama : ";
	cin>>bil1;
	cout<<" Masukkan Bilangan Kedua   : ";
	cin>>bil2;
	cout<<"=========================================================\n\n\n";
	}
	
		switch(pil)
		{
	        case 1 : hasil=penjumlahan(bil1,bil2);
				operasi='+';
				cout<<"========================================================="<<endl;
				cout<<""<<"Hasil dari "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;     
				cout<<"========================================================="<<endl;
				break;
			case 2 : hasil=pengurangan(bil1,bil2);
				operasi='-';
				cout<<"========================================================="<<endl;
				cout<<""<<"Hasil dari "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;     
				cout<<"========================================================="<<endl;
				break;
			case 3 : hasil=perkalian(bil1,bil2);
				operasi='*';
				cout<<"========================================================="<<endl;
				cout<<""<<"Hasil dari "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;     
				cout<<"========================================================="<<endl;
				break;
			case 4 : hasil=pembagian(bil1,bil2);
				operasi='/';
				cout<<"========================================================="<<endl;
				cout<<""<<"Hasil dari "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;     
				cout<<"========================================================="<<endl;
				break;
			case 5 : hasil=pangkat(bil1,bil2);
				operasi='^';
				cout<<"========================================================="<<endl;
				cout<<""<<"Hasil dari "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;     
				cout<<"========================================================="<<endl;
				break;
			case 6 : 
				return 0;
			default :
				cout<<"Pilihanmu Salah";
				break;
		}
	getch();
	}while(pilih!=6);
	cout<<endl;
	return 0;
}