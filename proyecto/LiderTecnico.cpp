//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "LiderTecnico.h"
using namespace std;

LiderTecnico::LiderTecnico() {
    salarioBase = 10000;
    salario = valorAPagar();
}

LiderTecnico::LiderTecnico(string &nombreEmpleado, string &id) {
    nombre = nombreEmpleado;
    salarioBase = 10000;
    salario = valorAPagar();
}


double LiderTecnico::calcularSalario() {
    double salario = salarioBase*1.25;
    return salario;
}

double LiderTecnico::getSalario() {
    return salario;
}


