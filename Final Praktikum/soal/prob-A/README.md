### [← Soal Final Praktikum](../../README.md)
<hr />

<div align=center>
  
# Flawless Run

| Time Limit | 3s |
| :--------: | :--------: |
| Memory Limit | 256MB |

</div>

#### Deskripsi: 

Kamu adalah seorang speedrunner yang sangat competitive dalam game yang kamu main, kamu dapat menyelesaikan game ‘undead-cells’ dengan waktu cepat dengan difficulty hard dan very hard dengan mudah. Kemudian kamu ingin mencari tantangan baru yaitu melanjutkan ke final difficulty di game tsb yaitu difficulty ‘inferno’, difficulty terakhir dan terkenal akan kesulitannya bahkan speedrunner-speedrunner lain merasa kesulitan menyelesaikan di difficulty tersebut. Hal ini disebabkan dalam difficulty ini banyak speedrunner yang meremehkan estimasi jumlah heal potion yang mereka butuhkan tiap kali mereka menjalani run mereka:

<p align="center">
  <img src="../../assets/A-1.png" width=75% height=75%/><br>
  Foto : You vs The guy she told you not to worry about (final boss)
</p>

_Important note_:
- Healing potion dapat di refill namun akan meningkatkan waktu yang dibutuhkan untuk menyelesaikan speedrun
- Oleh karena itu tugas utama kamu sebagai speedrunner adalah untuk memprediksi waktu refill heal potion seefisien mungkin, untuk menyelesaikan run
- Pada tiap area kamu bisa refill potion tapi akan meningkatkan waktu/durasi speedrun mu, tiap area memiliki durasi sebanyak 3 detik tiap kali refill potion
- Jika estimasi prediksi lebih kurang daripada jumlah hasil kode, maka akan output “muak gweh, butuh heal lagi”, jika sebaliknya maka output estimasi waktu refill ideal.

<p align="center">
  <img src="../../assets/A-2.png" width=50% height=50%/><br>
  Foto : Healing potion refill
</p>

Kamu memikirkan macam-macam strategi sebelum melanjutkan ke difficulty ini. Kemudian kamu berpikir untuk membuat sebuah code untuk memprediksi jumlah waktu minimum refill heal potion yang dapat kamu gunakan dalam run ini tanpa compromise waktu/durasi speedrun yang kamu jalani.

#### Format Masukan:
- n = Jumlah area, m = jumlah jalur, k = kapasitas maksimal healing potion yang bisa kamu bawa, e = estimasi awal jumlah refill
- a, b = area, p = jumlah heal potion yang digunakan untuk menyebrangi antar area

#### Format Keluaran:
- Waktu minimum refill yang efisien

_Hint_:
- Dijkstra bisa membantu banget O_o
- Graph mungkin harus di modif lagi

#### Batasan:
1 ≦ n,m,k,e ≦ 10<br>
1 ≦ a,b,p ≦ 20

#### Contoh Masukan 0:
```
4 4 3 10
1 2 3
1 3 3
3 4 3
2 4 3
```

#### Contoh Keluaran 0:
```
9
```

#### Penjelasan Keluaran 0:
Disini kita bisa melihat bahwa kapasitas maksimum yang kita bawa adalah 3 dan pada tiap area kita bisa refill +1 heal potion dengan durasi sekitar 3 detik. Agar kita bisa mencapai tujuan (area a = 4) seefisien mungkin, kita butuh refill hanya sebanyak 3 kali. Waktu untuk refill di tiap area adalah 3 sehingga bisa simpulkan bahwa 3 kali 3, yaitu 9.

#### Contoh Masukan 1:
```
4 4 3 8
1 2 3
1 3 3
3 4 3
2 4 3
```

#### Contoh Keluaran 1:
```
muak gweh, butuh heal lagi
```

#### Penjelasan Keluaran 1:
Kita mengetahui dari sample sebelumnya bahwa hasil merupakan 9, karena e adalah 8 maka kita print “muak gweh, butuh heal lagi”.
