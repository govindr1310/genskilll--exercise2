#include<stdio.h>
#include<cs50.h>
int main(void){
string name=get_string("Enter your name\t");
float height=get_float("\nEnter your height (in m) ");
int weight=get_int("\nEnter your weight (in kg) ");
float bmi=((float)weight)/(height*height);
if(bmi<18.5){
printf("%s %.2f underweight\n",name,bmi);
}
else if(bmi>=18.5 && bmi<=24.9){
printf("%s %.2f normal weight\n",name,bmi);
}
else if(bmi>=25 && bmi<=29.9){
printf("%s %.2f overweight\n",name,bmi);
}
else
{printf("%s %.2f obese\n",name,bmi);
}
};
