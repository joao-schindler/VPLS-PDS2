#include <iostream>
#include <string>
#include "Processo.hpp"
#include "FilaProcessos.hpp"
#include "avaliacao_basica_controle.hpp"
using namespace std;
int main(){
  char comando;
  FilaProcessos minha_fila;
    while(cin >> comando ){
      string nome;
      int prioridade;
      int id;
      switch (comando)
      {
      case 'a':
       cin >> nome >> prioridade;
        minha_fila.adicionar_processo(nome,prioridade);
        break;
      case 'r':
        minha_fila.remover_processo_maior_prioridade();
        break;
      case 'i':
        cin >> id;
        minha_fila.remover_processo_por_id(id);
        break;
      case 'p':
        minha_fila.imprimir_fila();
        break;
      case 'e':
        cin>>id;
        minha_fila.estimativa_tempo_para_execucao(id);
        break;
      case 'b':
        avaliacao_basica();
        break;
      default:
        break;
      }
    }

}