#include <stdio.h>
#include <math.h>
#define MAX 112345

int main(){
    int H, M, QT, i;
    double x[10000], media, soma, res;
    while(scanf("%d %d", &H, &M) != EOF){
        QT = H * 60 / M;
        media = 0.0;
        for(i = 0; i < QT; i++){
            scanf("%lf", &x[i]);
            media += x[i];
        }
        media /= (double)QT;
        soma = 0.0;
        for(i = 0; i < QT; i++){
            soma += pow(x[i] - media, 2.0);
        }
        res = sqrt(soma / (double)(QT - 1));
        printf("%.5lf\n", res);
    }
    return 0;
}