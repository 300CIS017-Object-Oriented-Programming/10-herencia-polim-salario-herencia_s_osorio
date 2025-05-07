//
// Created by Santi on 5/6/2025.
//

#ifndef JUNIOR_H
#define JUNIOR_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Empleado.h"
using namespace std;

class Junior : public Empleado{
    private:
        double salario;
    public:
        Junior(const string& nombre, double salario);
        double calcularSalario() override;
};



#endif //JUNIOR_H
