#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i, a, max,min;
    printf("Enter the size of the array :")
    scanf("%d",n);
    for(i=0,i<n,i++)
    {
       scanf("%d",&a[i]);
    }
     min=max=a[0];
     for(i=0;i<n;i++)
     {

        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
     }
     printf("The minimum Number is :%d",min);
      printf("The minimum Number is :%d",max);

     return 0;


}