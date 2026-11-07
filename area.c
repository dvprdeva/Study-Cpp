#include<stdio.h>
int main()
{
    float length,width,area;
    printf("enter length and width\n");
    scanf("%f%f", &length,&width);
    area=length*width;
    printf("area=%.2f\n",area);
    return 0;
}