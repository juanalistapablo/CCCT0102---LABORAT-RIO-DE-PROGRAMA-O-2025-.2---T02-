#include<stdio.h>
int main() {
    int n=100,contador=0;

    for(int i=1; i<=n; i++) {
        if(i%2==0) {
            contador=contador+1;
        }
    }
     printf("%d\n", contador);
}
// 50