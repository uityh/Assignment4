//Mathew Kellerman -takes out vowels in string and prints out same string without vowels
#include <stdio.h>
#include <string.h>
/*Note, sometimes some weird symbols can pop up.This 
 happens to me sometimes when the string doesn't fit on my screen.*/
int main()
{
int i;
int counter =0;
char arr[50]={};
printf("Enter a string\n");
fgets(arr, sizeof(arr), stdin);
arr[strlen(arr)-1]='\0';
char arr2[strlen(arr)];
//sets second array to the same length as the first one
for(i=0;i<strlen(arr);i++){
if(arr[i] == 'a'|| arr[i] == 'A' ){
	continue;}
if(arr[i] == 'e'|| arr[i] == 'E'){
	continue;
}
if(arr[i] == 'o'|| arr[i] == 'O' ){
continue;
}
if(arr[i] == 'i'|| arr[i] == 'I' ){
continue;
}
if(arr[i] == 'u'|| arr[i] == 'U' ){
continue;
}
arr2[counter]=arr[i];
counter++;
}
printf("%s\n",arr2);
return 0;
}
