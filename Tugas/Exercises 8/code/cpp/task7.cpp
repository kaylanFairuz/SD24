#include <bits/stdc++.h>
using namespace std;

// (a)
void retrieve_by_number(const string &filename, int record_num)
{
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    string line;
    int currentRecord = 0;
    while (getline(file, line))
    {
        if (currentRecord == record_num)
        {
            cout << line << endl;
            break;
        }
        ++currentRecord;
    }

    if (currentRecord != record_num)
    {
        cerr << "Record number out of range." << endl;
    }
}

// (b)
void retrieve_by_key(const string &filename, const string &key)
{
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    string line;
    while (getline(file, line))
    {
        if (line.substr(0, key.length()) == key)
        {
            cout << line << endl;
            return;
        }
    }

    cerr << "Record with key " << key << " not found." << endl;
}

// (c)
void create_index_inorder(const string &filename, vector<pair<string, int>> &index)
{
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    string line;
    int record_num = 0;
    while (getline(file, line))
    {
        string key = line.substr(0, line.find(','));
        index.emplace_back(key, record_num);
        ++record_num;
    }
}

int search_index_inorder(const vector<pair<string, int>> &index, const string &key)
{
    for (const auto &entry : index)
    {
        if (entry.first == key)
        {
            return entry.second;
        }
    }
    return -1;
}

// (d)
void create_index_sorted(const string &filename, vector<pair<string, int>> &index)
{
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    string line;
    int record_num = 0;
    while (getline(file, line))
    {
        string key = line.substr(0, line.find(','));
        index.emplace_back(key, record_num);
        ++record_num;
    }
    sort(index.begin(), index.end());
}

int search_index_sorted(const vector<pair<string, int>> &index, const string &key)
{
    auto it = lower_bound(index.begin(), index.end(), make_pair(key, 0));
    if (it != index.end() && it->first == key)
    {
        return it->second;
    }
    return -1;
}

int main()
{
    const string filename = "employees.txt";
    string key = "SYS777";
    int record_num_1 = 4;

    retrieve_by_number(filename, record_num_1);
    retrieve_by_key(filename, key);

    vector<pair<string, int>> index_inorder;
    create_index_inorder(filename, index_inorder);
    key = "STF425";

    int record_num_2 = search_index_inorder(index_inorder, key);
    if (record_num_2 != -1)
    {
        retrieve_by_number(filename, record_num_2);
    }
    else
    {
        cerr << "Key not found in index." << endl;
    }

    vector<pair<string, int>> index_sorted;
    create_index_sorted(filename, index_sorted);
    key = "SYS925";

    int record_num_3 = search_index_sorted(index_sorted, key);
    if (record_num_3 != -1)
    {
        retrieve_by_number(filename, record_num_3);
    }
    else
    {
        cerr << "Key not found in index." << endl;
    }

    return 0;
}