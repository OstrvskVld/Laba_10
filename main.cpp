#include <iostream>
#include <algorithm>
#include "vector"
#include "set"

using namespace std;

//task 1

//int main() {
//    string line1 = "abcdefg";
//    string line2 = "fabc";
//
//    set<char> chars(line2.begin(), line2.end());
//
//    auto is_in_chars = [chars](char c) {
//        return chars.find(c) != chars.end();
//    };
//
//    auto it_begin = find_if(line1.begin(), line1.end(), is_in_chars);
//    auto it_end = find_if_not(it_begin, line1.end(), is_in_chars);
//
//    if (it_end != line1.end()) {
//        cout << "Smallest range: " << *it_begin << " - " << *it_end << endl;
//    } else {
//        cout << "there is no range with symbol from line2" << endl;
//    }
//
//    return 0;
//}




//task 2

//int counter = 0;
//int cooldown = 2;
//void square(int x) {
//    cout << x * x << endl;
//}
//
//
//void forEachsq() {
//    while(counter == 0){
//        if (counter == 0) {
//            vector<int> numbers1{1, 2, 3, 4, 5};
//            for_each(numbers1.begin(), numbers1.end(), [](int x) {
//                square(x);
//            });
//            counter += cooldown;
//        }
//        else
//            cerr << "Error!";
//    }
//    }
//
//void div(int x) {
//    if (x != 0) {
//        cout << x / 2 << endl;
//    } else {
//        cerr << "Error: Division by zero" << endl;
//    }
//}
//
//void forEachdiv() {
//    while (counter != 0){
//        if(counter > 0)
//            counter--;
//        vector<int> numbers2{50, 30, 20, 10};
//        for_each(numbers2.begin(), numbers2.end(), [](int x){
//            div(x);
//        });
//    }
//    }
//
//int main() {
//    forEachsq();
//    forEachdiv();
//    return 0;
//}



//task 3

struct Players {
    string name;
    int age;
    int index;

    Players(string nname, int nage, int nindex)
            : name{nname}, age{nage}, index{nindex} {}
};

void printPlayers(const vector<Players>& players) {
    for (const Players& player : players) {
        cout << player.name << " " << player.age << " " << player.index << endl;
    }
}

int main() {
vector<Players> players{
        {"Vova", 18, 3}, {"Vlad", 17, 2}, {"Anna", 21, 1}
};


cout << "Original players:\n";
printPlayers(players);


sort(players.begin(), players.end(), [](const Players& p1, const Players& p2) {
    return p1.index < p2.index;
});


cout << "\nSorted players by index:\n";
printPlayers(players);

return 0;
}
