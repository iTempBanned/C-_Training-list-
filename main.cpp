#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    list<string> l;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cout << "Enter element " << i+1 << ": ";
        cin >> s;
        l.push_back(s);
    }

    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}