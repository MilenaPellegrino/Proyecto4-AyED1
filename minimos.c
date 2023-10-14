#include <stdio.h>
#include<assert.h>
#define MIN(a,b) (a<b) ? (a) : (b);

int main(){
    int x = 3, y = 4;
    assert(x != y);
    int minimo = MIN(x, y);
    printf("El minimo entre %d y %d es: %d\n",x,y,minimo);
    //(x == 4) ? printf("%d\n ", x) : printf("%d\n", y);
    return 0;
}