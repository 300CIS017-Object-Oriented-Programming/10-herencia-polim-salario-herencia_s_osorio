//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Empleado.h"
#include "Tester.h"
using namespace std;


Tester::Tester() {
    salarioBase = 10000;
    salario = calcularSalario();
}

Tester::Tester(string &nombreEmpleado) {
    nombre = nombreEmpleado;
    salarioBase = 10000;
    salario = calcularSalario();
}


double Tester::calcularSalario() {
    double totalExtra = salarioBase*bono;
    salario = salarioBase + totalExtra;
    return salario;
}


double Tester::getSalario() {
    return salario;
}
