#include <stdio.h>

int main(){
    int x1,r1,x2,r2;
    scanf("%d %d %d %d", &x1, &r1, &x2, &r2);
    int max,min,d,p,min1,max1;
    if (x1>x2) {
        max=x1;
        min=x2;
    }
    else {
        max=x2;
        min=x1;
    }
    if (r1>r2) {
        max1=r1;
        min1=r2;
    }
    else {
        max1=r2;
        min1=r1;
    }
    d=max-min; //расстояние     
    if (d>(max1+min1))
        p=1;
    if (d==(max1+min1))
        p=2;
    if (((max1-min1)<d)&&(d<(max1+min1)))
        p=3;
    if ((0<d)&&(d<(max1-min1)))
        p=4;
    if (d==(max1-min1))
        p=5;
    switch(p){
        case 1: printf("net obshih tochek"); break;
        case 2: printf("vheshnee kasanie"); break;
        case 3: printf("peresekautsya"); break;
        case 4: printf("odna vnutri drugoi"); break;
        case 5: printf("vnutrennee kasanie"); break;
        default: printf("error");
    }
    return 0;
}