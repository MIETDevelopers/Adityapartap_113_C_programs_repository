//area of circle=22/7*radius*radius
//area of square=side*side
//area of rectangle=length*width
//perimeter of circle=2*22/7*radius
//perimeter of square=4*side
//perimeter of rectangle=2*(length+width)
#include<stdio.h>
int main(){
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
 //predefined values
	raduisOfCircle=7;
	sideOfSquare=4;
	legthOfRectangle=3;
	breadthOfRectangle=5;
	
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));
	return 0;
}