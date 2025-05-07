//
// Created by Santi on 5/6/2025.
//

#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Empleado.h"
using namespace std;



class LiderTecnico : public Empleado {
    private:
        double salarioBase;
    public:
        LiderTecnico(const string& nombre, double salario);
        double calcularSalario() const override;

};



#endif //LIDERTECNICO_H
