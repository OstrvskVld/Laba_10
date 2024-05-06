#include <iostream>
#include <algorithm>
#include "vector"
#include "set"

using namespace std;

int countAs(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a') {
            count++;
        }
        if ( c == 'b'){
            count++;
        }
        if ( c == 'c'){
            count++;
        }
        if ( c == 'd'){
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> mySets = {"abbbbccccddd", "aaabcdd", "bbccdaa"};


    string minAString = *min_element(mySets.begin(), mySets.end(), [](const string& s1, const string& s2) {
        return countAs(s1) < countAs(s2);
    });


    cout << "String with minimum 'a' characters: " << minAString << endl;

    return 0;
}


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


