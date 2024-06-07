### [← Back](../../README.md)
# File Handling in C++
- [**Text file input | Terminal output**](#f-t)
- [**Terminal input | Text file output**](#t-f)
- [**Text file input | Text file output**](#f-f)

## Text file input | Terminal output <a name="f-t"></a>
```cpp
#include <iostream>
#include <fstream>
using namespace std;

void error_msg(int code)
{
    printf("Error: ");
    if (code == 1) printf("Input file not opened.\n");
    exit(1);
}

int main()
{
    string name = "example.txt";

    ifstream in(name);
    if (!in) error_msg(1);

    string result;
    char ch;
    while (in.get(ch)) result += ch;

    cout << result << "\n";
    return 0;
}
```

## Terminal input | Text file output <a name="t-f"></a>
```cpp

```

## Text file input | Text file output <a name="f-f"></a>
```cpp

```
