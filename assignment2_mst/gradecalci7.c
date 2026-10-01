#include <stdio.h>

int main() {
    
    int grade;
    printf("Enter the grade: ");
    scanf("%d", &grade);

    if(grade>=90){
        printf("You have got A grade");
    }
    else if(grade>=80 && grade<90){
        printf("You have got B grade.");
    }
    else if(grade>=70 && grade<80){
        printf("You have got C grade.");
    }
    else{
        printf("You have got D grade.");
    }


    return 0;
}