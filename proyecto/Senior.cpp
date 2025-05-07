//
// Created by Santi on 5/6/2025.
//
#include "Senior.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


Senior::Senior() {
    salarioBase = 10000;
    salario = calcularSalario();
}

Senior::Senior(string &nombreEmpleado) {
    nombre = nombreEmpleado;
    salarioBase = 10000;
    salario = valorAPagar();
}

double Senior::calcularSalario() {
    double salario = salarioBase*1.20;
    return salario;
}

double Senior::getSalario() {
    return salario;
}



