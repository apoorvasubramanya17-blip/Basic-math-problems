#include<stdio.h>
int main(){
char s1[20],s2[20];
int i=0;
printf("enter s1:");
gets(s1);
printf("enter s2:");
gets(s2);
while(s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0'){
    i++;
if(s1[i]=='\0'&&s2[i]=='\0'){
    printf("strings are same");
}
}

return 0;
}
