
#include <stdio.h>
// Factorial of the given number
int Fact(int number){
    if(number==0 || number==1){
        return 1;
    }
    else{
        return number*Fact(number-1);
    }
}




int main() {
    int number;
    printf("Enter the number to calculate the factorial:");
    scanf("%d",&number);
    printf("The factorial of %d is : %d",number, Fact(number));
  
}
