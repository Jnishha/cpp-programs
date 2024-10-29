#include <iostream>
using namespace std;

class USMoney {
private:
    int dollars;
    int cents;

    // Private method to normalize the cents
    void normalize() {
        if (cents >= 100) {
            dollars += cents / 100;
            cents = cents % 100;
        }
        else if (cents < 0) {
            dollars -= (-cents + 99) / 100;
            cents = cents % 100;
            if (cents < 0) cents += 100;
        }
    }

public:
    // Constructor with parameters
    USMoney(int d, int c) : dollars(d), cents(c) {
        normalize();
    }

    // Method to add two USMoney objects
    USMoney plus(const USMoney &other) const {
        int totalDollars = dollars + other.dollars;
        int totalCents = cents + other.cents;
        return USMoney(totalDollars, totalCents);
    }

    // Method to display USMoney object
    void display() const {
        cout << "USMoney: $" << dollars << "." << (cents < 10 ? "0" : "") << cents << endl;
    }
};

int main() {
    // Create two USMoney objects
    USMoney money1(5, 80); // 5 dollars and 80 cents
    USMoney money2(1, 90); // 1 dollar and 90 cents

    // Add the two USMoney objects
    USMoney result = money1.plus(money2);

    // Display the result    
    result.display();

    return 0;
}
