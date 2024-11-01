#include <iostream>
using namespace std;

struct pnt {
    char data;
    pnt* left;   // Cabang kiri
    pnt* right;  // Cabang kanan
};

int main() {
    // Alokasi memori untuk node root (kepala)
    pnt* kpl = new pnt;
    kpl->data = 'a';     // Isi data root dengan 'a'
    kpl->left = nullptr; // Set left dan right menjadi null
    kpl->right = nullptr;

    // Node tengah dengan data 'C'
    pnt* tengah = new pnt;
    tengah->data = 'C';   // Isi data node tengah dengan 'C'
    tengah->left = nullptr;
    tengah->right = nullptr;

    // Node baru dengan data 'B'
    pnt* baru = new pnt;
    baru->data = 'B';     // Isi data node baru dengan 'B'
    baru->left = nullptr;
    baru->right = nullptr;

    // Menghubungkan node untuk membentuk pohon biner
    kpl->left = tengah;  // Tengah berada di cabang kiri root
    kpl->right = baru;   // Baru berada di cabang kanan root

    // Menampilkan data dari setiap node di pohon biner
    cout << "Root: " << kpl->data << endl;
    cout << "Left Child of Root: " << kpl->left->data << endl;
    cout << "Right Child of Root: " << kpl->right->data << endl;

    return 0;
}