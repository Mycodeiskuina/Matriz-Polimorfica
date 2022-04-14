//
// Created by rudri on 3/23/2022.
//

#ifndef PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_MATRIX_H
#define PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_MATRIX_H

#include <iostream>
#include "number.h"
using namespace std;

namespace utec{

    typedef int SIZE_TYPE;
    typedef number_t* TYPE;


    class matrix_t {
        SIZE_TYPE nrow = 0;
        SIZE_TYPE ncol = 0;
        TYPE** data = nullptr;
        friend ostream& operator<<(ostream& os, const matrix_t& m);
        void _destroy();
    public:
        // un constructor por parametro
        matrix_t(SIZE_TYPE nrow,SIZE_TYPE ncol);

        matrix_t(const matrix_t& another);

        matrix_t& operator=(const matrix_t& another);
        // metodos get
        SIZE_TYPE row_size() const;
        SIZE_TYPE col_size() const;

        // SET
        TYPE& operator()(SIZE_TYPE pos_row, SIZE_TYPE pos_col);
        // GET
        TYPE operator()(SIZE_TYPE pos_row, SIZE_TYPE pos_col) const;

        ~matrix_t();
    };

    ostream& operator<<(ostream& os, const matrix_t& m);

}

#endif //PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_MATRIX_H
