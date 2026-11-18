#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter standard form values.\n";
    cout << "Enter the value of (a): ";
    cin >> a;
    cout << "Enter the value of (b): ";
    cin >> b;
    cout << "Enter the value of (c): ";
    cin >> c;

    // Step 1: Calculate b^2
    int b_sq = b * b;
    cout << "\nSquaring (b): " << b << " x " << b << " = " << b_sq << "\n";
    cout << "Our equation is now: " << b_sq << " - 4(" << a << ")(" << c << ")\n";

    // Step 2: Calculate 4ac
    int four_ac = 4 * a * c;
    cout << "Solving 4ac: 4 x " << a << " x " << c << " = " << four_ac << "\n";

    // Step 3: Calculate discriminant
    int discriminant = b_sq - four_ac;
    cout << "Discriminant: " << b_sq << " - " << four_ac << " = " << discriminant << "\n\n";

    // Step 4: Determine nature of roots
    if (discriminant < 0) {
        cout << "Therefore, " << discriminant << " < 0: Has No Real Roots (Imaginary).\n";
    } else if (discriminant == 0) {
        cout << "Therefore, " << discriminant << " = 0: Real, Equal, and Rational.\n";
    } else {
        int root = static_cast<int>(sqrt(discriminant));
        if (root * root == discriminant) {
            cout << "Therefore, " << discriminant << " > 0: Real, Unequal, and Rational.\n";
        } else {
            cout << "Therefore, " << discriminant << " > 0: Real, Unequal, and Irrational.\n";
        }
    }

    return 0;
}
