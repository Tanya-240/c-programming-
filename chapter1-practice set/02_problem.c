#include<stdio.h>
int main()
{
    int radius;
    int height;
    float volume;

    float area;

    printf("enter the radius\n");
    printf("enter the height");
    
    scanf("%d",&radius);
    scanf("%d",&height);

    printf("the radius is %d\n",radius);
    printf("the height of cylinder is %d\n",height);
 

    area = 3.14*radius*radius;
    volume = 3.14*radius*radius*height;
    printf("the area of circle is : %.2f\n",area);
    printf("the volume of cylinder is : %.2f\n",volume);
    return 0;

}