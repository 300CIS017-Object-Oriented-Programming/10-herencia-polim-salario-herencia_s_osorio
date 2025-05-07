//
// Created by Santi on 5/6/2025.
//

#ifndef SENIOR_H
#define SENIOR_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Empleado.h"
using namespace std;



class Senior : public Empleado{
    private:
        double salario;
    public:
        Senior();
        Senior(double salario);
        double calcularSalario() override;
        double getSalario() override;
};



#endif //SENIOR_H
