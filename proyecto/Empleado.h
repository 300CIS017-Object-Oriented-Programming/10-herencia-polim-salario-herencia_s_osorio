//
// Created by Santi on 5/6/2025.
//

#ifndef JUNIOR_H
#define JUNIOR_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Empleado{
protected:
    double salarioBase;
    string nombre;
public:
Empleado();
Empleado(int salario, string nombre);
virtual double calcularSalario();
virtual void getInfo();
virtual ~Empleado() {}

#endif //JUNIOR_H
