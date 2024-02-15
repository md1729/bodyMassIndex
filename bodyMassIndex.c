/*
Example 4: Write a C Program that calculates the body mass/mass index according to the entered weight and height information and 
also prints the ideal weight status of the person on the screen according to this result. 
Note 1 : Body mass/mass index = Weight / Height * Height
Note 2 : Weight => kg, Height => m
Note 3 : 
- Underweight if body mass/mass index < 18.5
- 18.5 < Normal if body mass/mass index < 24.9
- 25 < Body mass/mass index < 29.9 Overweight
- 30 < Body mass/mass index < 34.9 if grade I obese
- 35 < Grade II obese if body mass/mass index < 39.9
- Grade III obese if body mass/mass index > 40
*/
#include<stdio.h>
int main(){
float weight,height,bmi;
printf("Enter your weight (kg) and height (m):\n");
scanf("%f%f",&weight,&height);
bmi=weight/(height*height);
printf("Your body mass index:%.2f\n",bmi);

 if(bmi<18.5)
 printf("UnderWeight\n");
 
 else if(bmi<24.9)
 printf("Normal\n");
 
 else if(bmi<29.9)
 printf("Overweight\n");
 
 else if(bmi<34.9)
 printf("Grade 1 OBESE\n");
 
 else if(bmi<39.9)
 printf("Grade 2 OBESE\n");
 
 else
 printf("Grade 3 OBESE\n");
 
 return 0;
 	
	
	
	
}

