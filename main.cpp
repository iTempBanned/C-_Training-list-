#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    list<string> list;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cout << "Enter element " << i+1 << ": ";
        cin >> s;
        list.push_back(s);
    }

    for (auto it = list.begin(); it != list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}