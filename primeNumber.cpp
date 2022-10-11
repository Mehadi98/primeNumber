#include<iostream>
using namespace std;

int main(){

    //============>>Prime Number Checker >>=======

    // int number;
    // cout<<"Enter Your Number :";
    // cin>>number;
    // int check = 0;
    // for(int i=2;i<=int(number/2);i++){
    //     if (number%i==0){
    //        check=1;
    //        break;
    //     }      
    // }
    // if (number==1 || number==0){
    //     cout<<"Not Prime ";
    // }
    // else if (check==0){
    // cout<<"WOW ! it's Prime Number ";
    // }

    // else{
    //     cout<<"Not Prime ";
    // }
    
    // return 0;


    //===========>>>Prime Number Generator<<===================
    int number,check;
    cout<<"Enter Your Range:";
    cin>>number;
    
    for (int i = 2; i <= number; i++)
    {
        check = 0;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
               check=1;
               break;
            }
            
        }

        if (check==0){
        cout<<i<<endl;
        }

        
    }
    
    return 0;
}