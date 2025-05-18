/************************************* 
** This is an assignment for struct and function.
** Your goal is to implement the provided function prototype
** so that they can serve as working functions.
** 
** The assignment is designed with the goal of
** enriching your knowledge and skills 
** on 'function' and 'struct'
**
** Good luck!
** 
** Dr. Ahmad Nasikun (ahmad.nasikun@ugm.ac.id)
*/

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
void addMatrix(Matrix A, Matrix B, Matrix& C);
void multiplyMatrixVector(Matrix A, Vector v, Vector& w);



int main (int arg, char** args)
{
    // print your data
    printStudentData();

    // Define the vector and matrices
    Vector v = {VECTOR_SIZE, {4,-1,2}};
    Matrix A = {VECTOR_SIZE, VECTOR_SIZE, {{1,2,3},{4,5,6},{7,7,7}}};
    Matrix B = {VECTOR_SIZE, VECTOR_SIZE, {{1,1,1},{2,3,4},{5,6,7}}};
    // Placeholder for the result
    Vector w;
    Matrix C;

    // Test your results
    std::cout << "The vector v has the follwing member: " << std::endl;
    printData(v);
    std::cout << "The Matrix A has the following elements: " << std::endl;
    printData(A);
    std::cout << "\n, while the Matrix B has the following elements: " << std::endl;
    printData(B);

    std::cout << "The result of adding matrix A and matrix B is: " << std::endl;
    addMatrix(A,B,C);
    printData(C);

    std::cout << "\nThe multiplication of matrix A with vector b produces the following vector c\n";
    multiplyMatrixVector(A,v,w);
    printData(w);

    return 1;
}



// Definition of functions

// [TASK 1]
// Your task is to implement this function such that it prints YOUR student data
// minimum info to print: (a) full name, (b) your full NIM/student ID number, (c) high-school name
void printStudentData(){

}

// [TASK 2]
// You are asked to print the e entries of the vector
// as this is a 'column' vector, please write them vertically (3 different lines)
void printData(Vector vector)
{

}

// [TASK 3]
// In this part, you need to print the entries of a matrix (NOT its transpose),
// Please ensure that matrix[0] forms a single column
void printData(Matrix matrix)
{

}

// [TASK 4]
// Your task is to add two matrices (A and B) to make a new one (C).
// matematically it means A+B = C
// It is currently designed so that 
whatever modification is performed to matrix C is reflected to the input matrix C
// void addMatrix(Matrix A, Matrix B, Matrix& C)
// {

// }

// [TASK 5]
// You need to implement a matrix-vector multiplication
// w = A x v
void multiplyMatrixVector(Matrix A, Vector v, Vector& w)
{

}