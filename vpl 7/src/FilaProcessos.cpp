#include "FilaProcessos.hpp"
#include "Processo.hpp"
#include <iostream>
FilaProcessos::FilaProcessos() {
    this->head = nullptr; 
    this->_id = 1;        
}
void FilaProcessos::adicionar_processo(std::string nome, int prioridade){
    int id_do_processo_atual = this->_id;
    this->_id++;
    Processo* novo = new Processo(id_do_processo_atual, nome, prioridade);
    Node *ponto= new Node();
    ponto->data=novo;
    ponto->next=nullptr;
    if((head==nullptr) || (ponto->data->getPrioridade() > head->data->getPrioridade() ) ){
        ponto->next=head;
        head=ponto; 
    }
    else{
        Node *atual= head;
        // 1. Anda pela fila enquanto o próximo não for nulo E a prioridade do próximo
        // for MAIOR OU IGUAL à do novo processo (garante que os mais velhos fiquem na frente)
        while (atual->next != nullptr && atual->next->data->getPrioridade() >= ponto->data->getPrioridade()) {
            atual = atual->next; // O "dedo" só vai andando para o próximo
        }
        
        // 2. O while parou! Achamos o buraco certo. Agora sim fazemos a ligação:
        ponto->next = atual->next;
        atual->next = ponto;
    }
    }
 Processo* FilaProcessos :: remover_processo_maior_prioridade(){
    if(head==nullptr){
        return nullptr;
    }     
    Processo* processo_removido = head->data;
    head = head->next;
    return processo_removido;
 }
Processo* FilaProcessos :: remover_processo_por_id(int id){
 if(head==nullptr){
    return nullptr;
 }
 if (head->data->getID() == id) {
        return remover_processo_maior_prioridade();
    }
    Node *aux=head;
 while (aux->next != nullptr) {
        if (aux->next->data->getID() == id) {
            Node* removido = aux->next; 
            Processo* p = removido->data;
            
            aux->next = removido->next;             
            return p;
        }
        aux = aux->next; 
    }
    return nullptr; 
}
void FilaProcessos :: estimativa_tempo_para_execucao(int id){
     Node *aux = head;
     double tempo=0.0;
        while (aux != nullptr && aux->data->getID() != id) {
    tempo += aux->data->tempo_reservado_processo();
    aux = aux->next;
}
if (aux != nullptr) {
    std::cout << "Tempo estimado para execução do processo " << aux->data->getNome() << " (id=" << aux->data->getID() << ") eh " << tempo << " segundos." << std::endl;
}
}
void FilaProcessos :: imprimir_fila(){
   Node *aux = head;
    while(aux!=nullptr){
        aux->data->imprimir_dados();
        aux=aux->next;
    }
   }
