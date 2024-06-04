# Tree or Bush
<p align="center">
  Time Limit : 1 detik<br>
  Memory Limit : 256 MB<br>
  Author: Richie Seputro
</p>


#### Deskripsi: 
Pak Joko adalah seorang botanis. Namun, karena Pak Joko sudah tua dan menderita katarak, ia membutuhkan bantuanmu. Pak Joko sekarang ini bingung dalam membedakan pohon dengan semak-semak. Dalam bahasa orang IT, pohon adalah sebuah _connected acyclic graph_, sedangkan semak-semak adalah sesuatu graph yang tidak terbatas dengan aturan tadi. Bantulah Pak Joko membedakan pohon dengan semak-semak!

#### Format Masukan:
Baris pertama berisi integer 𝐸 yaitu jumlah edge dalam graf. 𝐸 baris berikutnya terdiri dari integer 𝑋 dan 𝑌 yang mewakili node-node yang dihubungkan oleh suatu edge.

#### Format Keluaran:
“Pohon” bila input merupakan pohon atau “Semak-semak” bila input merupakan semak-semak.

#### Batasan:
0 < 𝐸 ≤ 50<br>
0 < 𝑋, 𝑌 ≤ 51, 𝑋 ≠ 𝑌

#### Contoh Masukan 1:
```
5
1 2
2 3
2 4
3 5
4 6
```

#### Contoh Keluaran 1:
```
Pohon
```

#### Contoh Masukan 2:
```
3
1 2
2 3
3 1
```

#### Contoh Keluaran 2:
```
Semak-semak
```
