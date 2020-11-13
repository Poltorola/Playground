#include <iostream>

using namespace std;

int ** create_matrix(unsigned rows, unsigned cols){
    int ** m = new int*[rows];
    for (unsigned i = 0; i < rows; i++){
         m[i] = new int[cols];
    }
    return m;
}

void delete_matrix(int ** m, unsigned rows){
    for (unsigned i = 0; i < rows; i++){
        delete[] m[i];
    }
    delete[] m;
}

void read_matrix(int ** m, unsigned rows, unsigned cols){
    for (unsigned i = 0; i < rows; i++){
        for (unsigned j = 0; j < cols; j++){
            cin >> m[i][j];
        }
    }
}

void print_matrix(int ** m, unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++){
            cout.width(3);
            cout << m[i][j];
        }
        cout << endl;
    }
}

int ***** array_5d(int d1, int d2, int d3, int d4, int d5){   // 5 dimensional array
    int ***** arr5d = new int****[d1];
    for (int i = 0; i < d1; i++){
        arr5d[i] = new int***[d2];
        for (int j = 0; j < d2; j++){
            arr5d[i][j] = new int**[d3];
            for (int k = 0; k < d3; k++){
                arr5d[i][j][k] = new int*[d4];
                for (int t = 0; t < d4; t++){
                    arr5d[i][j][k][t] = new int[d5];
                }
            }
        }
    }
    return arr5d;
}


int ** pyramid(unsigned prows){                     //a
    int ** pyramidka = new int*[prows];             //aaa
    for (unsigned i = 0; i < prows; i++){           //aaaaa
        pyramidka[i] = new int[2*i + 1];            //aaaaaaa

    }
    return pyramidka;
}


int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int ** tran_matrix = create_matrix(cols, rows);

    for (unsigned i = 0; i < rows; i++){
        for (unsigned j = 0; j < cols; j++){
            tran_matrix[j][i] = m[i][j];
        }
    }

    return tran_matrix;
}

int min(int ** m, unsigned rows, unsigned cols){            // index row where min element is
    int min = m[0][0];
    int rowmin = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (min > m[i][j]) {
                min = m[i][j];
                rowmin = i;
            }
        }
    }
    return rowmin;
}

void swap_min(int *m[], unsigned rows, unsigned cols)           // replaces first row and row with min
{
    int rowmin = min(m, rows, cols);
    int * ptr = m[0];

    m[0] = m[rowmin];
    m[rowmin] = ptr;
}



int main() {
    unsigned rows, cols;
    cin >> rows >> cols;

    int ** matrix = create_matrix(rows, cols);

    read_matrix(matrix, rows, cols);

    print_matrix(matrix, rows, cols);

    int ** tran_matrix = transpose(matrix, rows, cols);

    print_matrix(tran_matrix, cols, rows);

    delete_matrix(matrix, rows);

    return 0;
}
