#include <stdio.h>
#include <stdlib.h>
#define N 3

void product(int A[],int B[],int C[]);

int main(){
    system ("chcp 65001");
    int A [N], B[N], C[N], i;
    puts("Введіть координати для точок A (x;y;z): ");
    for(i=0; i<N; i+=1){
        scanf("%d", &A[i]);
    }
    puts("Введіть координати для точок B (x;y;z): ");
    for(i=0; i<N; i+=1){
        scanf("%d", &B[i]);
    }
    puts("Введіть координати для точок C (x;y;z): ");
    for(i=0; i<N; i+=1){
        scanf("%d", &C[i]);
    }

    product(A,B,C);

    return 0;
}

void product(int A[],int B[],int C[]){
    int AB = 0;
    int i;
    for(i=0; i<N; i+=1){
        AB += A[i]*B[i];
    }
    printf("Скалярний добуток AB: %d\n", AB);

    int BC = 0;
    for(i=0; i<N; i+=1){
        BC += B[i]*C[i];
    }
    printf("Скалярний добуток BC: %d\n", BC);

    int CA = 0;
    for(i=0; i<N; i+=1){
        CA += C[i]*A[i];
    }
    printf("Скалярний добуток CA: %d\n", CA);
}
