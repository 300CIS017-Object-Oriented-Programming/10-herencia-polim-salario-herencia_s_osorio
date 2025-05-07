//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Junior.h"
using namespace std;


Junior::Junior(const string& nombre, double salario) : Empleado(nombre, salario) {}

double Junior::calcularSalario() const{
    double salario = salarioBase * 1;
    return salario;
}


