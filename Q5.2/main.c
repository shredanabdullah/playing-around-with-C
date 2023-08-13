#include <stdio.h>
#include <stdlib.h>
/*2. C Program to add two distances (inch-feet) using structure and display the result.*/
struct distance{
int inch;
int feet;
};

int main()
{
    struct distance distance1,distance2;
    distance1.feet=100;
    distance1.inch=50;
    distance2.feet=100;
    distance2.inch=50;
    int x=distance1.feet+distance2.feet;
    int y=distance1.inch+distance2.inch;

    printf("%d, %d\n",x,y);
    return 0;
}
