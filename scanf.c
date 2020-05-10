#include<stdio.h>

#define MAX_LENGTH 10

int main(){
    int print_array[MAX_LENGTH]={0};
    int i=0;
    while (scanf("%d",&print_array[i]))
    {
        /* code */
        printf("%d,",print_array[i]);
        i++;
    }
    printf("\n");
    return 0;
}