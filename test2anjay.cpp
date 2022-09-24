#include <iostream>
using namespace std;

int main(){
	long hargabuku1, hargabukuasli, uang, kembalian, hargabuku2, hargabuku3;
	
	cout << "input uang = ";
	cin >> uang;
	
	cout << "harga buku 1 = ";
	cin >> hargabuku1;
	cout << "harga buku 2 = ";
	cin >> hargabuku2;
	cout << "harga buku 3 = ";
	cin >> hargabuku3;
	
	if(uang < hargabuku1 + hargabuku2 + hargabuku3){

		cout << "uang anda tidak cukup untuk membeli buku";
	}
	
	else if(hargabuku1 + hargabuku2 + hargabuku3 < 100000){
	cout <<"tidak dapat diskon, maka jumlah yang harus dibayar adalah = ";
	cout << hargabuku1 + hargabuku2 + hargabuku3 << endl;
	kembalian = uang -( hargabuku1 + hargabuku2 + hargabuku3);
	cout << "Kembalian = " << kembalian;
	}

	else if(hargabuku1 + hargabuku2 + hargabuku3 >= 100000 && hargabuku1 + hargabuku2 + hargabuku3 <150000){
		cout << "Dapat diskon 7%, maka jumlah yang harus dibayar adalah = ";
		hargabukuasli = hargabuku1 + hargabuku2 + hargabuku3 - ((hargabuku1 + hargabuku2 + hargabuku3 )* 0.07);
		cout << hargabukuasli << endl;
		
		kembalian = uang - hargabukuasli;
		cout << "kembalian = ";
		cout << kembalian;
	}
	
		else if(hargabuku1 + hargabuku2 + hargabuku3  >= 150000	&&	hargabuku1 + hargabuku2 + hargabuku3  <= 250000){
		
		cout << "Dapat diskon 10%, maka jumlah yang harus dibayar adalah = ";
		hargabukuasli = hargabuku1 + hargabuku2 + hargabuku3  - ((hargabuku1 + hargabuku2 + hargabuku3 )* 0.10);
		cout << hargabukuasli << endl;
		
		kembalian = uang - hargabukuasli;
		cout << "kembalian = ";
		cout << kembalian;
	}
	
	else {
		cout << "Dapat diskon 12%, maka jumlah yang harus dibayar adalah = ";
		hargabukuasli = hargabuku1 + hargabuku2 + hargabuku3  - ((hargabuku1 + hargabuku2 + hargabuku3 )* 0.1);
		cout << hargabukuasli << endl;
		
		kembalian = uang - hargabukuasli;
		cout << "kembalian = ";
		cout << kembalian;
	}
}
