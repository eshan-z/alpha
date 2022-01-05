#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize){
    // int total = 0 ;
    int profit = 0 ;
    // int prev = 0 ;
    // int next ;

for (size_t i = 1; i < pricesSize; i++)
{
    if (prices[i] > prices[i-1])
    {
        profit += prices[i] - prices[i-1] ;
    }
    
}


return profit ;

}
int main(){


return 0 ;  
}  