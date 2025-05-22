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

        Matrix add(Matrix M2);
        Matrix sub(Matrix M2);
        Matrix mul(Matrix M2);
        void read();
        void display();
};


Matrix Matrix::add(Matrix M2){
    Matrix temp;

    // check
    if ( (rows != M2.rows) || (columns != M2.columns) ) {
        cout << "Matrix size mismatch\n";
        // return 1;
    }

    temp.rows = rows;
    temp.columns = columns;

    for (int r = 0; r < rows ; r++) {
        for (int c = 0; c < columns ; c++){
            temp.matrix[r][c] = matrix[r][c] + M2.matrix[r][c];
        }
    }

    return temp;
}

Matrix Matrix::sub(Matrix M2){
    Matrix temp;

    // check
    if ( (rows != M2.rows) || (columns != M2.columns) ) {
        cout << "Matrix size mismatch\n";
        // return 1;
    }

    temp.rows = rows;
    temp.columns = columns;

    for (int r = 0; r < rows ; r++) {
        for (int c = 0; c < columns ; c++){
            temp.matrix[r][c] = matrix[r][c] - M2.matrix[r][c];
        }
    }

    return temp;
}


Matrix Matrix::mul(Matrix M2){
    // check 
    if (columns != M2.rows) {
        cout << "Matrix multiplication not possible,\n M1.columns != M2.rows\n";
        // return 1;
    }

    Matrix temp;
    temp.rows = rows;
    temp.columns = M2.columns;

    for (int i = 0 ; i < temp.rows; i++){
        for (int j = 0 ; j < temp.columns ; j++) {

            int rc = 0;            
            for (int k = 0 ; k < columns ; k++) {
               rc += matrix[i][k]*M2.matrix[k][j];
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
    cout << "Enter rows and columns: ";
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
    sum = M1.add(M2);
    sub = M1.sub(M2);
    mul = M1.mul(M2);

    cout << "Matrix 1:-> \n" ; M1.display() ;  cout << endl;
    cout << "Matrix 2:-> \n" ; M2.display() ;  cout << endl;
    cout << "Addition :-> \n" ; sum.display() ;  cout << endl;
    cout << "Substraction :-> \n" ; sub.display() ;  cout << endl;
    cout << "Multiplicatiuon :-> \n" ; mul.display() ;  cout << endl;

}