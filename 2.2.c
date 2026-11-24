#include <stdio.h>
#include <math.h>
#include <float.h>

double getDouble();
double f(const double a,const double x);

int main()
{
    double a = 2.5;
    double x = getDouble();
    printf("y = %lf", f(a,x));
    return 0;
}

double f(const double a,const double x)
{
    if (fabs(x-0.5) < DBL_EPSILON)
        {
            return(a*x+3);
        }
    else if (x<0.5)
        {
            return (sqrt(a*pow(x,2) + 1));
        }
    else if (x>0.5)
        {
            return (sqrt(pow(a,2)*x)-1);
        }
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}
