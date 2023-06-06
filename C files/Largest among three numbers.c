#include<stdio.h>
// Greatest among three numbers

int main()
{
    float n1, n2, n3;
    
    printf("Enter three numbers one by one to check which one is the larger: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    if ( n1>n2 && n1>n3){
    printf("%f is the largest out of three numbers.", n1);
    }
    else if (n2>n3) {
    printf("%f is the largest out of them.", n2);
    }
    else {
    printf("%f is the largest of them.", n3);
    }
    
    return 0;
}