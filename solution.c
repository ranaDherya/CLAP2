#include<stdio.h>
int main()
{
    float  Phy, Chem, Maths,CSE,Eng; 
    float sum, avg;

    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &Eng, &Phy, &Chem, &Maths, &CSE);

    sum = Eng +Phy +Chem+Maths+ CSE;
    avg = sum/ 5.0;
    
    
    printf("Total marks -> %.2f\n",sum);
    printf("Average marks -> %.2f\n",avg);
    return 0;
}