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
    char str[100]= "curl -d 'uname=123&content=longitude' http://ipadress.com/path/to/";
        if(!(in = popen(str, "r")))
         {
            return 0;
         }

       while(fgets(buff, sizeof(buff), in)!=NULL)
         {
             printf("%s\n",buff);           
             pclose(in);


        }
 }


