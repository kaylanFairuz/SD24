### [← Back](../../README.md)
# File Handling in C++
- [**Text files**](#txt)
    - [Text file input | Terminal output](#f-t)
    - [Terminal input | Text file output](#t-f)
    - [Text file input | Text file output](#f-f)
- [**Binary files**](#txt)
    - [Text file input | Binary output](#t-b)
    - [Binary input | Text file output](#b-t)

## Text files <a name="txt"></a>
### Text file input | Terminal output <a name="f-t"></a>
```cpp
#include <iostream>
#include <fstream>
using namespace std;

void error_msg(int code)
{
    cout << "Error: ";
    if (code == 1) cout << "Input file not opened.\n";
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

    in.close();

    cout << result << "\n";
    return 0;
}
```

### Terminal input | Text file output <a name="t-f"></a>
```cpp
#include <iostream>
#include <fstream>
using namespace std;

void error_msg(int code)
{
    cout << "Error: ";
    if (code == 1) cout << "Input file not opened.\n";
    else if (code == 2) cout << "Output file not opened.\n";
    exit(1);
}

int main()
{
    string name_1 = "example.txt", name_2 = "example_out.txt";

    ifstream in(name_1);
    if (!in) error_msg(1);

    ofstream out(name_2);
    if (!out) error_msg(2);

    char ch;
    while (in.get(ch)) out.put(ch);

    in.close();
    out.close();

    return 0;
}
```

### Text file input | Text file output <a name="f-f"></a>
```cpp
#include <iostream>
#include <fstream>
using namespace std;

void error_msg(int code)
{
    cout << "Error: ";
    if (code == 2) cout << "Output file not opened.\n";
    exit(1);
}

int main()
{
    string name = "example_out.txt";

    ofstream out(name);
    if (!out) error_msg(2);

    string line;
    while (getline(cin, line))
    {
        if (line.empty())
            break;
        out.write(line.c_str(), line.size());
        out.put('\n');
    };

    out.close();

    return 0;
}
```

## Binary files <a name="bin"></a>
