# Program Linked List dengan C++

Program ini mengimplementasikan struktur data Linked List sederhana menggunakan C++ dengan elemen bertipe `char`. Program ini mendemonstrasikan beberapa operasi dasar pada Linked List, seperti menambah elemen di depan, belakang, menyisipkan di tengah, serta menghapus elemen dari depan dan belakang. 

## Fitur Program:
- **Tambah Depan**: Menambah elemen di awal Linked List.
- **Tambah Belakang**: Menambah elemen di akhir Linked List.
- **Sisipan**: Menyisipkan elemen di tengah Linked List.
- **Hapus Depan**: Menghapus elemen pertama dari Linked List.
- **Hapus Belakang**: Menghapus elemen terakhir dari Linked List.
- **Tampilkan Linked List**: Menampilkan isi dari Linked List.

## Struktur Program:
1. **Struct pnt**:
   - `char data`: Menyimpan data karakter.
   - `pnt* next`: Pointer ke elemen selanjutnya dalam Linked List.
   
2. **Variabel Utama**:
   - `kpl`: Pointer ke elemen pertama (kepala) dari Linked List.
   - `ekor`: Pointer ke elemen terakhir (ekor) dari Linked List.
   - `baru`: Digunakan untuk node baru yang akan ditambahkan ke Linked List.

3. **Fungsi-Fungsi Utama**:
   - `tambahDepan`: Menambahkan elemen baru di awal Linked List.
   - `tambahBelakang`: Menambahkan elemen baru di akhir Linked List.
   - `sisipan`: Menyisipkan elemen baru di tengah Linked List.
   - `hapusDepan`: Menghapus elemen pertama dari Linked List.
   - `hapusBelakang`: Menghapus elemen terakhir dari Linked List.
   - `tampilkanList`: Menampilkan seluruh elemen dari awal hingga akhir.

## Contoh Output:
Data kpl: A
Data ekor: A
Isi linked list: C A D B 
Isi linked list setelah hapus depan dan belakang: A D

## Cara Menggunakan:
1. Kompilasi program menggunakan compiler C++: g++ -o linked_list linked_list.cpp
2. Jalankan program: ./linked_list

Program ini cocok untuk mempelajari konsep dasar Linked List dan manipulasi pointer dalam C++.