#include <stdio.h>
int main(){
 float Radius;
 float height;
 float Area;
 
 printf("Input value of Radius : ");
 scanf("%f", &Radius);
 
 printf("Input value of height : ");
 scanf("%f", &height);
      
 Area = (2*3.14*Radius)* height + 2 
 *(3.14*Radius * Radius);
 printf("Area of a Triangle is %.2f ",Area);
 return 0;
}
