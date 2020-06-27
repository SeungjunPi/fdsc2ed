#include <stdio.h>


double Horner(double tmp, double *a, double x, int i, int n){
    //a=[a0, a1, ..., an]
    if (i==(n+1)){
        return tmp;
    }
    else{
        tmp=Horner(tmp,a,x,i+1,n)*x+a[i];
        return tmp;
    }
}

int main()
{
    double a[6]={1,2,3,4,5,6};
    double tmp=0;
    double x=2;
    int i=0;
    int n=5;

    double h;

    h=Horner(tmp,a,x,i,n);
    printf("%.5f",h);
    return 0;
}
