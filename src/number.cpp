//
// Created by rudri on 3/23/2022.
//

#include "number.h"

integer_t::integer_t(int valor) {
    this->valor=valor;
}

void integer_t::mostrar(ostream &os) {
    cout<<valor;
}

real_t::real_t(double valor) {
    this->valor=valor;
}

void real_t::mostrar(ostream &os) {
    cout<<valor;
}

complex_t::complex_t(double valor_real, double valor_imaginario) {
    this->valor_real=valor_real;
    this->valor_imaginario=valor_imaginario;
}

void complex_t::mostrar(ostream &os) {
    cout<<valor_real<<"+"<<valor_imaginario<<"i";
}
