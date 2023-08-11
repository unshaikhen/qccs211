#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (true) {
        int square = i * i, square_divten = square / 10;
        if (square % 2 == 1 && square_divten % 2 == 1) {
            cout << "The first perfect square with last two digits odd is: " << square << " also the digit are " << i << endl;
        }
        break;
        i++;
    }
    return 0;
}
