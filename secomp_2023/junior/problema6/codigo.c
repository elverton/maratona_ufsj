#include <stdio.h>
#include <stdlib.h>
#define true 1

void invert(int* sequence,int start,int end){
    
	int aux;
	while(start < end){
    aux = sequence[start];
    sequence[start] = sequence[end];
    sequence[end] = aux;
    start++; end--;
	}

}

int main() {

	int num_genes,num_inv,i,j,start,end,num_query,query,id;
	int* sequence;
	id=1;
	while(true){
    	scanf("%d",&num_genes);
    if(num_genes == 0)
    	break;
    sequence = (int*)malloc((num_genes+1)*sizeof(int));
    for(i=0;i<=num_genes;i++){
    	sequence[i] = i;
    }
    scanf("%d",&num_inv);
    for(i=0;i<num_inv;++i){
    	scanf("%d%d",&start,&end);
    	invert(sequence,start,end);
    }
    scanf("%d",&num_query);
    printf("Genome %d\n",id);
    ++id;
    for(i=0;i<num_query;++i){
    	scanf("%d",&query);
    	for(j=0;j<=num_genes;j++){
   	 if(sequence[j] == query)
   	 	printf("%d\n",j);
    	}
    }
    free(sequence);
	}
	return 0;
}
