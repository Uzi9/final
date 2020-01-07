#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    double a[100]={0};
    int i=0;
    int j=0;
    if(argc==1){
    printf("The program needs at least one integer parameter to run!\n");
    }
    else{
    for(i=1;i<argc;i++,j++){
        if(*argv[i]>'0'&&*argv[i]<'9')
        {
            a[j]=atof(argv[i]);
            }else{
               printf("The parameter has to be an integer format!\n");
               return 0;  
            }
    }
    double min=a[0];
    int k=0;
    for(k=0;k<argc-1;k++)
    {
        if(min>=a[k])
        {
            min=a[k];
        }
    }
    printf("Min parameter is:%f\n",min);
    }
}