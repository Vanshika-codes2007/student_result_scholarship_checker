#include <stdio.h>
int main()
{
  int m1,m2,m3,total_marks;
  float percentages;
  printf("enter three numbers");
  scanf("%d %d %d",&m1,&m2,&m3);
  total_marks=m1+m2+m3;
  percentages=total_marks/300.0*100;
  printf("total marks=%d\n",total_marks);
  printf("percentages=%f\n",percentages);
  if(m1>=33 && m2>=33 && m3>=33 )
  {
    printf("pass\n");

    if(percentages>=90)
    {
      printf("50%% scholarship");
    }
    else if(percentages>=75)
    {
      printf("25%% scholarship");
    }
    else
    {
      printf("no scholarship");
    }
  }
   else
  {
    printf("fail");
  }

}