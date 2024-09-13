/*Program to find area of a rectangle*/

#include <stdio.h>

int main(){
    int length,width,product

    printf("Area of a rectangle = length*Width");

    printf("Enter the length:");
    scanf("%d",&length);

    printf("Enter the width:");
    scanf("%d",&width);

    product = length*width;

    printf("The answer is %d\n",product);

    return 0;


}
