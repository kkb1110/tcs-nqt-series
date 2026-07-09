#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    
    Complex operator -(const Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    friend ostream& operator <<(ostream&,Complex) ;

    
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

    ostream& operator <<(ostream& ,Complex c) {
         cout << c.real;
        if (c.imag >= 0)
            cout << " + " << c.imag << "i";
        else
            cout << " - " << -c.imag << "i";
        cout << endl;
        //  return cout;

    }


int main() {
    Complex c1(4, 5);
    Complex c2(2, 3);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "First Complex Number: ";
    // c1.display();

    // cout << "Second Complex Number: ";
    // c2.display();

    // cout << "Addition: ";
    // c3.display();

    // cout << "Subtraction: ";
    // c4.display();
    operator<<(cout,c1);

    cout << "Second Complex Number: ";
    cout<<c2;
    cout<<c1<<c2;

    return 0;
}