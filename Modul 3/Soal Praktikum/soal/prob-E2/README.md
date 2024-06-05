### [← Soal Praktikum 3](../../README.md)
<hr />

### [E1 - Thank You (Easy-Medium)](../prob-E1/README.md)
### [E3 - Maximum Spanning Tree (Easy-Medium)](../prob-E3/README.md)
### [E4 - Isekai Warkop (Medium-Hard)](../prob-E4/README.md)
# Telat Gak Ya?
<p align="center">
  Time Limit : 1 s<br>
  Memory Limit : 256 MB
</p>

#### Deskripsi: 
Kai baru ingat kalau dia harus menghadiri sebuah pertemuan penting di suatu kota. Dia harus tiba tepat waktu agar tidak melewatkan pertemuan tersebut. Terdapat 𝑁 kota di sekitar Kai, dinomori dari 0 sampai dengan 𝑁-1.

Terdapat beberapa rute yang dapat digunakan oleh Kai untuk sampai ke kota tujuan. Setiap rute memiliki estimasi waktu tempuh yang berbeda. Kai hanya memiliki waktu 𝐶 jam untuk sampai tepat waktu. Kota tempat pertemuan adalah 𝐵 dan kota posisi Kai sekarang adalah 𝐴. Kai harus sampai secepat mungkin.

#### Format Masukan:
- Baris pertama berisi bilangan bulat 𝑁, 𝑀, 𝐴, 𝐵, dan 𝐶, yang menyatakan jumlah kota, jumlah rute/edge, kota saat ini, kota tujuan, dan waktu yang tersedia.
- 𝑀 baris berikutnya berisi deskripsi rute dengan format 𝑢<sub>𝑖</sub>, 𝑣<sub>𝑖</sub>, dan 𝑤<sub>𝑖</sub> Artinya, terdapat jalan 2 arah yang menghubungkan kota 𝑢<sub>𝑖</sub> dengan kota 𝑣<sub>𝑖</sub> dan untuk melewati rute tersebut dibutuhkan waktu tempuh selama 𝑤<sub>𝑖</sub> jam.

#### Format Keluaran:
- Jika Kai dapat sampai tepat waktu (yaitu waktu yang dibutuhkan tidak melebihi waktu yang tersedia), cetak "Tepat waktu".
- Jika Kai terlambat (yaitu waktu yang dibutuhkan melebihi waktu yang tersedia), cetak "Terlambat".

#### Batasan:
1 ≤ 𝑁, 𝑀 ≤ 20<br>
0 ≤ 𝐴, 𝐵, 𝑢<sub>𝑖</sub>, 𝑣<sub>𝑖</sub> ≤ 19<br>
1 ≤ 𝐶, 𝑤<sub>𝑖</sub> ≤ 100

#### Contoh Masukan 1:
```
5 6 0 3 6
0 1 1
0 2 3
1 3 1
1 4 2
2 3 2
3 4 4
```

#### Contoh Keluaran 1:
```
Tepat waktu
```

#### Penjelasan Contoh 1:
Waktu tempuh dari kota 0 ke kota 3 paling cepat adalah 2 jam. Waktu yang tersedia adalah 6 jam, sehingga Kai bisa sampai tepat waktu.

#### Contoh Masukan 2:
```
4 4 0 3 5
0 1 2
0 2 5
1 2 3
2 3 1
```

#### Contoh Keluaran 2:
```
Terlambat
```

#### Penjelasan Contoh 2:
Waktu tempuh dari kota 0 ke kota 3 paling cepat adalah 6 jam. Sementara, waktu yang tersedia adalah 5 jam, sehingga Kai akan terlambat sampai ke kota tujuan.

#### Hint:
_Undirected graph_, _weigthed graph_, Dijkstra
