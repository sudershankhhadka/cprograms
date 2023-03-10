//to take a string input and cahnging to upper case lowercase


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char s[100];
    printf("Enter the name ");
    fgets(s,100,stdin);
    for(i=0;s[i]!='\0';i++){
        s[i]=toupper (s[i]);
    }
   puts(s);
   return 0;
}


//enter  a string and change to its lowercase



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char name[100];
    printf("Enter the name :");
    fgets(name,100,stdin);
    for(i=0;name[i]!='\0';i++){
        name[i]=tolower(name[i]);
    }
    puts(name);
    return 0;
}