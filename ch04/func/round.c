#include <stdio.h>
#include <math.h>

#define ROUNDING(x, dig)    ( floor((x) * pow(10, dig) + 0.5f) / pow(10, dig) )

double Rounding( double x, int digit )
{
    return ( floor( (x) * pow( 10, digit ) + 0.5f ) / pow( 10, digit ) );
}

int main( )
{
    printf( "%g\n", ROUNDING( 9.3453456, 3 ) );
    printf( "%g\n", Rounding( 9.3453456, 3 ) );
    printf( "%g\n", ROUNDING( 9.3453456, 5 ) );
    printf( "%g\n", Rounding( 9.3453456, 5 ) );

    return 0;
}
