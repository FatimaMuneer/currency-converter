#include<iostream>
#include<string>
using namespace std;

class Currency {
public:
    string name;
    float input;
    float output;

    Currency() {
        cout << "THIS SYSTEM CONVERTS PKR INTO OTHER CURRENCIES: \n" << endl;
        cout << "Enter the amount: ";
        cin >> input;
        cout << "Enter the name of the currency (e.g., pound, riyal, dollar, yen): ";
        cin >> name;
    }

    void conversion();
};

void Currency::conversion() {
    if (name == "pound") {
        output = input / 365;
        cout << input << " PKR = " << output << " Pounds" << endl;
    } else if (name == "dollar") {
        output = input / 276;
        cout << input << " PKR = " << output << " Dollars" << endl;
    } else if (name == "riyal") {
        output = input / 73.65;
        cout << input << " PKR = " << output << " Riyals" << endl;
    } else if (name == "yen") {
        output = input / 1.91;
        cout << input << " PKR = " << output << " Yen" << endl;
    } else {
        cout << "Invalid currency name!" << endl;
    }
}

int main() {
    Currency c;
    c.conversion();
    return 0;
}





