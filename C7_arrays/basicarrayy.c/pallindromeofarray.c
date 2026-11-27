#include <stdio.h>

int main() {
    
    int a[] = {1,2,3,2,1};
    int n=5;

    int i=0;
    int j=n-1;
    int isPalindrome =1;

    while(i<j){
        if(a[i]!=a[j]){
            isPalindrome =0;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome == 1){
        printf("The given array is a palindrome.");
    }
    else{
        printf("The given array is NOT a palindrome.");
    }

    return 0;
}