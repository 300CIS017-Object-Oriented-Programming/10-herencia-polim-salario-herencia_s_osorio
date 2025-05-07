//
// Created by Santi on 5/6/2025.
//

#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include <string>
#include <vector>
#include "Empleado.h"
#include "Junior.h"
#include "Senior.h"
#include "LiderTecnico.h"
#include "Tester.h"
using namespace std;

class Sistema {
private:
    vector<Empleado*> empleados;

public:
    Sistema();
    void inicializarDatos();
    void procesarNomina();
    void imprimirEmpleados();
    ~Sistema();
};

#endif //SISTEMA_H
