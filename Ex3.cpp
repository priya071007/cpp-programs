#include <iostream>
using namespace std;

class fraction {
    int num, den;

public:
    void input() {
        cout << "Enter num part: ";
        cin >> num;

        cout << "Enter den part: ";
        cin >> den;
    }

    void display() {
        cout << num<< " / " << den ;
    }

    fraction add(fraction f) {
        fraction temp;
        temp.num = num * f.den+f.num*f.den;
        temp.den = den*f.den;
        return temp;
    }
 fraction sub(fraction f) {
        fraction temp;
        temp.num = num * f.den-f.num*f.den;
        temp.den = den*f.den;
        return temp;
    }
};

int main() {
    fraction f1,f2, sum, difference;

    cout << "Enter first fraction number:\n";
    f1.input();

    cout << "\nEnter second fraction number:\n";
    f2.input();

    sum = f1.add(f2);
    difference = f1.sub(f2);

    cout << "\nAddition = ";
    sum.display();

    cout << "\nSubtraction = ";
    difference.display();

    return 0;
}
