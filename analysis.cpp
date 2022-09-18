/*
    This is a C++ implementation code for dichotomy solving, 
    all you need to do is modify the solving function and left and right boundaries in the code, 
    and then enter the Epsilon value after the program runs.
    ************
    By ZhangXiao 2022.0918
    ************

*/

#include <iostream>
#include <math.h>
using namespace std;

double Epsilon ;
double fx (double x )
    {   //Change this function by yourself
        double end = pow(x,4)-3*x+1;
        return end;
    }

int main(void)
{
    std::cout <<"Please Input the Index of Epsilon :"<<std::endl;
    std::cin>>Epsilon;
    //Change double_boundary by yourself
    double left_boundary = 0.3,right_boundary = 0.4;
    double x,middle_now=0,middle_last=(left_boundary+right_boundary)/2;
    int times;
    for ( times = 1 ; fabs(middle_last-middle_now)>Epsilon ; times++)
    {
        middle_now = (left_boundary+right_boundary)/2;
        printf("The left_boundary is :%0.13f And the right_boundary is :%0.13f\n",left_boundary,right_boundary);
        if (fx(left_boundary)*fx(middle_now)<0)
        {
            right_boundary = middle_now;
            printf("The new right_boundary is :%0.13f\n",right_boundary);
        }
        else
        {
            left_boundary = middle_now;
            printf("The new left_boundary is :%0.13f\n",left_boundary);
        }
        
        middle_last = middle_now;
        middle_now = (left_boundary+right_boundary)/2;
    }
    printf("The diff is %0.13f > Epsilon.And choose X%d = %0.13f",fabs(middle_last-middle_now),times,middle_now);
    
}
