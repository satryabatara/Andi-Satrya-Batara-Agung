#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	struct mahasiswa {
		int nim;
		string nama;
		string jekel;
		string jurusan;
		int nilaiharian,nilaihariann,nilaihariannn;
	};
	
	cout<<"Input data mahasiswa"<<endl;
	
	int j,jml=0,min,max;
	float rata;
	cout<<"Data Mahasiswa Maks Input: ";
	cin>>j;
	struct mahasiswa mhs[j];
	
	if(j>=5){
//inputan
		for (int i=0; i<=j-1; i++) {
			cout<<"	Masukkan data mahasiswa "<<i+1<<endl;
			cout<<"	NIM           : ";
			cin>>mhs[i].nim;
			cout<<"	Nama          : ";
			cin>>mhs[i].nama;
			cout<<"	Jenis Kelamin : ";
			cin>>mhs[i].jekel;
			cout<<"	Jurusan       : ";
			cin>>mhs[i].jurusan;
			cout<<"	Nilai Harian 1 : ";
			cin>>mhs[i].nilaiharian;
			cout<<"	Nilai Harian 2 : ";
			cin>>mhs[i].nilaihariann;
			cout<<"	Nilai Harian 3 : ";
			cin>>mhs[i].nilaihariannn;
		}
	cout<<endl;
	
//Output
		for (int i=0; i<=j-1; i++) {
			cout<<"============================================"<<endl;
			cout<<"Hasil Inputan "<<"Ke - "<<i+1<<endl<<endl;
			cout<<"NIM      	 : "<<mhs[i].nim<<endl;
			cout<<"Nama      	 : "<<mhs[i].nama<<endl;
			cout<<"Jenis Kelamin : "<<mhs[i].jekel<<endl;
			cout<<"Jurusan anda  : "<<mhs[i].jurusan<<endl;
			cout<<"Nilai Harian 1 : "<<mhs[i].nilaiharian<<endl;
			cout<<"Nilai Harian 2 : "<<mhs[i].nilaihariann<<endl;
			cout<<"Nilai Harian 3 : "<<mhs[i].nilaihariannn<<endl;
			jml=mhs[i].nilaiharian+mhs[i].nilaihariann+mhs[i].nilaihariannn;
			rata=jml/3;
			cout<<"Nilai rata - rata : "<<rata<<endl;
			 if ( i == 1 ) {
             min = rata;
             max = rata;
            }
            else if ( min > rata ) {
               min = rata;
            }
            else if ( max < rata) {
               max = rata;
           }
           else {
           }

		}
            cout << "Nilai terbesar           : " <<  max << endl;
	cout<<endl;
	
//Menu pilihan
		int pilihan,nim,jawab;
	
	menu:
		cout<<"Pilihan Menu : "<<endl<<endl;
	
		cout<<"	1.Tampil berdasarkan Nilai Tinggi Rata-rata"<<endl;
		cout<<"	2.Pencarian berdasarkan NIM"<<endl;
		cout<<"	0.Keluar"<<endl;
		cout<<endl;
		cout<<"Masukkan Menu Pilihan : ";
		cin>>pilihan;
	
		
//proses menu	
		if(pilihan==1){	
			cout<<" "<<endl;
			cout<<"nilai tertinggi dari data mahasiswa adalah : "<<max;
			cout<<"================================ "<<endl;
			cout<<"Kembali ke menu?"<<endl;
			cout<<"1. Ya"<<endl;
			cout<<"2. Tidak"<<endl;
			cout<<"Pilih nomor : ";
			cin>>jawab;
			if(jawab==1){
				goto menu;
			}
			else if(jawab==2){
				exit(0);
			}
			else{
				exit(0);
			}
//			cout<<"Jika ingin kembali ke menu tekan enter";
//			while(pilihan !=3);
//			return 0;
		}
		else if(pilihan==2){
			cout<<"Masukkan Nim : ";
			cin>>nim;
				for (int i=0; i<=j-1; i++) {
					if(nim==mhs[i].nim){
						cout<<"NIM      	 : "<<mhs[i].nim<<endl;
						cout<<"Nama      	 : "<<mhs[i].nama<<endl;
						cout<<"Jenis Kelamin : "<<mhs[i].jekel<<endl;
						cout<<"Jurusan anda  : "<<mhs[i].jurusan<<endl;
						cout<<"	Nilai Harian 1 : "<<mhs[i].nilaiharian<<endl;
						cout<<"	Nilai Harian 2 : "<<mhs[i].nilaihariann<<endl;
						cout<<"	Nilai Harian 3 : "<<mhs[i].nilaihariannn<<endl;
						jml=mhs[i].nilaiharian+mhs[i].nilaihariann+mhs[i].nilaihariannn;
						rata=jml/3;
						cout<<"Nilai   		 : "<<rata<<endl;
					}
					else{
						cout<<"Nim Yang anda masukkan tidak terdaftar";
					}
				}
			cout<<"Kembali ke menu?"<<endl;
			cout<<"1. Ya"<<endl;
			cout<<"2. Tidak"<<endl;
			cout<<"Pilih nomor : ";
			cin>>jawab;
			if(jawab==1){
				goto menu;
			}
			else if(jawab==2){
				exit(0);
			}
			else{
				exit(0);
			}
		}
		else if(pilihan==0){
			exit(0);
		}
		else{
			cout<<"Pilihan Yang anda masukkan tidak ada";
		}
	}
	
	else{
		cout<<"Data yg anda masukkan minimal 5";

	}
}
