### [← Soal Praktikum 2](../../README.md)
<hr />

### [E1 - Suisei Dapat Cokelat (Easy-Medium)](../prob-E1/README.md)
### [E3 - Child (Easy-Medium)](../prob-E3/README.md)
### [E4 - Little Star (Medium-Hard)](../prob-E4/README.md)
# Heavy Rotation
<p align="center">
  Time Limit : 1 s<br>
  Memory Limit : 256 MB
</p>

#### Deskripsi: 
Diberikan 𝑁 buah node berbeda yang memiliki nilai 𝐴[𝑖]. Setiap node akan dimasukkan satu per satu ke dalam sebuah AVL Tree dari node ke-1 hingga node ke-𝑁.

Tentukan berapa banyak rotasi yang diperlukan agar 𝑁 buah node tersebut dapat membentuk suatu AVL Tree.

#### Format Masukan:
Baris pertama berisi sebuah bilangan bulat 𝑁.

Baris kedua berisi 𝑁 buah bilangan bulat 𝐴[𝑖].

#### Format Keluaran:
Satu baris berisi dua buah bilangan bulat yang menunjukkan banyaknya rotasi kiri dan rotasi kanan yang diperlukan.

#### Batasan:
1 ≤ 𝑁 ≤ 1000 <br>
1 ≤ 𝐴[𝑖] ≤ 𝑁

#### Contoh Masukan 1:
```
5
2 1 5 4 3
```

#### Contoh Keluaran 1:
```
0 1
```

#### Penjelasan Contoh 1:
Ketika node ke-5 dimasukkan ke AVL Tree, akan terjadi rotasi ke kanan seperti pada ilustrasi berikut:
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/assets/162039500/7c8b20e7-2876-4bb2-adb1-ff24e4a819ab"/>
</p>

Kondisi akhir dari AVL Tree tersebut adalah
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/assets/162039500/ab50a437-7371-4a8e-b083-2b8e6b12791c"/>
</p>

#### Contoh Masukan 2:
```
10
3 9 10 4 8 6 2 7 1 5
```

#### Contoh Keluaran 2:
```
3 2
```

#### Penjelasan Contoh 2:
Ketika node ke-3 dimasukkan ke AVL Tree, akan terjadi rotasi ke kiri seperti pada ilustrasi berikut:
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/assets/162039500/9c3a5921-e6bf-4129-89c6-1ee14fc35dab"/>
</p>

Ketika node ke-5 dimasukkan ke AVL Tree, akan terjadi rotasi ke kanan seperti pada ilustrasi berikut:
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/assets/162039500/e950a149-0e2d-4ad4-ab08-d22791ab3b21"/>
</p>

Ketika node ke-6 dimasukkan ke AVL Tree, akan terjadi rotasi ke kiri seperti pada ilustrasi berikut:
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/assets/162039500/a3a2c913-f240-40ff-911a-92ce6c1daabc"/>
</p>

Ketika node ke-9 dimasukkan ke AVL Tree, akan terjadi rotasi ke kiri seperti pada ilustrasi berikut:
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/assets/162039500/2c329dda-4f65-48ba-8b2a-3ffca9188b1d"/>
</p>

Kondisi akhir dari AVL Tree tersebut adalah
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/assets/162039500/855bd216-c994-428c-8989-733bbe5ad100"/>
</p>
