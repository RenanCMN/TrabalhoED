/* 1  -a) Fila Estática (append e rear) Falta rear */

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
   
   cout << Rear() << endl;
   cout << front() << endl;
}


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

3) Dentre todos os algoritmos de ordenação estudados, defina qual é o mais rápido e qual
o mais lento. Justifique sua resposta


BUBBLE SORT , e o mais lento por conta  de ser feito para percorrer todos  elementos de uma determinda lista, ou seja, se tiver 100 elementos ele ira percorrer 
os 100 elementos, ou seja n vezes ao quadrado.

QUICK SORT , e o mais rapido por conta que  vem percorrendo de duas extremidades , e comparando menor e mais e dividindo por 2 ,
isso faz com que sua performase seja bastante rapida e ultiu , nesses caso o Quicksort determina dois pivo(como e chamado) e assim vai fazendo a
ordenaçao ,logo apos  ele vai dividindo os poblemas em partes, e depois finaliza cquando dois pivos se cruzam podendo assim um ser maior ou menor ao outro(depende 
do que o ususario esta ultilizando a ordenaçao)

*/




