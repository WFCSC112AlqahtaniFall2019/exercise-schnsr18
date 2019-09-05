#include <iostream>
#include <vector>
using namespace std;


int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    vector <int>revVctr(8);               // User values
    int i;
    int temp;

    // Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr.at(i);
    }

    // Reverse
    for (i = 0; i < (revVctr.size() / 2); ++i) {
        temp = revVctr.at(i);  // These 3 statements swap
        revVctr.at(i) = revVctr.at(revVctr.size() - 1 - i);
        revVctr.at(revVctr.size() - 1 - i) = temp;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr.at(i);
    }
    cout << endl;

    return 0;
}