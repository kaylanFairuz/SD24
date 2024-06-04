# Maximum Spanning Tree
<p align="center">
  Time Limit : 1 s<br>
  Memory Limit : 256 MB
</p>

#### Deskripsi: 
Diberikan sebuah weighted graph saling terhubung satu sama lain yang terdiri atas 𝑁 node dan 𝑀 edge sedemikian hingga graph tersebut akan tetap terhubung apabila kita hanya memilih beberapa edge tertentu saja.

Tentukan berapa total weight maksimum yang akan Anda dapatkan apabila Anda hanya diperbolehkan
untuk memilih 𝑁 − 1 edge berbeda.

#### Format Masukan:
Baris pertama berisi dua buah bilangan bulat 𝑁 dan 𝑀 yang dipisahkan dengan sebuah spasi.

M baris berikutnya berisi tiga buah bilangan bulat 𝑈, 𝑉, dan 𝑊 yang dipisahkan oleh spasi, masing-masing merepresentasikan sebuah edge yang menghubungkan node 𝑈 dan 𝑉 dengan weight 𝑊.

#### Format Keluaran:
Sebuah baris berisi maksimum total weight yang mungkin dari edge-edge yang terpilih.

#### Batasan:
- 2 ≤ 𝑁 ≤ 100000
- 𝑁 − 1 ≤ 𝑀 ≤ 100000
- 0 ≤ 𝑈, 𝑉 < 𝑁
- 1 ≤ 𝑊 ≤ 1000
- Graf saling terhubung satu sama lain.
- Tidak ada node yang terhubung dengan node itu sendiri (self-loop).

#### Contoh Masukan 1:
```
3 3
0 1 2
1 2 3
2 0 4
```

#### Contoh Keluaran 1:
```
7
```

#### Penjelasan Contoh 1:
Pilih edge yang menghubungkan node 1 dan 2 dengan bobot 3 dan edge yang menghubungkan node 2 dan 0 dengan bobot 4 sehingga semua node terhubung dan total weightnya maksimum.

