#include <iostream>
using namespace std;

// Deklarasi struct
struct pnt {
    char data;
    pnt* next;
};

// Fungsi untuk menambah data di depan
void tambahDepan(pnt*& kpl, char dataBaru) {
    pnt* baru = new pnt();
    baru->data = dataBaru;
    baru->next = kpl;
    kpl = baru;
}

// Fungsi untuk menambah data di belakang
void tambahBelakang(pnt*& ekor, char dataBaru) {
    pnt* baru = new pnt();
    baru->data = dataBaru;
    baru->next = nullptr;
    ekor->next = baru;
    ekor = baru;
}

// Fungsi untuk menyisipkan data di tengah
void tambahTengah(pnt* kpl, char dataBaru) {
    pnt* baru = new pnt();
    baru->data = dataBaru;
    baru->next = kpl->next;
    kpl->next = baru;
}

// Fungsi untuk menghapus data di depan
void hapusDepan(pnt*& kpl) {
    if (kpl != nullptr) {
        pnt* tmp = kpl;
        kpl = kpl->next;
        delete tmp;
    }
}

// Fungsi untuk menghapus data di belakang
void hapusBelakang(pnt*& kpl) {
    if (kpl != nullptr) {
        pnt* prev = nullptr;
        pnt* curr = kpl;
        while (curr->next != nullptr) {
            prev = curr;
            curr = curr->next;
        }
        if (prev != nullptr) {
            prev->next = nullptr;
        } else {
            kpl = nullptr; // Jika hanya ada satu elemen
        }
        delete curr;
    }
}

// Fungsi untuk menampilkan isi linked list
void tampilkanList(pnt* kpl) {
    pnt* tmp = kpl;
    while (tmp != nullptr) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    pnt* kpl = new pnt();  // Kepala
    pnt* ekor = new pnt(); // Ekor
    pnt* baru = nullptr;   // Node baru
    
    // Inisialisasi kpl dengan 'A'
    kpl->data = 'A';
    kpl->next = nullptr;
    ekor = kpl;
    
    cout << "Data kpl: " << kpl->data << endl;
    cout << "Data ekor: " << ekor->data << endl;
    
    // Tambah data B di belakang
    tambahBelakang(ekor, 'B');
    
    // Tambah data C di depan
    tambahDepan(kpl, 'C');
    
    // Sisip data D di tengah
    tambahTengah(kpl->next, 'D'); // Sisip setelah elemen pertama
    
    // Tampilkan isi linked list
    cout << "Isi linked list: ";
    tampilkanList(kpl);
    
    // Hapus data depan
    hapusDepan(kpl);
    
    // Hapus data belakang
    hapusBelakang(kpl);
    
    // Tampilkan isi linked list setelah penghapusan
    cout << "Isi linked list setelah hapus depan dan belakang: ";
    tampilkanList(kpl);
    
    return 0;
}