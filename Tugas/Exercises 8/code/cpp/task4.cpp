#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> read_segment(ifstream &input, size_t max_size)
{
    vector<int> segment(max_size);
    input.read(reinterpret_cast<char *>(segment.data()), max_size * sizeof(int));
    segment.resize(input.gcount() / sizeof(int));
    return segment;
}

void write_segment(ofstream &output, const vector<int> &segment)
{
    output.write(reinterpret_cast<const char *>(segment.data()), segment.size() * sizeof(int));
}

void merge_sort_files(const string &temp1, const string &temp2, ofstream &output)
{
    ifstream in1(temp1, ios::binary);
    ifstream in2(temp2, ios::binary);

    int value1, value2;
    bool hasValue1 = static_cast<bool>(in1.read(reinterpret_cast<char *>(&value1), sizeof(int)));
    bool hasValue2 = static_cast<bool>(in2.read(reinterpret_cast<char *>(&value2), sizeof(int)));

    while (hasValue1 && hasValue2)
    {
        if (value1 <= value2)
        {
            output.write(reinterpret_cast<char *>(&value1), sizeof(int));
            hasValue1 = static_cast<bool>(in1.read(reinterpret_cast<char *>(&value1), sizeof(int)));
        }
        else
        {
            output.write(reinterpret_cast<char *>(&value2), sizeof(int));
            hasValue2 = static_cast<bool>(in2.read(reinterpret_cast<char *>(&value2), sizeof(int)));
        }
    }

    while (hasValue1)
    {
        output.write(reinterpret_cast<char *>(&value1), sizeof(int));
        hasValue1 = static_cast<bool>(in1.read(reinterpret_cast<char *>(&value1), sizeof(int)));
    }
    while (hasValue2)
    {
        output.write(reinterpret_cast<char *>(&value2), sizeof(int));
        hasValue2 = static_cast<bool>(in2.read(reinterpret_cast<char *>(&value2), sizeof(int)));
    }
}

int main()
{
    const string input = "data.bin";
    const string temp1 = "temp1.bin";
    const string temp2 = "temp2.bin";
    const size_t max_size = 20;

    ifstream inputFile(input, ios::binary);
    if (!inputFile)
    {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    // Checking
    vector<int> current_ints;
    inputFile.seekg(0, ios::end);
    size_t fileSize = inputFile.tellg();
    inputFile.seekg(0, ios::beg);

    current_ints.resize(fileSize / sizeof(int));
    inputFile.read(reinterpret_cast<char *>(current_ints.data()), fileSize);
    cout << "Current: ";
    for (int num : current_ints)
    {
        cout << num << " ";
    }
    cout << endl;

    inputFile.clear();
    inputFile.seekg(0, ios::beg);

    ofstream tempOut1(temp1, ios::binary);
    ofstream tempOut2(temp2, ios::binary);

    bool write_to_first = true;
    while (inputFile.peek() != EOF)
    {
        vector<int> chunk = read_segment(inputFile, max_size);
        sort(chunk.begin(), chunk.end());

        if (write_to_first)
        {
            write_segment(tempOut1, chunk);
        }
        else
        {
            write_segment(tempOut2, chunk);
        }
        write_to_first = !write_to_first;
    }

    inputFile.close();
    tempOut1.close();
    tempOut2.close();

    ofstream outputFile(input, ios::binary | ios::trunc);
    merge_sort_files(temp1, temp2, outputFile);
    outputFile.close();

    remove(temp1.c_str());
    remove(temp2.c_str());

    cout << "Sorting complete." << endl;
    return 0;
}
