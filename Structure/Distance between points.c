#include <stdio.h>
#include <math.h>
typedef struct pt
{
	double x;
	double y;
}point;
void readPoint(point p[])
{
	int i;
	for (i=0; i<2; i++)
	{
		printf("Enter point#%d (X%d & Y%d):", i+1, i+1, i+1);
		scanf("%lf %lf", &p[i].x, &p[i].y);
	}
}
double getDistance(point a, point b)
{
	return sqrt(pow((a.x-b.x), 2) + pow((a.y-b.y), 2));
}
int main()
{
	point p[2];
	readPoint(p);
	printf("The distance between point (%.2lf, %.2lf) and point (%.2lf, %.2lf) is %.2lf units.", p[0].x, p[0].y, p[1].x, p[1].y, fabs(getDistance(p[0], p[1])));
	return 0;
}