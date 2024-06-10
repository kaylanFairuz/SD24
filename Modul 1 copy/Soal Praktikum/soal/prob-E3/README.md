### [← Soal Praktikum 1](../../README.md)
<hr />

### [E1 - Tobat1 (Easy-Medium)](../prob-E1/README.md)
### [E2 - Juma (Easy-Medium)](../prob-E2/README.md)
### [E4 - Sosial Media (Medium-Hard)](../prob-E4/README.md)
# Ulasan Buku
<p align="center">
  Time Limit : 1 s<br>
  Memory Limit : 256 MB
</p>

#### Deskripsi: 
Kai adalah seorang penulis yang baru saja menerbitkan sebuah buku. Dia ingin mempromosikan bukunya dengan menampilkan ulasan positif dari para pembaca. Tapi, dia menyadari bahwa kebanyakan pembaca biasanya hanya akan melihat ulasan yang paling atas. Jadi, dia memilih untuk menampilkan ulasan positif yang berada di sepertiga teratas dari total ulasan yang diterimanya.
  
Ulasan untuk buku tersebut ditulis dalam bentuk bilangan bulat. Ulasan dianggap positif jika peringkatnya berada di sepertiga teratas dari total ulasan ketika diurutkan. Contohnya, jika ada 11 pembaca yang memberikan ulasan seperti ini: 5, 1, 6, 2, 7, 9, 11, 8, 13, 10, 4, maka ulasan yang akan ditampilkan adalah 13, 11, dan 10. 
  
Kai butuh bantuanmu untuk memberitahu dia ulasan mana yang akan ditampilkan di situs webnya. Dan karena ulasan baru terus berdatangan dari berbagai pembaca, dia ingin situs webnya selalu memiliki peringkat yang terupdate.
  
Catatan: Jumlah ulasan yang ditampilkan adalah bilangan bulat yang didapatkan dengan membagi jumlah ulasan dengan 3 dan hasilnya dibulatkan ke bawah.

#### Format Masukan:
Baris pertama berisi sebuah bilangan bulat 𝑁, yang menyatakan jumlah tindakan yang akan dilakukan.

𝑁 baris berikutnya berisi:
- **TAMBAH 𝑀**, untuk menambah ulasan dengan rating 𝑀 ke daftar yang ada
- **LIHAT**, untuk menampilkan ulasan yang berada di sepertiga teratas dari daftar

#### Format Keluaran:
Untuk setiap tindakan **LIHAT**, cetak ulasan yang berada di sepertiga teratas dari daftar yang ada dalam satu baris dan dipisahkan oleh spasi. Jika tidak ada ulasan yang memenuhi syarat sebagai ulasan positif, cetak "Belum ada ulasan".

#### Batasan:
1 ≤ 𝑁, 𝑀 ≤ 100

#### Contoh Masukan 1:
```
10
TAMBAH 1
TAMBAH 8
LIHAT
TAMBAH 9
TAMBAH 15
TAMBAH 4
TAMBAH 5
LIHAT
TAMBAH 10
LIHAT
```

#### Contoh Keluaran 1:
```
Belum ada ulasan
15 9
15 10
```

#### Penjelasan Contoh 1:
Dua tindakan pertama dilakukan penambahan ulasan, sehingga daftar ulasan menjadi 1 dan 8. Ini berarti belum ada ulasan yang positif karena hanya ada 2/3 = 0 peringkat positif. Maka, hasil yang dicetak adalah "Belum ada ulasan". Selanjutnya, beberapa ulasan ditambahkan lagi, menjadi: 1, 8, 9, 15, 4, dan 5. Oleh karena itu, sepertiga peringkat teratas ada 6/3 = 2 ulasan positif. Penambahan terakhir adalah ulasan 9, sehingga daftar ulasan menjadi: 1, 8, 9, 15, 4, 5, dan 9. Jadi, daftar yang ditampilkan adalah sebanyak 7/3 = 2 ulasan positif.

#### Contoh Masukan 2:
```
9
TAMBAH 7
TAMBAH 3
TAMBAH 9
TAMBAH 2
TAMBAH 1
TAMBAH 12
TAMBAH 9
TAMBAH 10
LIHAT
```

#### Contoh Keluaran 2:
```
12 10
```
