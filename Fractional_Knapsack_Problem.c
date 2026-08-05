//Fractional_Knapsack_Problem by greedy approach

#include<stdio.h>

void sort(float price[],int weights[],int value[],int n){
    // using insertion sort

    for(int i=1; i<n ;i++){
        float curr=price[i];
        int curr1=weights[i];
        int curr2=value[i];
        int prev=i-1;

        while(prev>=0 && price[prev]<curr){ // for descending order
            price[prev+1]=price[prev];
            weights[prev+1]=weights[prev];
            value[prev+1]=value[prev];
            prev--;
        }
        price[prev+1]=curr;
        weights[prev+1]=curr1;
        value[prev+1]=curr2;
    }
}

int min(int a, int b){
    return a<b?a:b;
}

int main(){

    int value[]={30,20,100,90,160};
    int weights[]={5,10,20,30,40};
    int i;
    int W=60; // Capacity of snap or bag
    float max_cost=0;

    int n=sizeof(value)/sizeof(value[0]);
    float price[n];

    for(i=0; i<n ; i++){
        price[i]=(float)value[i]/weights[i]; // price per unit
    }

    sort(price,weights,value,n); // sorting price per unit along with its weights and values in descending order

    for(i=0; i<n && W>0; i++){
            int amount=min(W,weights[i]);
            W=W-amount;
            max_cost+=amount * price[i];
        }

    printf("Max Cost of Items in Snap or Bag is : %.2f ",max_cost);
    return 0;

}