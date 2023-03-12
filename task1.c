//to input the line of text and check the vowels

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i,v=0;
    printf("Enter the sentence");
    fgets(s,100,stdin);
  
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            v++;
        }
    }
   printf("%d",v);

}