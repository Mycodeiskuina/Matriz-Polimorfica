#include <iostream>
#include <random>
#include "matrix.h"
#include "number.h"
using namespace std;


int main() {
    random_device rd;
    uniform_int_distribution<int> dis(0,99);

    utec::matrix_t m1(4, 5);
    for (int i = 0; i < m1.row_size(); ++i) {
        for (int j = 0; j < m1.col_size(); ++j) {
            m1(i, j) = new integer_t(dis(rd));
            cout<<m1(i, j)<<" ";
        }
    }
    cout << m1;
    utec::matrix_t m2 = m1;

    for (int i = 0; i < m2.row_size(); ++i) {
        for (int j = 0; j < m2.col_size(); ++j) {
            m2(i, j) = new real_t(dis(rd));
            cout<<m2(i, j)<<" ";
        }
    }
    cout << m1;
    cout << m2;
    return 0;
}
