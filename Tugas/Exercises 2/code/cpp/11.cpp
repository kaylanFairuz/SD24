#include <bits/stdc++.h>
using namespace std;

typedef struct {
    string name;
    double expense, income, net_income;
} stall;

int main() {
    // File path bisa disesuaikan
    char file_path[100] = "D:/Kaylan 2023/Data/Study/STRUKDAT/Tugas/Pg.48/Prob11_sample.txt";
    ifstream file(file_path);
    string line;
    
    vector<stall> stalls;
    double total_net_income = 0;
    while (getline (file, line)) {
        if(line == "xxxxxx") {
            break;
        }
        
        stringstream ss(line);
        stall temporary;
        
        ss >> temporary.name;
        // Format nama kios pada file adalah Kata1_Kata2_Kata3_... dan seterusnya.
        replace(temporary.name.begin(), temporary.name.end(), '_', ' ');
        ss >> temporary.expense;
        ss >> temporary.income;
        temporary.net_income = temporary.income - temporary.expense;
        total_net_income += temporary.net_income;
        
        stalls.push_back(temporary);
    }

    file.close();
    
    sort(stalls.begin(), stalls.end(), [](const stall& a, const stall& b) {
        return a.net_income > b.net_income;
    });

    vector<string> most_profitable_stalls;
    double max_net_income = stalls[0].net_income;
    for(int i = 0; i < stalls.size(); i++) {
        cout << stalls[i].name << ", Net Income: " << stalls[i].net_income << endl;
        if((stalls[i].net_income == max_net_income) && (max_net_income > 0.00)) {
            most_profitable_stalls.push_back(stalls[i].name);
        }
    }
    cout << endl << (stalls.size() > 1 ? "Number of Stalls: " : "Number of Stall: ") << stalls.size() << endl;
    cout << (total_net_income >= 0 ? "Profit: " : "Loss: ") << abs(total_net_income) << endl;
    cout << (most_profitable_stalls.size() > 1 ? "Most Profitable Stalls: " : "Most Profitable Stall: ") << endl;
    for(int i = 0; i < most_profitable_stalls.size(); i++) {
        cout << "- " << stalls[i].name << endl;
    }
}