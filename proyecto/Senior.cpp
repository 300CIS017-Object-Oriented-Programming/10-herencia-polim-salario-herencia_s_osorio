//
// Created by Santi on 5/6/2025.
//
#include "Senior.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;



Senior::Senior(string & nombre, const double salarioBase) : nombre(nombre) salarioBase(salarioBase) {}


double Senior::calcularSalario() {
    double salario = salarioBase*1.20;
    return salario;
}



