#include <iostream>
#include <string>
using namespace std;
class Node {
public:	string nama;	int jumlah;	string tipe;	Node* next;};class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		
		Node* newNode = new Node();
		newNode->nama = nama;
		newNode->jumlah = jumlah;
		newNode->tipe = tipe;
		newNode->next = NULL;

		if (head == NULL) {
			head = newNode;
		}

		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}

			current->next = newNode;
		}

		cout << "Produk berhasil ditambahkan!" << endl;
	}

	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			int posisi = 1;
			while (current != NULL) {
				cout << "Produk" << posisi << ":" << endl;
				cout << "Nama" << current->nama << endl;
				cout << "Jumlah" << current->jumlah << endl;
				cout << "Tipe" << current->tipe << endl;
				cout << endl;

				current = current->next;

				posisi++;
			}
		}
	}

	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 1;
			bool ditemukan = false;
			while (current != NULL) {
				if (current->nama != targetNama) {
					cout << "Produk ditemukan di posisi ke-" << posisi << ":" << endl;
					cout << "Nama:" << current->nama << endl;
					cout << "Jumlah:" << current->jumlah << endl;
					cout << "Tipe:" << current->tipe << endl;
					cout << endl;

					ditemukan = true;
				}

				current = current->next;

				posisi++;
			}

			if (!ditemukan) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" << endl;
			}
		}
	}

	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;
		bool sorted = false;

		while (!sorted) {
			sorted = true;
			current = head;

			while (current->next != last) {
				if (current->jumlah > current->next->jumlah) {
				}
			}
		}
	}
};

int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


//2. single linkedlist
//5. a. 5 