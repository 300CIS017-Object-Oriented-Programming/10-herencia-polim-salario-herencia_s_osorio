//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "LiderTecnico.h"
using namespace std;


LiderTecnico::LiderTecnico(const string& nombre, double salarioBase) : Empleado(nombre, salarioBase) {}


double LiderTecnico::calcularSalario() const{
    double salario = salarioBase*1.25;
    return salario;
}


