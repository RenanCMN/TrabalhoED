/* Para teste nao Rodar Tudo Jundo pois vai dar Merda */


/* 1  -a) Fila Estática (append e rear)  */
/*
#include <iostream>
#include<stdlib.h>

using namespace std;

int Fila[5];
int maxi = 0;
int min = 5;


int front (){
	return Fila[0];
}
void append(int list){
	Fila[maxi++]=list;
}

int Rear () { //Exibi o último elemento sem removê-lo da estrutura
    return Fila[maxi-1];
}

int  main (){
   int list = 4;
   append(list);
   list= 6;
   append(list);
   list = 5;
   append(list);
   list = 3;
   append(list);
   
   //cout << Rear() << endl;
   cout << front() << endl;
}

*/
/* 1- b) Pilha Estática (push e pop) */

/*#include <iostream>

using namespace std;

int vetorPilha[5];
int maximo = 5;
int posicao = 0;

void push (int pilha) {
   if (posicao == maximo)
   cout << "A pilha esta cheia" << endl;
else 
vetorPilha[posicao++]=pilha;
} 

int pop (){
    return vetorPilha[--posicao];
}

int main () { 
    push (5);
    push (4);
    push (3);
	push (8);
    push (2);
    cout << pop() << endl;
}
*/



/*
2) Implemente uma função que retorne o primeiro e outra função que retorne o último elemento de uma Fila Dinâmica, sem remover os mesmos da estrutura


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

const int DefMax = 20;
int Max = 0;

typedef struct cel {
	int info;
	struct cel *prox;
} Lista;

Lista* CriaLista() {
	return NULL;
};

void TrataMsg(std::string msg){
	std::cout << msg << std::endl;
}

bool ListaCheia () {
	if (Max == DefMax) {
		return true;
	}
	else return false;
}
bool ListaVazia () {
	if (Max == 0) {
		return true;
	}
	else return false;
}
	
Lista* InsereInicioLista (Lista* L, int elemento) {
	if (ListaCheia()){
		TrataMsg("A lista está cheia! Não será possível inserir o elemento");
	}
	else {
		Lista* novo = (Lista*) malloc(sizeof(Lista));
		novo->info = elemento;
		novo->prox = L;
		L = novo;
		Max++;
	}
	return L;
}

void FilaUltimo(Lista* p){
	if(p != NULL)
		printf("O primeiro elemento da Fila e: %d.\n", p->info);
	else
		printf("Fila Vazia!\n");
}

void FilaPrimeiro(Lista* F){
	Lista* p;
	if(p != NULL)
		for(p=F; p!=NULL; p= p->prox){
			if(p->prox == NULL)
				printf("O Ultimo elemento da Fila e: %d.\n", p->info);
	}else
		printf("Fila Vazia!\n");

};

void ShowLista (Lista* L){
	Lista* p;
	for(p=L; p!=NULL; p= p->prox){
	printf("Elemento :  %d\n", p->info);
	}
	printf("\n");
};

int main(int argc, const char * argv[]) {
	Max = 0;
	Lista* L = CriaLista();
	FilaPrimeiro(L);
	L = InsereInicioLista(L,4);
	L = InsereInicioLista(L,3);
	L = InsereInicioLista(L,2);
	FilaPrimeiro(L);
	FilaUltimo(L);
	ShowLista(L);
	return 0;
}

*/


/*  

3) Dentre todos os algoritmos de ordenação estudados, defina qual é o mais rápido e qual
o mais lento. Justifique sua resposta


BUBBLE SORT , e o mais lento por conta  de ser feito para percorrer todos  elementos de uma determinda lista, ou seja, se tiver 100 elementos ele ira percorrer 
os 100 elementos, ou seja n vezes ao quadrado.

QUICK SORT , e o mais rapido por conta que  vem percorrendo de duas extremidades , e comparando menor e mais e dividindo por 2 ,
isso faz com que sua performase seja bastante rapida e ultiu , nesses caso o Quicksort determina dois pivo(como e chamado) e assim vai fazendo a
ordenaçao ,logo apos  ele vai dividindo os poblemas em partes, e depois finaliza cquando dois pivos se cruzam podendo assim um ser maior ou menor ao outro(depende 
do que o ususario esta ultilizando a ordenaçao)

*/



/*4) Implemente uma função BubleSort para uma lista dinâmica.*/


/*

#include <stdio.h>
#include <stdlib.h>

struct cel {
	int info;
	struct cel *prox;
};

typedef struct cel Lista;

Lista* CriaLista (void){
	return NULL;
}

Lista* Insert (Lista* L, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = L;
	return novo; 
};

void imprimeLista (Lista* L){
	Lista* p;
	for(p=L; p!=NULL; p= p->prox){
	printf("Numero =  %d\n", p->info);
	}
	printf("\n");
};

void Ordena (Lista* L){
	Lista* p;
	Lista* x;
	Lista* j;
	for(j=L; j!= NULL; j =j->prox){ 
		for(p=L; p!= NULL; p =p->prox){
			if(p->prox != NULL)
				if(p->info > p->prox->info){
					x->info = p->info;
					p->info = p->prox->info;
					p->prox->info = x->info;
				}
		
		}
	}
};

int main(){
	
	Lista* Lista = CriaLista();
	Lista = Insert(Lista, 3);
	Lista = Insert(Lista, 4);
	Lista = Insert(Lista, 5);
	Lista = Insert(Lista, 6);
	imprimeLista(Lista);
	Ordena(Lista);
	imprimeLista(Lista);
	
	return 0;	
}

*/


/*

5) Dado o seguinte trecho de código, identi?que um possível erro:?



O erro se encontra na função FilaCheia(), onde é feita a seguinte verificação "if(Max == DefMax+1) return true;".
Sendo que DefMax define o tamanho total de posições dentro da fila e Max a quantidade de posições já preenchidas e é iniciado com zero,
a verificação está incorreta, por exemplo, Max inicia no zero e DefMax possui 5 alocações, a função FilaCheia() só irá retornar verdadeiro 
quando MAX estiver na sexta posição. A validação correta que deveria ser feita neste caso é  "if(Max == DefMax-1) return true;". 
Feita esta alteração a função irá retornar verdadeiro quando MAX estiver na quinta alocação(pois o mesmo é inicializado com zero). 


*/

