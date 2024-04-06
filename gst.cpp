#include <stdio.h>
void Calculate_price(float value);

int main() {
  float value=100.0;
  Calculate_price(value);
  return 0;
}
void Calculate_price(float value)
{
    value=value+(0.18*value);
    printf("Final price is:%f",value);


    return;

}
