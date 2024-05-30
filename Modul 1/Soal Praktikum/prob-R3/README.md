# Joni Si Tidak Disiplin
<p align="center">
  Time Limit : 1 detik<br>
  Memory Limit : 256 MB<br>
  Author: Richie Seputro<br><br>
  <b>SOAL HARUS DIKERJAKAN DENGAN MENGGUNAKAN PRIORITY QUEUE!</b>
</p>


#### Deskripsi: 
Joni punya problem dengan kedisiplinan. Ia selalu saja kewalahan mengatur hidupnya. Ia kemudian punya ide untuk membuat todo list atau planner yang customized untuk use case dirinya. Ia dulu sudah mencoba berbagai planner app, namun ketidakdisiplinannya selalu menang. Hal ini karena dia sering mencurangi planner app dengan cara membuat entry todo yang sebenarnya tidak penting namun ia buat penting dengan cara memberinya angka prioritas yang tinggi. Akhirnya Joni meminta kamu untuk membuatkannya software planner app yang cocok baginya. Ada satu hal yang harus kamu perhatikan, yaitu jika pada text todo list ada kata "seru-seruan", maka jangan dimasukkan ke todo list karena itu adalah cara yang biasa Joni lakukan untuk mencurangi todo list-nya.

#### Format Masukan:
Baris pertama berisi 𝑁. 𝑁 adalah jumlah entry todo list Joni. 𝑁 baris berikutnya berisi 𝑃 dan 𝑇. 𝑃 adalah angka prioritas entry todo list dan 𝑇 adalah teks entry todo list.

#### Format Keluaran:
Teks todo list yang valid yang sudah tersortir berdasarkan prioritas secara descending. Jika ada entry-entry yang prioritasnya sama, maka entry-entry tersebut diurutkan secara leksikografis descending, contoh: “main game” secara leksikografis lebih kecil dibandingkan “minum air”.

#### Batasan:
0 < 𝑁, 𝑃 ≤ 100<br>
0 < length(𝑇) ≤ 50

#### Contoh Masukan 1:
```
5
100 aku mau seru-seruan sama temenku
100 kerja pr strukdat
50 aku mau seru-seruan main mobile legends
40 belajar untuk ets strukdat
40 beli makanan kucing di toko sebelah
```

#### Contoh Keluaran 1:
```
kerja pr strukdat
beli makanan kucing di toko sebelah
belajar untuk ets strukdat
```

