#include <iostream>
using namespace std;

int main(){
	long hargabuku, hargabukuasli, uang, kembalian;
	
	cout << "input uang = ";
	cin >> uang;
	
	cout << "harga buku = ";
	cin >> hargabuku;
	
	if(uang < hargabuku){
		cout << "uang anda tidak cukup untuk membeli buku";
	}
	
	else if(hargabuku < 100000){
	cout <<"tidak dapat diskon, maka jumlah yang harus dibayar adalah = ";
	cout << hargabuku << endl;
	kembalian = uang - hargabuku;
	cout << "Kembalian = " << kembalian;
		
	}
	
	else if(hargabuku >= 100000 && hargabuku <150000){
		cout << "Dapat diskon 7%, maka jumlah yang harus dibayar adalah = ";
		hargabukuasli = hargabuku - (hargabuku * 0.07);
		cout << hargabukuasli << endl;
		
		kembalian = uang - hargabukuasli;
		cout << "kembalian = ";
		cout << kembalian;
	}
	
		else if(hargabuku >= 150000	&&	hargabuku <= 250000){
		
		cout << "Dapat diskon 10%, maka jumlah yang harus dibayar adalah = ";
		hargabukuasli = hargabuku - (hargabuku * 0.10);
		cout << hargabukuasli << endl;
		
		kembalian = uang - hargabukuasli;
		cout << "kembalian = ";
		cout << kembalian;
	}
	
	else {
		cout << "Dapat diskon 12%, maka jumlah yang harus dibayar adalah = ";
		hargabukuasli = hargabuku - (hargabuku * 0.12);
		cout << hargabukuasli << endl;
		
		kembalian = uang - hargabukuasli;
		cout << "kembalian = ";
		cout << kembalian;
	}
}
