//
// Created by Santi on 5/6/2025.
//

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>
using namespace std;

class Empleado {
protected:
    double salarioBase;
    string nombre;
public:
    Empleado(const string& nombre, double salarioBase);
    virtual double calcularSalario() const = 0;
    virtual ~Empleado() {}
};

#endif //EMPLEADO_H
