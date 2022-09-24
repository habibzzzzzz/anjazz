#include <iostream>
using namespace std;

int main(){
	 long hargabuku, hargabukuasli, uang, kembalian, jumlahbuku, totalbelanja;
	 
	 cout << "toko marianjay" << endl;
	 
	 
	 cout << "input berapa buku yang dibeli = ";
	 cin >> jumlahbuku;
	 
	 cout << "input harga buku = ";
	 cin >> hargabuku;
	 
	 totalbelanja = jumlahbuku * hargabuku;
	 cout << "jadi total belanja = " << totalbelanja << endl;
	 
	 cout << "masukkan jumlah uang = ";
	 cin >> uang;
	 
	 
	 if(uang < totalbelanja){
	 	cout << "Uang anda tidak cukup untuk membeli buku";
	 }
	 
	 else if(totalbelanja < 100000){
	cout <<"tidak dapat diskon, maka jumlah yang harus dibayar adalah = ";
	cout << totalbelanja << endl;
	kembalian = uang - totalbelanja;
	cout << "Kembalian = " << kembalian;
	}
	
	 else if( totalbelanja >= 100000 &&  totalbelanja < 150000){
	 	cout <<  "Dapat diskon 7%, maka jumlah yang harus dibayar adalah = ";
	 	hargabukuasli =  totalbelanja	- (	 totalbelanja * 0.07);
	 	cout << hargabukuasli << endl;
	 	kembalian = uang - hargabukuasli;
	 	cout << "kembalian = " << kembalian;
	 }
	 else if( totalbelanja >= 150000 &&  totalbelanja <= 250000){
	 	cout <<  "Dapat diskon 10%, maka jumlah yang harus dibayar adalah = ";
	 	hargabukuasli =  totalbelanja	- (	 totalbelanja * 0.10);
	 	cout << hargabukuasli << endl;
	 	kembalian = uang - hargabukuasli;
	 	cout << "kembalian = " << kembalian;
	 }
	 else {
	 	cout <<  "Dapat diskon 12%, maka jumlah yang harus dibayar adalah = ";
	 	hargabukuasli =  totalbelanja	- (	 totalbelanja * 0.12);
	 	cout << hargabukuasli << endl;
	 	kembalian = uang - hargabukuasli;
	 	cout << "kembalian = " << kembalian;
	 }
	 
	 
}
