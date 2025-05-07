//
// Created by Santi on 5/6/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Empleado.h"
using namespace std;


Empleado::Empleado(){

}

void Empleado::getInfo() {
    cout << "Nombre: " << nombre << "\nSalario: " << salarioBase << " USD" << endl;
}

string Empleado::getNombre() {
    return nombre;
}

double Empleado::getSalario(){
  return salarioBase;
}

double Empleado::calcularSalario() {}


