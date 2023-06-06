#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, radius;
    float dist;

    printf("Use this program to find out whether a point lies inside, on, or outside a 2D circle. \nEnter the center co-ordinates of the circle:\n  Enter the value of X1: \n");
    scanf("%d", &x1);
    printf("  Enter the value of Y1: \n");
    scanf("%d", &y1);
    
    printf("Enter the radius of the circle: \n");
    scanf("%d", &radius);

    printf("Enter the point co-ordinates:\n  Enter the value of X2: \n");
    scanf("%d", &x2);
    printf("  Enter the value of Y2: \n");
    scanf("%d", &y2);
    
    //calculate the distance between the point and center point of circle
    dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    if (dist > radius) {
        printf("Point (%d,%d) lies outside the circle.", x2, y2);
    }
    else if (dist < radius) {
        printf("Point (%d,%d) lies inside the circle.", x2, y2);
    }
    else if (dist == radius) {
        printf("Point (%d,%d) lies on the boundary of circle.", x2, y2);
    }
    else {
        printf("Invalid input.");
    }

    return 0;
}