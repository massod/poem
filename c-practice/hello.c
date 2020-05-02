#include <stdio.h>
#include <cs50.h>

int sqr(int a, int b);

int main(int argc, char* argv[]){

    string s = "Hello";

    printf("Hello,world %s\n",s);
    
    printf(" The Square root of 12 x 12 is %d\n", sqr(12,12));
    //comment added
}

int sqr(int a , int b){
    int result = a * b;
    return result;
}