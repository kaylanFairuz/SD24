# Graf
- [**Pengenalan Graf**](#intro)
    - [Definisi Graf](#define)
    - [Representasi Graf](#representation)
        - [1. Edge List](#r1)
        - [2. Adjacency Matrix](#r2)
        - [3. Adjacency List](#r3)
- [**Traversal Graf**](#traversal)
- [**Referensi**](#reference)

## Pengenalan Graf <a name="intro"></a>
### Definisi Graf <a name="define"></a>
Graf adalah sekumpulan _vertices_ (singular: _vertex_) atau _nodes_ yang dihubungkan oleh nol atau lebih _edges_. Berbeda dari _tree_ dimana terdapat aturan dalam hubungan antara _nodes_ (setiap _node_ hanya memiliki satu _parent_ dan sebagainya), graf tidak memiliki aturan apapun. Sebuah _tree_ juga merupakan sebuah graf, lebih tepatnya sebuah kelompok khusus dari graf.

Secara matematis, sebuah graf `G` adalah pasangan terurut dari sekumpulan _vertices_ `V` dan sekumpulan _edges_ `E`, atau dengan kata lain `G = (V, E)`. Pasangan terurut ditandai dengan kurung biasa `()` dimana `(a, b) != (b, a)`, sedangkan pasangan tidak terurut ditandai dengan kurung kurawal `{}` dimana `{a, b} == {b, a}`. Terdapat dua jenis _edge_ dalam sebuah graf, yaitu **_directed_** dan **_undirected_** (perhatikan gambar di bawah). Sebuah graf yang **hanya** memiliki _directed edges_ disebut **_directed graph_** atau kadang-kadang disebut _digraph_, sedangkan graf yang **hanya** memiliki _undirected edges_ disebut **_undirected graph_**

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/edge-types.png" width="505" height="150"/><br>
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/graph-types.png"/>
</p>

Perhatikan contoh _undirected graph_ berikut. _Vertices_ pada graf tersebut dapat dinyatakan dengan `V = {v1, v2, v3, v4, v5, v6, v7, v8}`, sedangkan _edges_ pada graf tersebut dinyatakan dengan pasangan tidak terurut dari _vertices_-nya, yaitu `E = {{v1, v2}, {v1, v3}, {v1, v4},` `{v2, v5}, {v2, v6}, {v3, v7}, {v4, v8}, {v7, v8}, {v6, v8}, {v5, v8}}`.

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/graph_example-1.png"/>
</p>

Selain bersifat **_directed_** dan **_undirected_**, graf juga dapat bersifat **_weighted_** dan **_unweighted_**. Sebuah **_weighted graph_** adalah graf dimana setiap _edge_ memiliki bobot nilai atau _weight_. Sedangkan sebuah **_unweighted graph_** adalah graf dimana _weight_ dari setiap _edge_ bernilai sama atau umumnya bernilai 1. Salah satu contoh dari _weighted graph_ yang paling umum adalah graf yang menunjukkan hubungan antar kota, seperti contoh berikut.

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/weighted-graph_example-1.png"/>
</p>

Pada graf tersebut, _weight_ setiap _edge_ menyatakan panjang jalan yang menghubungkan dua kota dalam km. Dengan adanya _weight_, rute terbaik belum tentu rute dengan _edges_ paling sedikit. Perhatikan gambar di bawah. Rute kuning umumnya merupakan rute terbaik karena hanya melalui 2 _edges_, sedangkan rute hijau dan merah sama baiknya karena masing-masing melalui 3 _edges_. Akan tetapi, dalam kasus ini, rute hijau adalah rute terbaik karena memiliki total _weight_ terkecil.

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/weighted-graph_example-2.png"/>
</p>

### Representasi Graf <a name="representation"></a>
Terdapat 3 cara yang sering digunakan untuk merepresentasikan graf. Akan digunakan _undirected graph_ berikut untuk contoh dibawah.

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/graph_example-2.png"/>
</p>

#### 1. Edge List <a name="r1"></a>
Edge List adalah representasi graf dilakukan dengan menyimpan semua daftar _edge_ yang ada dalam suatu graf. Penyimpanan dapat dilakukan di dalam sebuah array statis maupun dinamis seperti **vector**. Pengimplementasiannya dapat menggunakan struct yang berisi _vertex_ yang berada diujung _edge_ tersebut beserta _weight_-nya.

```cpp
struct Edge
{
  string start_vertex;
  string end_vertex;
  int weight;
};
```

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/edge-list_example.png"/>
</p>


#### 2. Adjacency Matrix <a name="r2"></a>
Adjacency Matrix adalah representasi graf yang menggunakan matrix berukuran `|V| x |V|`. Pada indeks dari matrix, digunakan nilai:
- **0** jika tidak terdapat _edge_ yang menghubungkan _vertex_ i dengan _vertex_ j.
- **1** jika terdapat _unweighted edge_ yang menghubungkan _vertex_ i dengan _vertex_ j.
- **_weight_** jika terdapat _weighted edge_ yang menghubungkan _vertex_ i dengan _vertex_ j.

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/adjacency-matrix_example.png"/>
</p>

#### 3. Adjacency List <a name="r3"></a>
Adjacency Matrix adalah representasi graf yang dilakukan dengan hanya menyimpan daftar dari _vertex_-_vertex_ lain yang memiliki _edge_ yang terhubung dengan suatu _vertex_. Penyimpanan dapat dilakukan di dalam sebuah array statis maupun dinamis seperti **vector**

<br>
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/adjacency-list_example.png" width="274" height="386"/>
</p>

## Traversal Graf <a name="traversal"></a>

## Referensi <a name="reference"></a>
- [Algoritma dan Pemrograman ITS - Modul Struktur Data 2020](https://github.com/AlproITS/StrukturData/wiki)
- [Algoritma dan Pemrograman ITS - Modul Struktur Data 2023](https://github.com/Algoritma-dan-Pemrograman-ITS/StrukturData/wiki)
- [mycodeschool - Data structures](https://www.youtube.com/playlist?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
