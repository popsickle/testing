#include <stdio.h>
#include <assert.h>
#include "neww.c"

int main()
{
    assert(calc('+',5,10)==15);
    printf("passed");
    assert(calc('+',5,-10)==-5);
    printf("\npassed");
    assert(calc('+',-5,-10)==-15);
    printf("\npassed");
    assert(calc('-',5,10)==-5);
    printf("\npassed");
    assert(calc('-',5,-10)==15);
    printf("\npassed");
    assert(calc('-',-5,-10)==5);
    printf("\npassed");
        assert(calc('*',5,10)==50);
    printf("\npassed");
    assert(calc('*',5,-10)==-50);
    printf("\npassed");
    assert(calc('*',-5,-10)==50);
    printf("\npassed");
        assert(calc('/',5,10)==0.5);
    printf("\npassed");
    assert(calc('/',5,-10)==-0.5);
    printf("\npassed");
    assert(calc('/',-5,-10)==0.5);
    printf("\npassed");
    return 0;
    
}
