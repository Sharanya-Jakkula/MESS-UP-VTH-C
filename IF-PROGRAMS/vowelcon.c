//TO CHECK FOR A VOWEL OR CONSONANT
#include<stdio.h>
void main(){
	char chr;
	printf("Enter the character : ");
	scanf("\n%c",&chr);
	if((chr>='a' && chr<='z')||(chr>='A' && chr<='Z'))
	{
		if((chr=='a')||(chr=='e')||(chr=='i')||(chr=='o')||(chr=='u')||(chr=='A')||(chr=='E')||(chr=='I')||(chr=='O')||(chr=='U'))
		{
		printf("The given alphabet is vowel\n");
		}
		else
		{
		printf("The given alphabet is consonant\n");
		}
	}
	else
		printf("Enter the alphabet only\n");

}
