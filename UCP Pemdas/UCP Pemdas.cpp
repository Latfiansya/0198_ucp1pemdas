#include <iostream>
using namespace std;

//1. int main, float perhitungan, string status
//2. menentukan status kelulusan (dengan membuat conditional statement if..else atau sejenisnya, untuk mengondisikan output dari program yang dijalankan)
//3. memasukkan detail data mahasiswa (memungkinkan kita untuk input alamat dengan lebih detail dan teratur, contoh : nama kota, nama kecamatan, nama desa)
//4. prosedur : void display (sebagai output tampilan dari program yang dijalankan) , fungsi : int main (untuk mengeksekusi seluruh fungsi dan prosedur dalam program)
//5. memasukkan elemen pada aarray (dengan melooping bagian input elemen sebanyak yang dibutuhkan)
//6. 
int arr[20];
int n, nilaiMatematika, nilaiBasing, nRerata;
string status, nama;

void input()
{
	while (true)
	{
		cout << "Masukkan jumlah kandidat MABA : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nMaksimal kandidat hanya 20 orang.\n\n";
	}
	
	cout << "\n-----------------------\n";
	cout << "Masukkan Nama dan Nilai\n";
	cout << "-----------------------\n";

	for (int i = 0; i < n; i++)
	{
		cout << "\nKandidat ke-" << (i + 1) << endl;
		cout << "Nama : ";
		cin >> nama;
		cout << "Nilai Matematika : ";
		cin >> nilaiMatematika;
		cout << "Nilai Bahasa Inggris : ";
		cin >> nilaiBasing;
	}
}

void rerataMHS() {
	nRerata = (nilaiMatematika + nilaiBasing) / 2;

	if (nRerata > 70) {
		status = "Lulus";
	}
	else if (nilaiMatematika > 80) {
		status = "Lulus";
	}
	else {
		status = "Tidak Lulus";
	}

}

void display() {	
	cout << endl;	
	cout << "\n============================" << endl;	
	cout << "Daftar Status Kelulusan MABA" << endl;		
	cout << "============================" << endl;		

	for (int j = 0; j < n; j++) {	
		cout << arr[j] << endl;
		cout << "\nKandidat ke-" << (j + 1) << endl;
		cout << "Nama\t\t: " << nama << endl;
		cout << "Nilai Matematika: " << nilaiMatematika << endl;
		cout << "Nilai Fisika\t: " << nilaiBasing << endl;
		cout << "Rata-rata nilai\t: " << nRerata << endl;
		cout << "Status \t\t: " << status << endl;
	}
	cout << endl;	
}

int main() {
	char ch;

	do
	{
		input();
		rerataMHS();
		display();
		system("pause");
		system("cls");

		cout << "\nLanjutkan program? (y/n) : ";
		cin >> ch;
		system("cls");
	} while ((ch == 'y') || (ch == 'Y'));

	return 0;
}