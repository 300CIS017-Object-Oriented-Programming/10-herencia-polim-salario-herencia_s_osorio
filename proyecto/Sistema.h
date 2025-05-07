//
// Created by Santi on 5/6/2025.
//

#ifndef SISTEMA_H
#define SISTEMA_H
#include "Empleado.h"
#include "Junior.h"
#include "Senior.h"
#include "LiderTecnico.h"
#include "Tester.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Sistema {
private:
    vector<Empleado*>& empleados;
public:
    sistema();
    void inicializarDatos(vector<Empleado*>& empleados);
    void procesarNomina(vector<Empleado*>& empleados);
    void imprimirEmpleados();
#endif //SISTEMA_H
