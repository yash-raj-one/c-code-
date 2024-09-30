////write a program to print Yash raj 

#include<stdio.h>
int main()
{
    printf("yash raj");
    return 0;
}




  /// write a program to simple calculator 


#include<stdio.h>
int main()
{
   int a,b;
   printf("enter any two number");
   scanf("%d%d",&a,&b);
   printf("a+b=%d", a+b);
   printf("a-b=%d", a-b);
   printf("a*b=%d", a*b);
   printf("a/b=%d", a/b);
    return 0;
}



        ///write a program to print the table of 2 upto 10.


#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++){
        printf("%d\n",(2*i));
    }
}


     
///write a program to print all the ASCII value


#include<stdio.h>
int main()
{
    int i;
    
    for(i=1;i<=127;i++){
    printf("%c\t",i);    
    }
}

              ///write a program to print the perimeter of rectangle 


 #include<stdio.h>
int main()
{
    int  a,b,peri ;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    peri=2*(a+b);
    printf("peri=%d",peri);
    return 0;
}




    ///write a program to perform area of rectangle ,square, circle.


#include<stdio.h>
#include<conio.h>
int main(){
    int  a,b,rect,square;
    float r,(circle);
    
    //area of rectangle 
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    rect=a*b;
    printf("rect=%d\n",rect);
    
    //area of circle
    printf("enter the value of r");
    scanf("%f",&r);
    circle=3.14*r*r;
    printf("circle=%f",circle);
    
    //area of square
    printf("value of a");
    scanf("%d",&a);
    square=a*a;
    printf("square=%d",square);
    
    return 0;
    
}


          /// write program to print the multiplication of two number



#include<stdio.h>
int main()
{
   int a,b ;
   printf("enter the value of a and b");
   scanf("%d%d",&a,&b);
   printf("%d", a*b);
   return 0;
   
}




    ///write a program to print a number (n) from user & output its cube



#include<stdio.h>
int main ()
{
    int n ;
    int cube;
    printf("enter a number");
    scanf("%d",&n);
    
    cube= n*n*n;
    printf("cube is %d \n",n*n*n);
    return 0;
    
}






     ///write a program to print a number pattern 


#include<stdio.h>
int main()
{
 printf("1\n");
 printf("1 2\n");
 printf("1 2 3\n");
 printf("1 2 3 4\n");
 printf("1 2 3 4 5\n");
   return 0;
   
}



      ////Write a program to print thnkyou for giving this homework


#include<stdio.h>
int main()
{
    printf("thankyou");

    return 0;
}