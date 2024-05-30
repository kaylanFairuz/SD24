# Kowalski Seorang Kasir
<p align="center">
  Time Limit : 1s<br>
  Memory Limit : 2GB
</p>

#### Deskripsi: 
Kowalski baru saja pulang dari New Mexico setelah menyelesaikan penemuan reaktor nuklir terbarunya. Sesampainya di rumah, ia merasa sangat lapar dan langsung pergi ke Warung Pak Hasyim untuk membeli 10 porsi tahu campur. Setelah makan, ia baru ingat kalau dompetnya tertinggal di New Mexico. Karena ini, Kowalski terpaksa untuk bekerja di Warung Pak Hasyim seharian.

Kowalski ditugaskan untuk menjadi seorang kasir. Menu di Warung Pak Hasyim sudah dikategorikan menjadi paket-paket makanan yang dinamakan menu 1 hingga menu 𝑁. Tugas Kowalski cukup mudah, yaitu ia cukup mencatat saja menu makanan yang dipesan orang-orang. Jumlah orang pada hari itu adalah 𝑄 orang. Pak Hasyim menitipkan satu tugas lagi untuk Kowalski, yaitu mencatat menu nomor berapa yang paling laris pada hari itu. Jika terdapat lebih dari satu menu yang paling laris, maka cukup laporkan menu dengan nomor yang lebih besar.

#### Format Input:
- 0 < 𝑄 < 10<sup>5</sup> <br>
- 0 < 𝑁 < 10<sup>4</sup>

#### Format Output:
- Baris pertama berisi bilangan bulat 𝑄
- Baris berikutnya berisi 𝑄 nomor menu yang dipesan pembeli

#### Batasan:
Satu baris bilangan bulat berupa nomor menu yang paling laris sesuai dengan ketentuan soal.

#### Contoh Input 0:
```
10
6 3 5 6 9 9 2 1 8
```

#### Contoh Output 0:
```
9
```

#### Penjelasan Output 0:
Pada kasus ini, terdapat 2 menu yang paling laris, yaitu menu nomor 6 dan 9. Karena kita cukup melaporkan menu dengan nomor yang lebih besar, maka keluarkan 9.

#### Hint:
Selain untuk mencatat pesanan, Anda dapat menggunakan array atau linked list untuk menghitung total pemesanan setiap menu. Ingat-ingat bahwa menu direpresentasikan sebagai nomor yang dapat dijadikan sebagai indeks suatu array atau linked list.
