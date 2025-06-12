/*
Write a program using class to compare and concat 2 strings with and without friend function
*/


#include <iostream>

using namespace std;

class String {
    char data[50];

    public:
        int operator==(String S2);
        String operator+(String S2);
        void display();
        void read();
};

int String::operator==(String S2){
    int i = 0;

    while ( data[i] != '\0') {
        if ( data[i] != S2.data[i] ) {
            return 0;
        }
        i++;

    }

    return 1;
}

String String::operator+(String S2) {
    String temp;
    
    int len = 0;

    while (data[len] != '\0') {
        temp.data[len] = data[len];
        len++;
    }

    int len2 = 0;
    while (data[len2] != '\0') {
        temp.data[len++] = S2.data[len2++];
    }
    

    // debug 
    // cout << "Length of string: " << len  << " " << len2 << endl;
    return temp;
    
}

void String::display(){
    cout << data << endl;
}

void String::read() {
    cin >> data;
}

int main() {
    String s1, s2, s3;

    cout << " Enter 1st string: "; s1.read();
    cout << " Enter 2nd string: "; s2.read();


    s3 = s1 + s2;
    if ( (s1 == s2) ) {
        cout << "Equal strings" << endl;
    } else {
        cout << "Unequal strings" << endl;
    }

    cout << "Concatenated: " ; s3.display();


}