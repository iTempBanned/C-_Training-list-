#include <iostream>
using namespace std;

template <typename T>
void Scambia(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Maggiore(T a, T b) {
    if (a > b) {
        cout << a << " e' maggiore di " << b << endl;
    } else if (b > a) {
        cout << b << " e' maggiore di " << a << endl;
    } else {
        cout << a << " e " << b << " sono uguali" << endl;
    }
}

template <typename T>
void Stampa(T a, T b) {
    cout << "=== Before Swap ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    Scambia(a, b);

    cout << "=== After Swap ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "=== Comparison ===" << endl;
    Maggiore(a, b);

    // Removed recursive call that caused infinite loop
}

int main() {
    cout << "****************************************" << endl;
    cout << "*     Template Functions Demo          *" << endl;
    cout << "****************************************" << endl;

    int a = 5, b = 10;
    cout << "\nTesting with integers:" << endl;
    Stampa(a, b);

    cout << "\nTesting with doubles:" << endl;
    double x = 3.14, y = 2.71;
    Stampa(x, y);

    cout << "\nTesting with characters:" << endl;
    char char1 = 'A', char2 = 'Z';
    Stampa(char1, char2);

    cout << "\n****************************************" << endl;
    cout << "*           Program Complete           *" << endl;
    cout << "****************************************" << endl;

    return 0;
}
