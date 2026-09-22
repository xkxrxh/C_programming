#include <stdio.h>

void england()
{
    printf("You are in england\n");
    return;
}
void australia()
{
    printf("You are in australia\n");
    england();
    return;
}
void india()
{
    printf("You are in india\n");
    australia();
    return;
}
int main()
{
    india(); // calling a function
    return 0;
}

// sbse pehele aana hai (int main) wale fn me 
// usme ek aur fn hoga fir jana hai us fn me 
// and doosre wale me teesra fn hoga fir jana hai usme

//similarly england me jae ke baad return ho gyi mtlb fn end hogya uske 
//baad ham jayenge vapis int main wale fn pe udhr return 0 hai jaha fn actually end hoega


// int main fn ek baar aata hai
//uske baad unlimited fn aa skte hai 