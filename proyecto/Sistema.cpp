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
    empleados.push_back(new Junior("Santiago", 1500));
    empleados.push_back(new Junior("Luis", 1500));
    empleados.push_back(new Senior("Jorge", 2000));
    empleados.push_back(new Senior("Carlos", 2000));
    empleados.push_back(new LiderTecnico("Luisa", 1200));
    empleados.push_back(new LiderTecnico("Collazos", 1200));
    empleados.push_back(new Tester("Guevara", 2000));
    empleados.push_back(new Tester("Sofia", 2000));
}

void Sistema::procesarNomina() {
  double total = 0;
    for (Empleado* empleado : empleados) {
      total += empleado->calcularSalario();
    }
    cout << "El pago total de la nomina es de" << total << endl;}

void Sistema::imprimirPagoEmpleados() {
  for (Empleado* empleado : empleados) {
    cout << empleado->calcularSalario() << endl;
  }
}
Sistema::~Sistema() {
    for (Empleado* empleado : empleados) {
        delete empleado;
    }
}