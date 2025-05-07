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


Tester::Tester(string &nombre, double salarioBase) : nombre(nombre), salarioBase(salarioBase) {}


double Tester::calcularSalario() {
    double totalExtra = salarioBase* 1.05;
    salario = salarioBase + totalExtra;
    return salario;
}