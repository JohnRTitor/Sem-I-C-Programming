#include<stdio.h>
// Greatest among three numbers

int main()
{
    float n1, n2, n3, max;
    
    printf("Enter three numbers one by one to check which one is the larger: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    max = n1>n2 ? (n1>n3 ? n1 : n3) : (n2>n3 ? n2 : n3) ;
    printf("%f is the largest of them.", max);
    
    return 0;
}