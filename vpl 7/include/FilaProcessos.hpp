#include <iostream>
#include "Processo.hpp"
#ifndef FILAPROCESSOS_H
#define FILAPROCESSOS_H
struct Node{
    Processo* data;
    Node* next;
};
struct FilaProcessos{
    Node *head;
    Node *tail;
    int _id=1;
    FilaProcessos();
    void adicionar_processo(std::string nome, int prioridade);
    Processo* remover_processo_maior_prioridade();
    Processo* remover_processo_por_id(int id);
    void estimativa_tempo_para_execucao(int id);
    void imprimir_fila();
};
#endif 