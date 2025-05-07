//
// Created by Santi on 5/6/2025.
//

#ifndef SISTEMA_H
#define SISTEMA_H
#include <vector>
#include "Empleado.h"
using namespace std;

class Sistema {
private:
    vector<Empleado*> empleados;

public:
    Sistema();
    void inicializarDatos();
    void procesarNomina();
    void imprimirPagoEmpleados();
    ~Sistema();
};

#endif //SISTEMA_H
