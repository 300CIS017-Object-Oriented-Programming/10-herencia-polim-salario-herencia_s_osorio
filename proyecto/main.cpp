//
// Created by Santi on 5/6/2025.
//
#include "Sistema.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<Empleado*> empleados;
    inicializarDatos(empleados);
    procesarNomina(empleados);
    liberarMemoria(empleados);
    return 0;
}