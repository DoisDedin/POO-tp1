#ifndef SERVICOS_HPP
#define SERVICOS_HPP

#include <iostream>
#include <string>

using namespace std;

class Servicos{
    private:
        string consulta;
        string banhoTosa;
    public:
        void setConsulta(string consulta);
        void setBanhoTosa(string banhoTosa);

        string getConsulta() const;
        string getBanhoTosa() const;
};
#endif