#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cin >> m >> n;

   
    int** A = new int*[m];
    for(int i = 0; i < m; ++i)
        A[i] = new int[n];

    
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin >> A[i][j];

    cin >> p >> q;

    
    if(n != p) {
        cout << "Multiplication not possible.";
        return 0;
    }

    
    int** B = new int*[p];
    for(int i = 0; i < p; ++i)
        B[i] = new int[q];

    for(int i = 0; i < p; ++i)
        for(int j = 0; j < q; ++j)
            cin >> B[i][j];

    int** C = new int*[m];
    for(int i = 0; i < m; ++i)
        C[i] = new int[q];

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < q; ++j)
            C[i][j] = 0;

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < q; ++j)
            for(int k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < q; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }

    for(int i = 0; i < m; ++i)
        delete[] A[i];
    delete[] A;

    for(int i = 0; i < p; ++i)
        delete[] B[i];
    delete[] B;

    for(int i = 0; i < m; ++i)
        delete[] C[i];
    delete[] C;

    return 0;
}
