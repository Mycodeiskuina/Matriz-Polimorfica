//
// Created by rudri on 3/23/2022.
//

#include "matrix.h"
#include "number.h"
#include <iomanip>

utec::matrix_t::matrix_t(utec::SIZE_TYPE nrow, utec::SIZE_TYPE ncol): nrow(nrow),ncol(ncol) {
    // reservar espacio para la matrix
    data = new TYPE*[nrow];
    for(int i=0; i<nrow; i++){
        data[i] = new TYPE[ncol]();
    }
}

utec::SIZE_TYPE utec::matrix_t::row_size() const { return nrow;}

utec::SIZE_TYPE utec::matrix_t::col_size() const { return ncol;}

utec::TYPE &utec::matrix_t::operator()(utec::SIZE_TYPE pos_row, utec::SIZE_TYPE pos_col) {
    return data[pos_row][pos_col];
}

utec::TYPE utec::matrix_t::operator()(utec::SIZE_TYPE pos_row, utec::SIZE_TYPE pos_col) const {
    return data[pos_row][pos_col];
}

utec::matrix_t &utec::matrix_t::operator=(const utec::matrix_t & another){
    _destroy();
    return *this;
}

ostream& utec::operator<<(ostream& os, const utec::matrix_t& m) {
    for(int i=0; i < m.nrow;i++){
        for(int j=0;j< m.ncol;j++){
            os << setw(4);
            m(i,j) -> mostrar(os);
        }
        cout<< endl;
    }
    return os;
}

void utec::matrix_t::_destroy() {
    for(int i=0; i< nrow;i++){
        delete [] data[i];
    }
    delete [] data;
    data = nullptr;
}

utec::matrix_t::~matrix_t() {
    _destroy();
}

utec::matrix_t::matrix_t(const utec::matrix_t &another) {
    nrow = another.nrow;
    ncol = another.ncol;
    data = new number_t**[nrow];

    for(int i=0;i<nrow;i++){
        data[i] = new number_t*[ncol];
        for(int j=0;j<ncol;j++){
            data[i][j] = another.data[i][j];
        }
    }
}
