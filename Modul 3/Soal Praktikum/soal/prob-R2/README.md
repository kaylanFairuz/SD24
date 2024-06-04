# CJ5 | Versus CP5
<p align="center">
  <a href="https://minesweeper.ralfazza.com/">
    <img src="../../../assets/cj5.png"/>
  </a>  
</p>

#### Deskripsi: 
Berkat bantuanmu, kapten CJ telah mendapatkan kekuatan Cloud Cloud Fruit, Devil Fruit yang sudah lama diincar agensi CP5. Di Kepulauan Sabaody, beberapa kapal CP5 tiba untuk menangkap mereka, para agen CP5 ditempatkan pada setiap jembatan penghubung antar pulau. Kalian telah berhasil mendapatkan informasi jumlah agen yang diposisikan pada setiap jembatan. Dengan kekuatan Cloud Cloud Fruit, CJ dapat terbang dan mengangkut krunya untuk menghindari perlawanan dengan para agen yang ada di suatu jembatan namun karena ia belum familiar dengan kekuatannya, ia hanya bisa melakukan hal ini sekali. Kamu sadar bahwa kepulauan dapat direpresentasikan sebagai vertices dan jembatan penghubung pulau sebagai _edges_ dengan jumlah agen yang ada pada sebuah jembatan sebagai _weight_. Dengan ini kamu bisa menemukan jumlah agen CP5 paling sedikit yang harus para kru lawan. Sekali lagi kamu harus menggunakan kekuatan Code Code Fruit milikmu untuk menyelamatkan para kru.


#### Format Masukan:
Diberikan sebuah _directed weighted graph_ di mana input baris pertama terdiri atas 𝑣 (jumlah pulau/_vertices_) dan 𝑒 (jumlah jembatan/_edges_). Pulau diberikan nomor dari 0 hingga 𝑣 − 1. Sebanyak 𝑒 baris berikutnya terdiri atas 𝑃 𝑄 𝑊, merepresentasikan jumlah agen/_weight_ dari pulau 𝑃 ke 𝑄 adalah sebanyak 𝑊.


#### Format Keluaran:
Jumlah total agen CP5 paling sedikit yang harus dilawan mulai dari pulau 0 hingga pulau 𝑣 − 1 jika CJ dapat terbang dan mengangkat krunya hanya sekali (ini berarti bahwa agen yang dilawan pada sebuah jembatan yang mereka lalui dengan memilih untuk terbang adalah 0).


#### Batasan dan Aturan:
- 𝑣 ∈ [3,100]
- 𝑒 ∈ [𝑣 − 1,𝑣<sup>2</sup> - 𝑣]
- 𝑃 , 𝑄 ∈ [0, 𝑣 − 1]
- W ∈ [1,100]
- Dipastikan hanya ada 1 edge dari sebuah _vertex_ menuju _vertex_ adjacent-nya (misal ada _vertex_ A dan B, maka dari A ke B hanya ada maksimum 1 edge, tidak mungkin ada 2 atau lebih edge dari A ke B)
- Dipastikan ada setidaknya 1 jalur dari _vertex_ 0 ke 𝑣 − 1
- Kamu hanya punya 1 kesempatan untuk terbang dan menghindari pertarungan pada sebuah jembatan

#### Contoh Masukan 1:
```
4 4
0 1 10
0 2 5
1 3 20
2 3 100
```

#### Contoh Keluaran 1:
```
5
```

#### Penjelasan Keluaran 1:
Ada total 6 jalur yang mungkin, jalur di mana kau melawan dengan jumlah agen paling sedikit adalah dengan pergi dari pulau 0 ke pulau 2 (melawan 5 agen) dan lalu terbang dari pulau 2 ke pulau 3 (tidak melawan karena terbang).
<p align="center">
    <img src="../../../assets/cj5_explanation-1.png"/>
</p>

#### Hint
Kalian dapat membuat sebuah fungsi yang mengubah _weight_ sebuah _edge_ menjadi 0 untuk sementara
