#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
    int a, b, c;
    
    
    if( ((a*a)+(b*b)=(c*c)) || ((b*b)+(c*c)=(a*a)) || ((a*a)+(c*c)=(b*b)) )
    cout<<"Yes";
    else
    cout<<"No";    
    return 0;
}