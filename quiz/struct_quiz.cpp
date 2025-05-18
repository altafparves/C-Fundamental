
#include <iostream>
#include <string>

using namespace std;
const int VECTOR_SIZE = 3;

// This is a vector, with 3 elements defined as array of double (decimal number)
struct Vector
{
    int rows = VECTOR_SIZE;
    double elements[VECTOR_SIZE];
};

// This is a matrix of 3-by-3, defined as array of arrays
// (You can think this is like an array of Vector)
// (thus, Matrix[0] is a [column] vector with 3 entries)
struct Matrix
{
    int cols = VECTOR_SIZE;
    int rows = VECTOR_SIZE;
    double elements[VECTOR_SIZE][VECTOR_SIZE];
};

// Declation of functions
void printStudentData();
void printData(Vector vector);
void printData(Matrix matrix);
void addMatrix(Matrix A, Matrix B, Matrix &C);
void multiplyMatrixVector(Matrix A, Vector v, Vector &w);

int main(int arg, char **args)
{
    // print your data
    printStudentData();

    // Define the vector and matrices
    Vector v = {VECTOR_SIZE, {4, -1, 2}};
    Matrix A = {VECTOR_SIZE, VECTOR_SIZE, {{1, 2, 3}, {4, 5, 6}, {7, 7, 7}}};
    Matrix B = {VECTOR_SIZE, VECTOR_SIZE, {{1, 1, 1}, {2, 3, 4}, {5, 6, 7}}};
    // Define the vector and matrices
    Vector w;
    Matrix C;

    // Test your results
    cout << "The vector v has the following members:" << endl;
    printData(v);
    cout << "The Matrix A has the following elements:" << endl;
    printData(A);
    cout << "The Matrix B has the following elements:" << endl;
    printData(B);

    cout << "The result of adding matrix A and matrix B is:" << endl;
    addMatrix(A, B, C);
    printData(C);

    cout << "The multiplication of matrix A with vector v produces the following vector w:" << endl;
    multiplyMatrixVector(A, v, w);
    printData(w);

    return 0;
}

// Definition of functions

// [TASK 1]
// Your task is to implement this function such that it prints YOUR student data
// minimum info to print: (a) full name, (b) your full NIM/student ID number, (c) high-school name
void printStudentData()
{
    cout << "Name: Altaf Parves Shua Ilham" << endl;
    cout << "Student ID: 24/536741/TK/59565" << endl;
    cout << "High School: Al Azhar Jogja" << endl;
}

// [TASK 2]
// You are asked to print the e entries of the vector
// as this is a 'column' vector, please write them vertically (3 different lines)
void printData(Vector vector)
{
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        cout << vector.elements[i] << endl;
    }
}

// [TASK 3]
// In this part, you need to print the entries of a matrix (NOT its transpose),
// Please ensure that matrix[0] forms a single column
void printData(Matrix matrix)
{
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        for (int j = 0; j < VECTOR_SIZE; j++)
        {
            cout << matrix.elements[i][j] << " ";
        }
        cout << endl;
    }
}

// [TASK 4]
// Your task is to add two matrices (A and B) to make a new one (C).
// matematically it means A+B = C
// It is currently designed so that
// whatever modification is performed to matrix C is reflected to the input matrix C
void addMatrix(Matrix A, Matrix B, Matrix &C)
{
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        for (int j = 0; j < VECTOR_SIZE; j++)
        {
            C.elements[i][j] = A.elements[i][j] + B.elements[i][j];
        }
    }
}

// [TASK 5]
// You need to implement a matrix-vector multiplication
// w = A x v
void multiplyMatrixVector(Matrix A, Vector v, Vector &w)
{
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        w.elements[i] = 0;
        for (int j = 0; j < VECTOR_SIZE; j++)
        {
            w.elements[i] += A.elements[i][j] * v.elements[j];
        }
    }
}

