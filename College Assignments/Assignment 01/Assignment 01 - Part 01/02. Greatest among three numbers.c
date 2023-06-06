#include<stdio.h>
int main()
{
float a, b, c;
printf("Enter three numbers one by one: \n");
scanf("%f%f%f", &a, &b, &c);
if (a>b && a>c) {
printf("%f is the greatest.", a);
}
else if (b>c) {
printf("%f is the greatest.", b);
}
else {
printf("%f is the greatest.", c);
}
return 0;
}