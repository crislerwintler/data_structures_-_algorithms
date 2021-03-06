// /********* Lista sequencial Ordenada*********************/

#include <stdio.h>
#define MAX 50
#define ERRO -1
#define true 1
#define false 0

 typedef int bool;

 typedef int TIPOCHAVE;

 typedef struct {
    TIPOCHAVE chave;
    // outros campos
 } REGISTRO;

 typedef struct {
     REGISTRO A [MAX+1];
     int nroElem;
 } LISTA;

 /* Inicialização da lista sequencial( a lista ja esta criada e e apontada pelo endereco)*/
 void inicializarLista(LISTA* l){
     l->nroElem = 0;
 } /* inicializarLista */

/* Exibir lista sequencial*/

void exibirLista(LISTA* l) {
    int i;
    printf("Lista: \" ");
    for(i=0;i<l->nroElem;i++) 
        printf("%i ", l->A[i].chave);
      printf("\"\n");
} /* exibirLista */

/* Retornar o tamanho da lista (numero de elementos "validos")*/
 int tamanho(LISTA* l){
     return l->nroElem;
 } /* tamanho */

 /* Retornar o tamanho da lista em bytes da lista. Neste caso, isto nao depende do numero 
 de elementos que estao sendo usados, pois a alocacao de memoria eh estatica.
 A priori, nao precisariamos do ponteiro para a lista, vamos utiliza-lo apenas 
 porque teremos as mesmas funcoes para listas ligadas*/
  int tamanhoEmBytes(LISTA* l){
      return sizeof(LISTA);
  } /* tamanhoEmBytes */

  /* Retornar a chave do primeiro elemento da lista sequencial(caso haja) e ERRO
  caso a lista esteja vazia */
   TIPOCHAVE primeiroElem(LISTA* l) {
       if(l->nroElem > 0) return l->A[0].chave;
       else return ERRO; // lista vazia
   } /* primeiroElem */

   /* Retornar a chave do ultimo elemento da lista sequencial(caso haja) e ERRO
   e ERRO caso a lista esteja vazia */
   TIPOCHAVE ultimoElem(LISTA* l) {
       if(l->nroElem > 0) return l->A[l->nroElem-1].chave;
       else return ERRO; // lista vazia
   } /* ultimoElem */

   /* Retornar a chave do elemento que esta na posicao n da LISTA. Lembre- se que as posicoes do 
   arranjo A vao de 0 a MAX-1 */
   TIPOCHAVE enesimoElem(LISTA* l,int n) {
       if( (n >= l->nroElem) && (n <= l->nroElem)) return l->A[n].chave;
   }