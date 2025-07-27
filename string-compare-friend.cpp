/*
Write a program using class to compare and concat 2 strings with and without friend function
(FRIEND FUNCTION VERSION)
*/

#include <iostream>
#include <cstring> // For strcpy and strcat

using namespace std;

class String {
    char data[100];

public:
    void display();
    void read();

    // Friend function declarations
    friend int operator==(const String& s1, const String& s2);
    friend String operator+(const String& s1, const String& s2);
};

void String::display() {
    cout << data << endl;
}

void String::read() {
    cin >> data;
}

// Friend function for comparison
int operator==(const String& s1, const String& s2) {
    int i = 0;
    while (s1.data[i] != '\0' || s2.data[i] != '\0') {
        if (s1.data[i] != s2.data[i]) {
            return 0; // Not equal
        }
        i++;
    }
    return 1; // Equal
}

// Friend function for concatenation
String operator+(const String& s1, const String& s2) {
    String temp;
    // Copy first string
    int i = 0;
    while (s1.data[i] != '\0') {
        temp.data[i] = s1.data[i];
        i++;
    }

    // Append second string
    int j = 0;
    while (s2.data[j] != '\0') {
        temp.data[i++] = s2.data[j++];
    }
    temp.data[i] = '\0'; // Null-terminate the result

    return temp;
}

int main() {
    String s1, s2, s3;

    cout << "Enter 1st string: ";
    s1.read();
    cout << "Enter 2nd string: ";
    s2.read();

    if (s1 == s2) {
        cout << "Equal strings" << endl;
    } else {
        cout << "Unequal strings" << endl;
    }

    s3 = s1 + s2;
    cout << "Concatenated: ";
    s3.display();

    return 0;
}
