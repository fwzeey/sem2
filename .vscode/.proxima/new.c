#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the cicle:");
    scanf("%f",&radius);
    float area = 3.1415*radius*radius;
    printf("The area of circle %f for the radius %f",area,radius);
    return 0;
}
