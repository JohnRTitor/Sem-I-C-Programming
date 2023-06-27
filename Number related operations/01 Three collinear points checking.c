#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    double ab, bc, ac;

    printf("Check if three points are colinear meaning they fall into one straight line. \nEnter the co-ordinates of first point A (X1, Y1):\n  Enter the value of X1:\n");
    scanf("%d", &x1);
    printf("  Enter the value of Y1: \n");
    scanf("%d", &y1);
    printf("Enter the co-ordinates of second point B (X2, Y2):\n  Enter the value of X2:\n");
    scanf("%d", &x2);
    printf("  Enter the value of Y2: \n");
    scanf("%d", &y2);
    printf("Enter the co-ordinates of third point C (X3, Y3):\n  Enter the value of X2:\n");
    scanf("%d", &x3);
    printf("  Enter the value of Y3: \n");
    scanf("%d", &y3);

// these three points are colinear if AB+BC=AC

    ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    ac = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

    printf("AB: %f\t BC: %f\t AC: %f\n", ab, bc, ac);
    if(ab+bc==ac)
    {
        printf("Since AB + BC = AC,\n All the three points are colinear.");
    }
    else
        printf("All three points are not colinear.");

return 0;
}