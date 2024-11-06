// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
void main(){
    int s1,s2,s3;
    printf("Enter the 3 sides");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3){
        printf("Equilateral triangle");
    }
    else if(s1==s2 || s2==s3||s1==s3){
        printf("Isoceles triangle");
    }
    else{
        printf("scalene triangle");
    }
}
