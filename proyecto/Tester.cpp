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


Tester::Tester(const string &nombre, double salarioBase) : Empleado(nombre, salarioBase) {}

double Tester::calcularSalario() const{
    double salario = salarioBase * 1.05;
    return salario;
}