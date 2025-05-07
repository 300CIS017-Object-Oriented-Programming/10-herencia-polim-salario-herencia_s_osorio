//
// Created by Santi on 5/6/2025.
//

#ifndef TESTER_H
#define TESTER_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Empleado.h"
using namespace std;


class Tester : public Empleado {
private:
    double salarioBase;
public:
    Tester(const string& nombre, double salario);
    double calcularSalario() const override;

};



#endif //TESTER_H
