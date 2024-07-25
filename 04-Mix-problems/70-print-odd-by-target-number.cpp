#include <iostream>
using namespace std;

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // Using 'break' to exit the loop early when the target is found
    for (int i=0; i<numbers[10]; i++) {
        if (numbers[i] == target) {
            cout << "Target found: " << target << endl;
            break; // Exit the loop immediately
        }
        cout << "Checking: " << numbers[i] << endl;
    }

    // Using 'continue' to skip specific elements
    for (int i=0; i<numbers[10]; i++) {
        if (numbers[i] % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << "Odd number: " << numbers[i] << endl;
    }

    return 0;
}