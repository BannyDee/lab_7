#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int bubbleCount(int index, int given[],int size){
int final, i, j, temp;
int array[size];
for(int j=0; j < size;j++){
        array[j] = given[j];
}
int values[9]={0,0,0,0,0,0,0,0,0};
final = 0;
for(i=0; i < (size-1);i++){
    for(j=0;j<(size-i-1);j++){
        if(array[j] > array[j+1]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            values[i]++;
        }
    }
}
final = values[index];
return final;
}

int main(){
    int array[9]= {97,16,45,63,13,22,7,58,72};
    for(int i;i < 9; i++){
        printf("index %d : %d",i, bubbleCount(i, array, 9));
        printf("\n");
    }
}