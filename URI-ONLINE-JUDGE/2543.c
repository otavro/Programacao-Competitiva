#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    long int id,  vid = 0, cod, jog, public;

    while(scanf("%ld %ld", &public, &id) != EOF){
        vid = 0;
        while(public--){
            scanf("%ld %ld", &cod, &jog);
            if(cod == id && jog == 0){
                vid++;
            }
        }
        printf("%ld\n", vid);

    }


    return 0;
}