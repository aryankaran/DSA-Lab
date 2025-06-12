/*
A-3 :->  Create a class complex that contains two data members , real and imaginary of float type
         to store the real and imaginary part of complex number, the class also coantins the following functions :->
         
         - addition: It takes one complex object as argument and returns the n object conatining the addition of them.
         - substraction: --- sub.
         - multiplication: --- mul.
         - division: --- div.

        via overloading operators

        Write the main fucntion to implement the complex class
*/


#include <cstdio>
#include <iostream>

using namespace std;

class Complex {
    float real;
    float img;

    public:
        void display();
        void setData(float x, float y);

        Complex operator+(Complex c2);
        Complex operator-(Complex c2);
        Complex operator*(Complex c2);
        Complex operator/(Complex c2);
};

void Complex::setData(float x, float y){
    real = x;
    img = y;
}

void Complex::display(){

    // real check
    /*
    switch (real) {
        case 0: 
        case  
    }
    */
    if (real != 0){
        cout << real;
    }

    if (img != 0){
        if (img > 0){
            if (real != 0){
                cout << '+';
            }
            cout << img << 'i' << endl;
            
        } else {
            cout << img << 'i' << endl;
        }
    } else cout << endl;
}

Complex Complex::operator+(Complex c2){
    Complex temp;
    temp.real = real + c2.real;
    temp.img = img + c2.img;

    return temp;
}

Complex Complex::operator-(Complex c2){
    Complex temp;
    temp.real = real - c2.real;
    temp.img = img - c2.img;

    return temp;
}


Complex Complex::operator*(Complex c2){
    Complex temp;

    temp.real = real * c2.real - img * c2.img;
    temp.img = real * c2.img + img * c2.real;

    return temp;
}

Complex Complex::operator/(Complex c2){
    Complex temp;

    float a = real;
    float b = img;
    float c = c2.real;
    float d = c2.img;

    float base = c*c + d*d;

    temp.real = (a*c + b*d) / base;
    temp.img = (b*c - a*d) / base;

    return temp;
}


int main(){
    Complex c1, c2, c3, c4, c5, c6;

    float x, y;
    

    cout << "Enter 1st complex number:->" << endl << "Real: ";
    cin >> x;
    cout << "Imaginary: ";
    cin >> y;
    cout << endl;

    // x = 0, y =3;
    c1.setData(x, y);


    cout << "Enter 2nd complex number:->" << endl << "Real: ";
    cin >> x;
    cout << "Imaginary: ";
    cin >> y;
    cout << endl;

    // x = 0, y = 5;
    c2.setData(x, y);


    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c6 = c1 / c2;

    cout << "1st complex number: "; c1.display();
    cout << "2nd complex number: "; c2.display(); cout << endl;

    cout << "Addition: "; c3.display();
    cout << "Substraction: "; c4.display();
    cout << "Multiplication: "; c5.display();
    cout << "Division: "; c6.display();
}