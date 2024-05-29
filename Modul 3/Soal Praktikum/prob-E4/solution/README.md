# Solusi
### Ide
Tinjau kasus berikut:
```
6 3 3 2
1 2
1 5
3 6
```

<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/e4-solution-1.png" width=75% height=75%/>
</p>

Garis putus-putus menandakan portal yang belum diaktifkan. Agar warkop dapat selalu diakses, di setiap kepulauan (_disjoint connected components_) dari graf harus terdapat 1 warkop. Dalam kondisi ini, nilai dari sebuah portal dan sebuah warkop setara, sehingga untuk meminimalkan waktu yang diperlukan bergantung kepada lama pembuatan warkop dan portal. Sehingga, hanya ada 2 kemungkinan cara untuk meminimalkan waktu untuk setiap case:

- Ketika waktu pembuatan warkop lebih lama dari pembuatan portal, setiap pulau dibuat sebuah warkop, dan tidak ada pulau yang dihubungkan. Sehingga waktu minimal yang dibutuhkan adalah

$$
M = W × V
$$

- Ketika waktu pembuatan portal lebih lama dari pembuatan warkop, setiap kepulauan akan memiliki satu warkop, dimana setiap kepulauan akan terhubung antar pulaunya melalui `n-1` portal, dimana `n` adalah jumlah pulau dari kepulauan tersebut. Jika ada `K` kepulauan, maka waktu minimal yang dibutuhkan adalah

$$
M = W × K + P × (V - K)
$$

### Pendekatan
Lakukan DFS terhadap seluruh node, pastikan jika sebuah node sudah pernah dikunjungi, node itu akan di-skip untuk iterasi selanjutnya.

### Implementasi
```cpp
vector<long> dfs()
{
    vector<bool> visited(vertexCount, false);
    vector<long> provinces;

    for (int i = 0; i < vertexCount; i++)
    {
        if (!visited[i])
        {
            stack<long> st;
            st.push(i);
            visited[i] = true;

            long provincesSize = 0;

            while (!st.empty())
            {
                long temp = st.top();
                st.pop();
                provincesSize++;

                for (auto vertex : adjList[temp])
                {
                    if (!visited[vertex])
                    {
                        st.push(vertex);
                        visited[vertex] = true;
                    }
                }
            }

            provinces.push_back(provincesSize);
        }
    }

    return provinces;
}
```
