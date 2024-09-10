#include <stdio.h>
#include <math.h>

int main() {
  
  double num;

    printf("Digite o número: ");
    scanf("%lf", &num);

    if (num > 20 && num < 80) {
       printf ("O número digitado esta entre 20 e 80\n"); 
    } else {
        printf ("O número digitado não está entre 20 e 80\n");
    }

    return 0;
}
