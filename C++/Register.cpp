#include "Register.h"

Register::Register(string etiqueta, list<ValorOz> campos, list<string> nombreCampos){
    this->etiqueta = etiqueta;
    this->campos = campos;
    this->nombreCampos = nombreCampos;
}

string Register::obtenerCadenaValor(){
    string cadena = etiqueta + "(";

    list<string>::iterator it1;
    list<ValorOz>::iterator it2;

    for(it1 = fieldName.begin(), it2 = field.begin(); it1 != field.end();
            it1++,it2++)
        cadena += " " + *it1 + ":" + *it2->obtenerCadenaValor();

    cadena += ")";
    return cadena;
}

string Register::obtenerEtiqueta(){
    return this->etiqueta;
}

list<string> Register::obtenerCampos(){
    return this->campos;
}

char Register::tipo(){
    return REGISTRO;
}
