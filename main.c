#include "sistema.h"
#include "listaEncadeada.h"
#include "aloca.h"

void* aloca(unsigned int tamanho);

int main(){
    aloca(10);
}

void* aloca(unsigned int tamanho){
    if(memory[0] == 0){
        printf("ta nulo\n");
    }

}

