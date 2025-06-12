/*
Construct a class matrix with requiste data members write a c++ program
using appropiate member functions to add, subtract & multiply two given matrices
*/

#include <iostream>
#include <cstdio>

using namespace std;

class Matrix {
    int matrix[10][10];
    int rows, columns;

    public:
        Matrix(){};
        Matrix(int r, int c){
            rows = r;
            columns = c;
        }

        friend Matrix operator+(Matrix M1, Matrix M2);
        friend Matrix operator-(Matrix M1, Matrix M2);
        friend Matrix operator*(Matrix M1, Matrix M2);

        void read();
        void display();
};


Matrix operator+(Matrix M1, Matrix M2){
    Matrix temp;

    // check
    if ( (M1.rows != M2.rows) || (M1.columns != M2.columns) ) {
        cout << "Matrix size mismatch\n";
        // return 1;
    }

    temp.rows = M1.rows;
    temp.columns = M1.columns;

    for (int r = 0; r < M1.rows ; r++) {
        for (int c = 0; c < M1.columns ; c++){
            temp.matrix[r][c] = M1.matrix[r][c] + M2.matrix[r][c];
        }
    }

    return temp;
}

Matrix operator-(Matrix M1, Matrix M2){
    Matrix temp;

    // check
    if ( (M1.rows != M2.rows) || (M1.columns != M2.columns) ) {
        cout << "Matrix size mismatch\n";
        // return 1;
    }

    temp.rows = M1.rows;
    temp.columns = M1.columns;

    for (int r = 0; r < M1.rows ; r++) {
        for (int c = 0; c < M1.columns ; c++){
            temp.matrix[r][c] = M1.matrix[r][c] - M2.matrix[r][c];
        }
    }

    return temp;
}


Matrix operator*(Matrix M1, Matrix M2){
    // check 
    if (M1.columns != M2.rows) {
        cout << "Matrix multiplication not possible,\n M1.columns != M2.rows\n";
        // return 1;
    }

    Matrix temp;
    temp.rows = M1.rows;
    temp.columns = M2.columns;

    for (int i = 0 ; i < temp.rows; i++){
        for (int j = 0 ; j < temp.columns ; j++) {

            int rc = 0;            
            for (int k = 0 ; k < M1.columns ; k++) {
               rc += M1.matrix[i][k]*M2.matrix[k][j];
            }

            temp.matrix[i][j] = rc;

        }
    }

    return temp;

}


void Matrix::display(){
    for (int r = 0; r < rows ; r++) {
        for (int c = 0; c < columns ; c++){
            cout << matrix[r][c] << ' ';
        }

        cout << endl;
    }
}

void Matrix::read(){
    cout << "Enter no. of rows and columns: ";
    cin >> rows >> columns;
    cout << endl;

    for (int r = 0; r < rows ; r++) {
        printf("Row %d: ", r);
        for (int c = 0; c < columns ; c++){
            cin >> matrix[r][c];
        }

    }

}

int main(){

    // Matrix M1(2 , 2);
    // Matrix M2(2 , 2);
    
    Matrix M1, M2;


    cout << "Enter 1st matrix: \n"; M1.read(); cout << endl ;
    cout << "Enter 2nd matrix: \n"; M2.read(); cout << endl ;

    Matrix sum, sub, mul;
    sum = M1 + M2;
    sub = M1 - M2;
    mul = M1 * M2;

    cout << "Matrix 1:-> \n" ; M1.display() ;  cout << endl;
    cout << "Matrix 2:-> \n" ; M2.display() ;  cout << endl;
    cout << "Addition :-> \n" ; sum.display() ;  cout << endl;
    cout << "Substraction :-> \n" ; sub.display() ;  cout << endl;
    cout << "Multiplicatiuon :-> \n" ; mul.display() ;  cout << endl;

}