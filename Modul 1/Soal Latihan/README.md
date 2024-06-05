### [← Back](../../README.md)
<hr />

# Soal Latihan
- [Dynamic Array dan Linked List](#darray&llist)
- [Stack and Queues](#stack&queue)

## Soal Latihan (Dynamic Array dan Linked List) <a name="darray&llist"></a>

## Soal 1 (Linked List)

Implementasikanlah fungsi baru bernama `forEachElement` untuk **Linked List** (bisa diterapkan pada Singly Linked List atau Doubly Linked List). Fungsi `forEachElement` akan berfungsi layaknya iterator (mengiterasi) untuk setiap elemen dari awal hingga akhir pada Linked List yang mana setiap elemennya dikenakan operasi/fungsi lain untuk tujuan tertentu.

Misalkan, fungsi `forEachElement` untuk mencetak tiap elemen dalam **Linked List**.

**Contoh implementasi**:
```cpp
#include <stdio.h>
#include <stdlib.h>

/*
Linked list
.
.
*/

void printElement(int *elem) {
    .
    .
}

void multiply2(int *elem) {
    .
    .
}

int main()
{
    List myList;
    dlist_init(&myList);

    // Anggap isi linked list adalah [1,2,3,4,5]
    // .
    // .
    // .

    // contoh fungsi forEachElement untuk mencetak data pada list

    forEachElement(&myList, printElement);

    // contoh fungsi forEachElement untuk mengalikan setiap elemen
    // dengan 2

    forEachElement(&myList, multiply2);

    // isi list menjadi [2,4,6,8,10]
    return 0;
}
```
Selain itu, ujilah fungsi forEachElement yang kamu buat dengan beberapa fungsi berikut:
- reverseEach -- yakni untuk membalikkan (reverse) setiap bilangan.
- sumDigit -- yakni mengganti elemen dengan penjumlahan semua digit setiap bilangan.

## Soal 2 (Dynamic Array)
> Implementasi ini harus mengacu pada implementasi GitHub.

Buatlah implementasi fungsi `dArray_insertAt` dan `dArray_removeAt` yang berguna untuk memasukkan elemen baru pada posisi yang diinginkan dan menghapus elemen pada posisi yang diinginkan. Prototipe fungsinya seperti berikut.
```cpp
void dArray_insertAt(DynamicArray *darray, unsigned index, int value);
void dArray_removeAt(Dynamic *darray, unsigned index);
```
- `index` merupakan posisi/indeks yang diinginkan.
- `value` adalah nilai baru yang akan dimasukkan.

## Soal 3 (Linked List/Dynamic Array)
Modifikasilah kode Dynamic Array dan Linked List (SinglyList) yang ada pada [github](https://github.com/Algoritma-dan-Pemrograman-ITS/StrukturData/tree/master/For%20C%2B%2B/D.Array%2C%20Stack%2C%20Queue%2C%20Deque%2C%20Pr.Queue) agar menyimpan tipe string (asumsikan panjang string maks. adalah 100 karakter).

## Soal Latihan (Stack and Queues) <a name="stack&queue"></a>

## Soal 1 (Stack)
Modifikasi struktur data [stack](https://github.com/Algoritma-dan-Pemrograman-ITS/StrukturData/blob/master/For%20C%2B%2B/D.Array%2C%20Stack%2C%20Queue%2C%20Deque%2C%20Pr.Queue/stack_list.cpp) agar dapat menemukan elemen terkecil dengan kompleksitas O(1).

## Soal 2 (Priority Queue)
Sebuah klinik TC sedang melayani antrian pasien. Setiap pasien mempunyai id dan level urgensi masing-masing yang direpresentasikan oleh sebuah bilangan. Buatlah program untuk mensimulasikan antrian pada klinik tersebut.

#### Input
Baris pertama adalah Q, banyaknya query. Setiap query dapat berupa:

- `MASUK id x` - id adalah id dari orang dan x adalah tingkat urgensinya.
- `LAYANI` - cetak id orang yang akan dilayani sekarang.

#### Output
Untuk setiap query `LAYANI`, cetak id orang yang akan dilayani saat ini. Jika sudah tidak ada pasien yang antri, maka cetak "HORE".

#### Contoh Input
```
9
MASUK 1 15
MASUK 3 2
MASUK 2 6
MASUK 7 15
LAYANI
LAYANI
MASUK 8 100
LAYANI
LAYANI
```

#### Contoh Output
```
1
7
8
2
```

## Soal 3
Modifikasilah program stack, queue, deque dan priority queue pada [github](https://github.com/Algoritma-dan-Pemrograman-ITS/StrukturData/tree/master/For%20C%2B%2B/D.Array%2C%20Stack%2C%20Queue%2C%20Deque%2C%20Pr.Queue) untuk menyimpan tipe string dengan maksimum karakter adalah 100 karakter.
