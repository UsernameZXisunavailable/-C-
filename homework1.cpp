/*
    This is a C++program that uses the iterative 
    method to calculate ex+10x2=0. The Epsilon 
    calculated finally needs to be manually entered.
    ************
    By ZhangXiao 2022.0925
    GitHub:https://github.com/CAUfarmerZX/-C-
    ************

*/

#include <iostream>
#include <math.h>
using namespace std;

double Epsilon ;
double fx (double x )
    {   //Change this function by yourself
        double end = (2-exp(x))/10;
        return end;
    }

int main(void)
{
    std::cout <<"Please Input the Index of Epsilon :"<<std::endl;
    std::cin>>Epsilon;
    //Change double_boundary by yourself
    double left_boundary = 0.05,right_boundary = 0.15;
    double x_new=right_boundary,x_last=left_boundary;
    double x = x_last;double x_temp;
    int times;
    for ( times = 1 ; fabs(x_new-x_last)>Epsilon ; times++)
    {
        x_last = x_new;

        x_new = fx(x_new);

        printf("The x%d :%0.13f\n",times,x_new);

    }
}
