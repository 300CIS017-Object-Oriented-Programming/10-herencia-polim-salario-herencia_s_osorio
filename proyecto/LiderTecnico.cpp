//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "LiderTecnico.h"
using namespace std;


LiderTecnico::LiderTecnico(string &nombre, double salarioBase) : nombre(nombre), salarioBase(salarioBase) {}


double LiderTecnico::calcularSalario() {
    double salario = salarioBase*1.25;
    return salario;
}


