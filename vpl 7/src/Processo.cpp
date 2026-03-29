#include "Processo.hpp"
int Processo::getID(){
    return this->_id; 
}
int Processo::getPrioridade(){
    return this->_prioridade;
}
std::string Processo::getNome(){
    return this->_nome; 
    }
Processo::Processo(int id, std::string nome, int prioridade){
     this->_id=id;
     if (prioridade >= 0 && prioridade <= 2) {
        this->_prioridade= prioridade;
    } else {
        this->_prioridade= 0; 
    }
     this->_nome=nome;
}
    double Processo::tempo_reservado_processo(){
        switch (this->_prioridade)
        {
        case 0:
            return 0.5;
            break;
        case 1:
            return 1.5;
            break;
        case 2:
            return 3.0;
        default:
            return -1.0;
            break;
        }
    }
    void Processo::imprimir_dados(){
        switch (this->_prioridade){
            case 0:
             std::cout << this->_id << "\t" << this->_nome <<"\t" << "BAIXA" << std::endl; 
             break;
            case 1:
             std::cout << this->_id << "\t" << this->_nome <<"\t" << "MEDIA" << std::endl; 
             break;
            case 2:
             std::cout << this->_id << "\t" << this->_nome <<"\t" << "ALTA" << std::endl; 
             break;
        }
    }