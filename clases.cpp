//
// Created by User on 25/3/2022.
//

#include "clases.h"

namespace utec{
    A::A() {
        ptr_valor = new int();
        cout << "default\n";
    }

    A::A(int valor){
        ptr_valor = new int(); // reservar espacio
        *ptr_valor = valor;
        cout << "por parametros\n";
    }

    A::A(const A &another) {
        //ptr_valor = new int(*another.ptr_valor);
        ptr_valor = new int(); // reserva espacio
        *ptr_valor = *(another.ptr_valor); // copia valor
        cout << "copia\n";
    }

    A& A::operator=(const A& another) {
        delete ptr_valor; // liberar memoria
        ptr_valor = new int(); // reserva espacio
        *ptr_valor = *(another.ptr_valor); // copia valor

        cout << "asignacion-copia\n";
        return *this;
    }

    A::A(A&& another) {
        ptr_valor = another.ptr_valor;
        another.ptr_valor = nullptr;
        cout << "move\n";
    }

    A& A::operator=(A&& another) {
        delete ptr_valor;
        ptr_valor = another.ptr_valor;
        cout << "asignacion-move\n";
        return *this;
    }

    A::~A() {
        delete ptr_valor;
    }

    int A::get_value() {
        return *ptr_valor;
    }
}