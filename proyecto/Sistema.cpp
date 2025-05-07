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

void Sistema::inicializarDatos(vector<Empleado*>& empleados) {
    empleados.push_back(new DesarrolladorJunior("Santiago"));
    empleados.push_back(new DesarrolladorJunior("Luis"));
    empleados.push_back(new DesarrolladorSenior("Jorge"));
    empleados.push_back(new DesarrolladorSenior("Carlos"));
    empleados.push_back(new LiderTecnico("Luisa"));
    empleados.push_back(new LiderTecnico("Collazos"));
    empleados.push_back(new Tester("Guevara"));
    empleados.push_back(new Tester("Sofia"));
}

void Sistema::procesarNomina(const std::vector<Empleado*>& empleados) {
    double total = 0;
    std::cout << "=== Procesando Nómina ===\n\n";
    for (int i = 0; i < empleados.size(); i++) {
        total += empleados[i]->calcularSalario();
    }
    std::cout << "Total a pagar: $" << total << "\n";
}
