# Thank You

#### Deskripsi: 
<p align="center">
  <img src="https://github.com/kaylanFairuz/Archive/blob/main/Struktur%20Data%202024/Modul%203/assets/thank-you-cover.png"/>
</p>

Haqqy sedang meneruskan perjalanan menggapai bintang, ditengah perjalanan Haqqy diminta seseorang untuk menghitung pulau-pulau.

Bantulah Haqqy menghitung pulau-pulau.

**Note**: Tanah terhubung jika dan hanya jika secara horizontal ataupun vertikal ada tanah lain (bukan diagonal).

#### Format Masukan:
Input berupa matrix 𝑀 berukuran 10 × 10.

Angka 1 menandakan tanah (land), angka 0 melambangkan laut (sea).

#### Format Keluaran:
Sebuah bilangan yang menyatakan banyaknya pulau.

#### Batasan:
𝑀 = 𝑀<sub>10×10</sub><br>
𝑀<sub>𝑖,𝑗</sub> = {0, 1}

#### Contoh Masukan 1:
```
1 1 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 1 1 1 1 1 1 0
0 0 0 0 1 1 1 1 0 0
0 0 0 0 0 1 1 0 0 0
0 0 0 0 0 0 1 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1 1
```

#### Contoh Keluaran 1:
```
3
```

#### Contoh Masukan 2:
```
1 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0
0 0 0 0 0 1 0 0 0 0
0 0 0 0 0 0 1 0 0 0
0 0 0 0 0 0 0 1 0 0
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 0 1
```

#### Contoh Keluaran 2:
```
10
```

#### Contoh Masukan 3:
```
1 0 0 0 0 0 0 0 0 0
1 1 0 0 0 0 0 0 0 0
0 1 1 0 0 0 0 0 0 0
0 0 1 1 0 0 0 0 0 0
0 0 0 1 1 0 0 0 0 0
0 0 0 0 1 1 0 0 0 0
0 0 0 0 0 1 1 0 0 0
0 0 0 0 0 0 1 1 0 0
0 0 0 0 0 0 0 1 1 0
0 0 0 0 0 0 0 0 1 1
```

#### Contoh Keluaran 3:
```
1
```
