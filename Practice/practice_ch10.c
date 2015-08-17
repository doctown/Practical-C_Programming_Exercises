/**************************************************/
/* practice_ch10 - Practice preprocessor concepts */
/* 						  */
/* Author: David Ogor				  */
/* Date: 07-28-2015				  */
/**************************************************/
#include <stdio.h>

#define SIZE 10;
#define FUDGE SIZE - 2;

      /* Test to see error in #defines above */
void test_preprocessor()
{
  int size = 0;

  size = FUDGE;
  3;

  printf("Expected: 8\t Actual:%d", size);
}

int main(void)
{
  test_preprocessor();
  return 0;
}
