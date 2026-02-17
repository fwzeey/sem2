#include <stdio.h>
int main()
{
    int n,r;
    int n_fact=1, r_fact=1, nr_fact=1;
    printf("Enter n value: ");
    scanf("%d",&n);
    printf("Enter r value: ");
    scanf("%d",&r);
    for (int i=1; i<=n; i++){
        n_fact= n_fact * i;
    }
    for (int j=1; j<=r; j++){
        r_fact= r_fact * j;}
    for (int k=1; k<=(n-r); k++){
        nr_fact= nr_fact * k;}

   printf("%d c %d = %d ",n,r, n_fact/(r_fact*(nr_fact)));
   return 0;        
}