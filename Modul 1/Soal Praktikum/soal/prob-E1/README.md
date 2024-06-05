### [← Soal Praktikum 1](../../README.md)
<hr />

### [E2 - Juma (Easy-Medium)](../prob-E2)
### [E3 - Ulasan Buku (Easy-Medium)](../prob-E3)
### [E4 - Sosial Media (Medium-Hard)](../prob-E4)
# Tobat1

#### Deskripsi: 
Setelah melihat gerhana pada malam hari Haqqy sedang merenung memikirkan betapa bosannya bermain catur setiap hari. Tiba tiba saat terbangun ada seorang teman yang mengajak Haqqy untuk membeli beberapa buku dan menjual buku setiap harinya. Setiap hari Haqqy membeli dan menjual buku sampai-sampai hobbynya berubah yang awalnya bermain catur menjadi pengepul buku. Pada suatu hari Haqqy bingung apa saja buku yang masih tetap disimpan dan belum dijual.

Bantulah Haqqy untuk menemukan buku apa saja yang masih tersisa sebelum buku tersebut dijual.

List perintah:

**BELI 𝑋** : untuk membeli buku dengan nama 𝑋 dan memasukkannya ke list buku yang disimpan (disimpan pada posisi terakhir didalam list).<br>
**JUAL 𝑋** : untuk Menjual buku dengan nama 𝑋 dan Membuangnya ke list buku yang disimpan.<br>
**PRINT** : mengeprint semua nama buku yang tersisa dalam list buku yang tersimpan (diprint sesuai urutan disimpan dalam list). Kalian diwajibkan memberikan tanda pemisah (“---“) untuk setiap operasi **PRINT**.<br>

Note:
- Tidak akan ada buku duplikat.
- Tidak ada nama buku yang mempunyai spasi.
- Buku yang dijual pasti ada dilist buku.

Hint:
- Gunakanlah tipe data dinamis linkedlist.
- Tidak ada permainan timelimit dalam soal ini.
- Tidak ada permainan tricky testcase dalam soal ini.
- Soal ini adalah soal normal.

#### Format Masukan:
Baris pertama 1 bilangan 𝑁.

Baris berikutnya ada string 𝑆 untuk perintah dan 𝑋 sebagai nama buku.

#### Format Keluaran:
Print hasil sesuai contoh output.

#### Batasan:
1 ≤ 𝑁 ≤ 100<br>
1 ≤ |𝑋| ≤ 1000

#### Contoh Masukan 1:
```
7
BELI Bumi
BELI Bulan
BELI Matahari
BELI Bintang
PRINT
JUAL Bintang
PRINT
```

#### Contoh Keluaran 1:
```
Bumi
Bulan
Matahari
Bintang
---
Bumi
Bulan
Matahari
---
```

#### Penjelasan Keluaran 1:
Haqqy membeli 4 buku secara urut bumi, bulan, matahari, dan bintang. Haqqy menjual buku dengan nama bintang oleh karena itu Haqqy mempunyai sisa 3 buku yaitu bumi, bulan, dan matahari.

#### Contoh Masukan 2:
```
4
BELI Red_Rising
BELI Pulang
BELI Negeri_Para_Bedebah
PRINT
```

#### Contoh Keluaran 2:
```
Red_Rising
Pulang
Negeri_Para_Bedebah
---
```

#### Contoh Masukan 3:
```
9
BELI My_60_Memorabl_Games
BELI Life_and_Games_of_Mikhail_Tal
BELI Geometry_Of_Complex_Numbers
PRINT
JUAL My_60_Memorabl_Games
JUAL Life_and_Games_of_Mikhail_Tal
BELI Golden_Son
BELI Morning_Star
PRINT
```

#### Contoh Keluaran 3:
```
My_60_Memorabl_Games
Life_and_Games_of_Mikhail_Tal
Geometry_Of_Complex_Numbers
---
Geometry_Of_Complex_Numbers
Golden_Son
Morning_Star
---
```
