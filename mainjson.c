#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{

    FILE *in;
    char *p;
    char buff[512];
    int id=6;
    int len;
    char str[100]= "curl -X POST -H "Content-Type: application/json" -d 
   "'{"user":/"123/",/"content/":/"2323/",/"longitude/":/"c"/}'" http://ipadress.com/path/to/";//This was a sample Json value I was passing
        if(!(in = popen(str, "r")))
         {
            return 0;
         }

       while(fgets(buff, sizeof(buff), in)!=NULL)
         {
            
             printf("%s\n",buff);			
             pclose(in);


        }