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
        double salario;
    public:
        LiderTecnico();
        LiderTecnico(double salario);
        double calcularSalario() override;
        double getSalario() override;

};



#endif //LIDERTECNICO_H
