# NGOPID-91
[Praktikum Modul 2 - Struktur Data B 2021/2022](https://www.hackerrank.com/contests/alpro-its-sd-m2-b-2022/challenges)

Pak Pret merupakan salah satu anggota badan penanggulangan bencana negeri X. Pada saat ini Pak Pret sedang berusaha mencegah penyebaran virus baru bernama NGOPID-91. Untuk membantu pengamatan, Pak Pret membuat suatu program simulasi penyebaran NGOPID-91. Simulasi ini menciptakan N buah kota yang terkoneksi oleh N-1 jalan sehingga semua kota bisa dilalui dari kota 1 dengan jalur tertentu.

Simulasi dimulai dengan adanya salah satu orang di kota A yang positif terkena NGOPID-91. Pak Pret memprediksi bahwa setiap harinya dapat terjadi salah satu dari kejadian sebagai berikut:

1. Dalam suatu kota, jumlah orang yang terjangkit virus meningkat dua kali lipat.
  
2. Salah satu orang yang terinfeksi NGOPID-91 berpindah ke kota sebelahnya.

Bantulah Pak Pret untuk menentukan berapa minimum hari yang diperlukan untuk virus NGOPID-91 menginfeksi seluruh kota pada dalam simulasi (minimal satu orang yang terinfeksi pada setiap kota).

#### Input Format:
Baris pertama berisi **_N_** yang merupakan jumlah kota yang ada dalam simulasi.

**_N-1_** baris selanjutnya merupakan **_A_** dan **_B_** yang merupakan jalur pengubung antara kota **_A_** dan kota **_B_**.

#### Output:
Minimum hari yang diperlukan untuk virus bisa menginfeksi seluruh kota (minimal satu orang yang terinfeksi pada setiap kota).

#### Constraints:
1 ≤ **_N_** ≤ 10<sup>5</sup><br>
1 ≤ **_A_**,**_B_** ≤ **_N_**

#### Sample Input 0:
```
4
1 2
1 3
1 4
```

#### Sample Output 0:
```
5
```

#### Explanation 0:
Salah satu kemungkinan untuk testcase tersebut adalah penderita yang terinfeksi di kota 1 meningkat sebanyak dua kali lipat, setelah itu meningkat sebanyak dua kali lipat lagi. Sehingga setelah 2 hari, terdapat 4 orang terinfeksi di kota 1. Untuk 3 hari selanjutnya, terdapat 1 orang yang berpindah dari kota 1 ke kota 2,3, dan 4. Setelah 5 hari, setiap kota terdapat 1 orang yang terinfeksi.
