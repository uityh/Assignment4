//Matthew Kellerman - code sees if  user's input has all unique characters
#include <stdio.h>
#include <string.h>

int main(){

char arr[50];
int counter=0;
int x;
int y;
printf("Please enter something: ");
fgets(arr, sizeof(arr), stdin);
arr[strlen(arr)-1]= '\0';


for(x=0;x<strlen(arr);x++){
	//the x+1 sees if the index of the array is equal to the ones after it
	//the for loops go through each value and see if the ones after it are equal to the number it is on
	for(y=x+1;y<strlen(arr);y++){
		if(arr[x]==arr[y]){
			//sees if values are equal to each other
			counter=1;
			break;

	}
}

}



if(counter==0){
	printf("All the characters are unique.\n");
}
else{
	printf("Not unique\n");
}


return 0;
}
