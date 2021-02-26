#ifndef _LISTA_
#define _LISTA_
#define MAX 50

//Padronizando os nomes
typedef struct TipoItem Item;
typedef struct TipoLista Lista;

//Conteudo de cada posição da lista 
struct TipoItem{
	int dado;
};

//vetor de tamanho Max e dois ponteiros, Ultimo elemento e Primeiro elemento
struct TipoLista{
	Item List[MAX];
	int Primeiro;
	int Ultimo;
};

//Criando uma lista vazia
void FLVazia(Lista *L){
	//Adiciona 0 ao primeiro ponteiro e igual o Ultimo a ele, fazendo assim uma lista vazia
	L->Primeiro=0;
	L->Ultimo = L->Primeiro;
};

//Insere algum dado à lista
void Insere(Item dado, Lista *L){
	if(L->Ultimo >= MAX)
		printf("Lista cheia!!\n");
	else{
		L->List[L->Ultimo]= dado;
		L->Ultimo++;
		printf("\nItem inserido com sucesso!\n");
	}
};

//retira algum dado da lista 
void Retira(int posicao, Lista *L){
	//Compara a posicao recebida para a exclusão, se pode ou não ser feita
	if((L->Primeiro == L->Ultimo)||(posicao > L->Ultimo|| (posicao< L-> Primeiro))){
		printf("[Erro]: Posicao nao existe!\n");
		return;
	}

	L->Ultimo--;
	for(int aux = posicao; aux < L->Ultimo; aux++)
		L->List[aux]=L ->List[aux+1];
	printf("Posicao %d excluida com sucesso!\n",posicao+1 );
}

//Imprime todos os itens da Lista
void ImprimirLista(Lista *L){
	for(int i = L->Primeiro; i < L->Ultimo; i++)
		printf("[%d]%d\n",(i+1),L->List[i].dado);
}
#endif