#include <stdio.h> 
#include <math.h>   
 
float areaOfCircle(float radius)  
{ 
     return M_PI * pow(radius, 2);  
} 
  
float areaOfSquare(float side)  
{ 
     return pow(side, 2); 
} 
 

float areaOfRectangle(float length, float width)  
{ 
     return length * width; 
} 
 

float areaOfTriangle(float base, float height)  
{ 
     return 0.5 * base * height; 
} 
 
int main()  
{ 
    int choice; 
    float radius, side, length, width, base, height, area; 

    printf("Area Calculation Menu:\n"); 
    printf("1. Circle\n"); 
    printf("2. Square\n"); 
    printf("3. Rectangle\n"); 
    printf("4. Triangle\n"); 
    printf("Enter your choice (1-4): "); 
    scanf("%d", &choice); 
          
    
    switch (choice)  
    { 
        case 1:   
            printf("Enter the radius of the circle: "); 
            scanf("%f", &radius); 
            area = areaOfCircle(radius); 
            printf("Area of the circle: %.2f\n", area); 
            break; 
 
        case 2:   
            printf("Enter the side of the square: "); 
            scanf("%f", &side); 
            area = areaOfSquare(side); 
            printf("Area of the square: %.2f\n", area); 
            break; 
 
        case 3:    
            printf("Enter the length and width of the rectangle: "); 
            scanf("%f %f", &length, &width); 
            area = areaOfRectangle(length, width); 
            printf("Area of the rectangle: %.2f\n", area); 
            break; 
 
        case 4:   
            printf("Enter the base and height of the triangle: "); 
            scanf("%f %f", &base, &height); 
            area = areaOfTriangle(base, height); 
            printf("Area of the triangle: %.2f\n", area); 
            break; 
 
        default:   
            printf("Invalid choice! Please select a valid option (1-4).\n"); 
    } 
 
    return 0; 
} 
 
