//
// Created by User on 25/3/2022.
//

#ifndef PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_CLASES_H
#define PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_CLASES_H

#include <iostream>
using namespace std;

namespace  utec{
    class A {
        int* ptr_valor = nullptr;
    public:
        A(); // constructor por defecto
        A(int valor); // por parametros - convertible
        A(const A& another); // constructor copia
        A& operator=(const A& another); // operador asignacion - copia
        A(A&& another); // constructor Move
        A& operator=(A&& another); // operador asignacion - Move
        ~A();
        int get_value();
    };
}

#endif //PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_CLASES_H
