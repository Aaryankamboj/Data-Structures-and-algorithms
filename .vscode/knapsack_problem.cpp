/* KnapSack Problem is very Important so lets understand its concept
knapsack -->  Thief ki bori hoti hai jisme woh chori ka saman dalta hai.
In this problem we have given the Maximum Weight(capacity) of Theif's
knapsack. In this bori he will be able to add items whose total 
weight will be less than or equal to Weight of Knapsack.

So, we have given with an array of items with its weights and values.
Knapsack will have to filled Such that the weight of total items remains
less than the capacity of knapsack and the value of items will be maximum.

So, to fullfill this condition we have 2 cases either to choose that item or
leave it.

Terminology ---> 

wt[]= Array of weights of items
val[]= Array of values of items
W = Weight or Capacity of Knapsack
n = number of items

Note -- > if the weight of particular item is greater than the capacity of
knapsack then we consider and ignore it.
*/

#include<iostream>
#include<climits>
using namespace std;
int KnapSack(int n, int wt[], int val[], int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        KnapSack(n-1,wt,val,W);
    }

   return max(KnapSack(n-1,wt,val,W-wt[n-1])+val[n-1],KnapSack(n-1,wt,val,W));


}

int main(){
int wt[]={10,20,30};
int val[]={1000,350,200};
int W=60;
cout<<KnapSack(3,wt,val,W);
}