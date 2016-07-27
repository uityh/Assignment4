//Matthew Kellerman - code prints out culmative sum of array's elements
#include <stdio.h>

int main()
{
int x;
int b;
int y= x-1;
int sum=0;
printf("How big do you want your array to be? It has to be greater than 1\n");
scanf("%d",&x);
if(x>1){
//makes sure array is greater than 1	
int a[x];
int b[x];
//output array
for(int i=0; i<x;i++){
printf("What numbers do you want in your array?\n");
scanf("%d",&a[i]);
}
b[0]=a[0];
//the first number in both loops will be the same no matter what
for(int i=1; i<x; i++){
       	 b[i]=a[i] +b[i-1];
	 //adds number i is and the number before i together
}

for(int i=0;i<x;i++){
printf("\nThe culmative sum of the elements is %d\n",b[i]);
//prints out output array
}
}

else{
printf("Sorry, the number you inputed wasn't greater than 1.\n");
}
return 0;
}
