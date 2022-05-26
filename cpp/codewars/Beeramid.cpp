//https://www.codewars.com/kata/51e04f6b544cf3f6550000c1
int beeramid(int bonus, double price)
{
  double doubledBonus = static_cast<double>(bonus);
  int counter = 0;
  while ((doubledBonus - price * (counter+1)*(counter+1)) >= 0) {
            ++counter;
            doubledBonus -= (price * (counter)*(counter));
           }              
    return counter;
}