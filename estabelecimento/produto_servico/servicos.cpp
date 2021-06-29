#include "servicos.hpp"

void Servicos::setConsulta(string consulta){
    this->consulta = consulta;
}
void Servicos::setBanhoTosa(string banhoTosa){
    this->banhoTosa = banhoTosa;
}

string Servicos::getConsulta() const{
    return consulta;
}
string Servicos::getBanhoTosa() const{
    return banhoTosa;
}