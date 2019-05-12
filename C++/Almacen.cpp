#include <Almacen.h>

Almacen::Almacen(){}

Almacen::Almacen(list<Variable> variables){
    this->variables = variables;
}

string Almacen::imprimirAlmacen(){
    string cadena;
    list<Variable>:: iterator it;

    for(it = variables.begin(); it != variables.end(); it++)
        cadena += *it->obtenerCadenaValor() + "\n";

    return cadena;
}

ValorOz Almacen::consultarVariable(string nombre){
    list<Variable>:: iterator it;
    for(it = variables.begin(); it != variables.end(); it++)
        ValorOz* temp = it->obtenerValor();
        if(temp->obtenerNombre() == nombre)
            return temp;
    return NULL;
}

bool Almacen::consultarLigadura(string nombre){
    ValorOz* variable = consultarVariable(nombre);
    return variable->obtenerValor() != NULL
}

void  Almacen::modificarVariable(string nombre, ValorOz oz){
    ValorOz* variable = consultarVariable(nombre);
    variable->modificarValor(&oz);
}

void Almacen::agregarVariable(string nombre){
    Variable variable = Variable(nombre, NULL);
    this->variables.push_back(variable);
}

list<Variable> obtenerListaVariables(){
    return this->variables;
}

/* TODO: 2019-05-12 Metodo de Unificacion */
bool Almacen::unificarVariables(ValorOz valor1, ValorOz valor2){
    bool unificado = false;

}