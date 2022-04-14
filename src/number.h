//
// Created by rudri on 3/23/2022.
//

#ifndef PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_NUMBER_H
#define PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_NUMBER_H

#include <iostream>
using namespace std;

class number_t {
public:
     virtual void mostrar(ostream& os) = 0;
};

class integer_t: public number_t{
private:
    int valor;
public:
    integer_t(int valor);
    void mostrar(ostream& os) override;
};

class real_t: public number_t{
private:
    double valor;
public:
    real_t(double valor);
    void mostrar(ostream& os) override;

};

class complex_t: public number_t{
    double valor_real;
    double valor_imaginario;
public:
    complex_t(double valor_real,double valor_imaginario);
    void mostrar(ostream& os) override;
};

#endif //PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_NUMBER_H
