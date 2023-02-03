#include <stdio.h>
#include <stdlib.h>
 
int main() {
int zarat,zarat2;
int zar,zar2;
 
printf("Zar atmak icin 0'a basin: ");
scanf("%d",&zarat);
 
srand(time(NULL)); 
 
if(zarat==0){
 zar=1+rand()%6;
    printf("%d",zar);
}
 
else
return 0;
 
 
printf("\n2.Zari atmak icin 0'e basin: ");
scanf("%d",&zarat2);
 
if(zarat2==0){
 zar2=1+rand()%6;
    printf("%d",zar2);
}
 
else
    return 0;
     
     
if(zar==zar2){
    printf("\nOyunu kazandiniz!!!");
}
return 0;
}

