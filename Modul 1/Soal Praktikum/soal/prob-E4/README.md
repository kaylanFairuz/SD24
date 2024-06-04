### [← Soal Praktikum 1](../../)
<hr />

### [E1 - Tobat1 (Easy-Medium)](../prob-E1)
### [E2 - Juma (Easy-Medium)](../prob-E2)
### [E3 - Ulasan Buku (Easy-Medium)](../prob-E3)
# Sosial Media
<p align="center">
  Time Limit : 1 s<br>
  Memory Limit : 256 MB
</p>

#### Deskripsi: 
Anda sedang mengobrol menggunakan salah satu sosial media terpopuler melalui smartphone. Sosial media tersebut dapat menampilkan paling banyak 𝐾 obrolan terbaru dengan teman-teman Anda. Setiap obrolan terjadi antara Anda dengan salah satu teman Anda. Paling banyak terdapat satu obrolan dengan siapapun, sehingga setiap obrolan selalu unik. Pada mulanya, banyaknya obrolan yang tampak pada layar sama dengan 0.

Tiba-tiba Anda memiliki kemampuan untuk melihat masa depan. Anda tahu bahwa pada hari itu Anda akan mendapatkan 𝑁 pesan, dengan pesan ke-𝑖 dikirim oleh teman dengan ID 𝑃<sub>𝑖</sub> secara berurutan. 

Jika Anda menerima pesan dari 𝑃<sub>𝑖</sub> dalam suatu obrolan yang sedang tampak pada layar pada smartphone Anda, maka tidak akan terjadi perubahan: obrolan tidak berubah dan urutannya tetap, Anda tetap dapat membaca dan dapat menunggu pesan selanjutnya masuk.

Selain itu, jika banyaknya obrolan yang tampak pada layar pada smartphone sama dengan 𝐾, maka obrolan terakhir—obrolan dengan posisi 𝐾—dihapus dari smartphone Anda.

Akibatnya, banyaknya obrolan pada smartphone dijamin selalu kurang dari 𝐾 dan obrolan dari 𝑃<sub>𝑖</sub> tidak tampak pada layar pada smartphone. Kemudian, obrolan dari 𝑃<sub>𝑖</sub> muncul pada urutan pertama, dan semua obrolan yang tampak pada layar akan mundur ke bawah.

Tugas Anda adalah keluarkan daftar obrolan setelah memproses N pesan sesuai dengan urutan tampilan pada smartphone.

#### Format Masukan:
Baris pertama berisi dua buah bilangan bulat 𝑁 dan 𝐾.

Baris kedua berisi 𝑁 buah bilangan bulat 𝑃<sub>𝑖</sub>.

#### Format Keluaran:
Baris pertama berisi satu bilangan bulat 𝑀 yang menyatakan banyaknya pesan yang tampak pada layar setelah menerima semua 𝑁 pesan.

Baris kedua berisi 𝑀 buah bilangan bulat 𝑃<sub>i</sub> yang menyatakan pengirim dari pesan tersebut.

#### Batasan:
1 ≤ 𝑁, 𝐾 ≤ 10<sup>5</sup> <br>
1 ≤ 𝑃<sub>𝑖</sub> ≤ 10<sup>6</sup>

#### Contoh Masukan 1:
```
7 2
1 2 3 2 1 3 2
```

#### Contoh Keluaran 1:
```
2
2 1
```

#### Penjelasan Contoh 1:
Daftar obrolan yang akan tampak pada layar sesuai dengan urutan pesan masuk paling pertama adalah
- []
- [1]
- [2, 1]
- [3, 2]
- [3, 2]
- [1, 3]
- [1, 3]
- [2, 1]

#### Contoh Masukan 2:
```
10 4
2 3 3 1 1 2 1 2 3 3
```

#### Contoh Keluaran 2:
```
3
1 3 2
```

#### Penjelasan Contoh 2:
Daftar obrolan yang akan tampak pada layar sesuai dengan urutan pesan masuk paling pertama adalah
- []
- [2]
- [3, 2]
- [3, 2]
- [1, 3, 2]
- dan seterusnya.
