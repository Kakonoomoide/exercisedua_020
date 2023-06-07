// Kita ketahui bahwa luas dan keling dari lingkaran ditentukan oleh sebuah parameter yaitu jari - jari lingkaran tersebut.
// Sedangkan luas dan keliling dari bujursangkar juga ditentukan oleh sebuah parameter, yaitu sisi bujursangkar tersebut.
// Sehingga saat diinputkan jari - jari lingkaran akan disimpan dalam variabel x melalui fungsi setX,
// demikian pula nanti saat diinputkan sisi bujursangkar juga akan disimpan dalam variabel x melalui
// fungsi setX.Dan isi x bisa dibaca melalui fungsi getX. (enkapsulasi).
// Lingkaran dan Bujursangkar adalah inheritance dari class dasar bidangDatar yang memiliki 3 buah
// virtual function yang akan di override dalam class lingkaran dan class bujursangkar.
// Berikut source code nya, dan lengkapilah :

#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar { 
public:
	int x;

	Lingkaran() {
		x = 0;
		cout << "Lingkaran dibuat" << endl;
	}

	void input() {
		cout << "\nmasukan jari jari linkaran : ";
		cin >> x ;
	}

	float luas() {
		float L;
		L = 3.14 * x * x;
		cout << "luasnnya lingkaran adalah : " << L << endl;
		return 0;
	}

	float keliling() {
		float K;
		K = 2 * 3.14 * x;
		cout << "kelilingnya lingkaran adalah : " << K << endl;
		return 0;
	}

	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}

	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}

};

class Bujursangkar :public bidangDatar { 
public:
	int x;

	Bujursangkar() {
		x = 0;
		cout << "Bujursangkar dibuat" << endl;
	}

	void input() {
		cout << "\nmasukan sisi Bujursangkar : ";
		cin >> x;
	}

	float luas() {
		int L;
		L = x * x;
		cout << "luasn bujursangkar adalah : " << L << endl;
		return 0;
	}

	float Keliling() { 
		int K;
		K = 4 * x;
		cout << "keliling bujursangkar adalah : " << K << endl;
		return 0;
	}

	void setX(int s) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = s;
	}

	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

int main() {
	Lingkaran L;
	Bujursangkar B;
	bidangDatar BD;

	L.input();
	L.luas();
	L.keliling();
	L.getX();

	B.input();
	B.luas();
	B.Keliling();
	B.getX();

	return 0;
};
