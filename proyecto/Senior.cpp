//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include "Senior.h"
using namespace std;



Senior::Senior(const string &nombre, double salarioBase) : Empleado(nombre, salarioBase) {}

double Senior::calcularSalario() const{
    double salario = salarioBase*1.20;
    return salario;
}



