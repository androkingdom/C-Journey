#include <stdio.h> 
// Write a program using recursion to calculate nth element of Fibonacci series.
// F3 = F2 + F1
// F(n) = F(n-1) + F(n-2) 

int LastFibbo(int);
int LastFibbo(int n){
    if (n == 1 ){
        return 0;
    }
    else if (n == 2){
        return 1;   
    }
    else{
        return LastFibbo(n-1)+LastFibbo(n-2);
    }
}

int main(){
    int F_nth = 4;
    printf("The %dth term of fibbonacci series is %d", F_nth, LastFibbo(F_nth));
    return 0;
}