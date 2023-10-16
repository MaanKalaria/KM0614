#include<stdio.h>
void main(){
    int r,g,b,fmax;
    float w,c,m,y,bl;
    printf("Enter the values of R, G and B: ");
    scanf("%d %d %d", &r, &g, &b);
    w = fmax(r/255.0, fmax(g/255.0, b/255.0));
    (w - r/255.0)/w;
    m = (w - g/255.0)/w;
    y = (w - b/255.0)/w;
    bl = 1.0 - w;
    printf("Cyan: %f\nMagenta: %f\nYellow: %f\nBlack: %f\n",c,m,y,bl);
}
