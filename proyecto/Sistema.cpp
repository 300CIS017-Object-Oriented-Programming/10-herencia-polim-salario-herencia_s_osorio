//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <vector>
#include <string>
#include "Empleado.h"
#include "Sistema.h"
#include "Junior.h"
#include "Senior.h"
#include "LiderTecnico.h"
#include "Tester.h"
using namespace std;

Sistema::Sistema() {
}

void Sistema::inicializarDatos() {
    empleados.push_back(new Junior("Santiago"));
    empleados.push_back(new Junior("Luis"));
    empleados.push_back(new Senior("Jorge"));
    empleados.push_back(new Senior("Carlos"));
    empleados.push_back(new LiderTecnico("Luisa"));
    empleados.push_back(new LiderTecnico("Collazos"));
    empleados.push_back(new Tester("Guevara"));
    empleados.push_back(new Tester("Sofia"));
}

void Sistema::procesarNomina() {
    for (empleado* empleado : empleados) {
      total += empleado->calcularSalario();
    }
    cout << "El pago total de la nomina es de" << total << endl;}

void Sistema::imprimirPagoEmpleados() {
  for (empleado* empleado : empleados) {
    cout << empleado->calcularSalario() << endl;
  }
}