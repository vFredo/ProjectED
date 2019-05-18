#include "ValorOz.h"
#include <string>

#ifndef __NO_LIGADO_H
#define __NO_LIGADO_H

using namespace std;

class VariableNoLigada: public ValorOz{
    private:
        string valor;
    public:
        /* Constructor */
        VariableNoLigada();

        /* Metodos de obtencion */
        char tipo();
        string obtenerCadenaValor();
};

#endif
