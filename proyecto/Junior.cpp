//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Junior.h"
using namespace std;

Junior::Junior() {
    salarioBase = 10000;
    salario = valorAPagar();
}

Junior::Junior(string &nombreEmpleado) {
    nombre = nombreEmpleado;
    salarioBase = 10000;
}

double Junior::calcularSalario() {
    double salario = salarioBase;
    return salario;
}

double Junior::getSalario() {
    return salario;
}
