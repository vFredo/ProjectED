#include <Register.h>

Register::Register(string name, string etiqueta, list<ValorOz> field,
        list<string> fieldName){
    this->name = name;
    this->etiqueta = etiqueta;
    this->field = field;
    this->fieldName = fieldName;
}

string Register::obtenerCadenaValor(){
    string cadena = etiqueta + "(";
    list<string>::iterator it1;
    list<ValorOz>::iterator it2;
    for(it1 = fieldName.begin(), it2 = field.begin(); it1 != field.end();
            it1++,it2++){
        cadena += " " + it1* + ":" + it2*->obtenerCadenaValor();
    }
    cadena += ")";
    return cadena;
}

string Register::obtenerEtiqueta(){
    return this->etiqueta;
}

list<string> Register::obtenerCampos(){
    return this->field;
}

string Register::gerName(){
    return this->name;
}

void setName(string name){
    this->name = name;
}