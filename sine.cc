//Include files with math.h for sine function
//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Defining value for PI
//
#define PI 3.14159
int main()
{
  //Defining ints, floats, and file
  //
              int am,fr;
              float t,i;
              float x;
              FILE *pf;
              //Function for entering amplitude and frequency values
              //
              printf("enter am,fr: ");
              //Scanning decimal am and fm values
              //
              scanf("%d%d",&am,&fr);
              //Creating sine.txt file to store floating point numbers
              //
              pf=fopen("sine.txt","w+");
              i=(float)fr;
              for(t=0;t<i;t=t+(i/8000))
             {
               //Equation to compute values to store in the file
               //
               x=am*sin(2*PI*100*fr*t);
               fprintf(pf,"%lf\t%lf\n",t,x);
             }
              //Closing the file
              //
             fclose(pf);
             return 0;
}
