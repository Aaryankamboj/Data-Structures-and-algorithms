#include<iostream>
using namespace std;
int main()
{   // Floyd's Triangle code
    // int n;
    // int k=1;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << k<<" ";
    //         k++;
    //     }
    //     cout<<endl;

    // }

//  THE 0 1 PATTERN
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         if((i+j)%2==0)
    //         cout <<"1 ";
    //         else
    //         cout <<"0 ";
    //     }
    //     cout << endl;
    // }



    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //    sss     cout <<" ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //  for(int i=n; i>=1; i--){
    //     for(int j=1; j<=n-i; j++){
    //         cout <<" ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // THE SOLID RHOMBUS
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=n; j++){
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }
      
    //   THE HOLLOW RHOMBUS
    //    int n;
    //    cin >> n;
    //    for(int i=1; i<=n; i++){
    //      for(int j=1; j<=n-i; j++){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=n; j++){
    //         if(j==1 || j==n || i==1 ||i==n)
    //         cout << "*";
    //         else
    //         cout <<" ";
    //     }
    //     cout<<endl;
    //   }

//  PYRAMID PATTERN FOR NUMBERS
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout << " ";
    //     }
    //     for(int j=1;j<=i; j++){
    //         cout << i<<" ";
    //     }
    //     cout <<endl;
    // }

// PYRAMID PATTERN PART 2
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout << " ";
    //     }
    //     for(int j=1;j<=i; j++){
    //         cout << j <<" ";
    //     }
    //     cout << endl;
    // }


    // SOLID BUTTERFLY PATTERN 
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "*";
    //     }
    //     for(int j=1;j<=2*n-2*i; j++){
    //         cout << " ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //     for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout << "*";
    //     }
    //     for(int j=1;j<=2*n-2*i; j++){
    //         cout << " ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

// THE HOLLOW BUTTERFLY PATTERN
         int n;
         cin >> n;
         for(int i=1; i<=n; i++){
             for(int j=1; j<=i; j++){
                 if(j==1||j==i)
                     cout <<"*";
                 
                 else
                     cout << " ";
                 
             }
             for(int j=1; j<=2*n-2*i; j++){
                 cout <<" ";
             }
             for(int j=1; j<=i; j++){
                if(j==1 || j==i)
                  cout<<"*";
                  else 
                  cout << " ";
             }

         cout<<endl;
        
         }
             for(int i=n; i>=1; i--){
             for(int j=1; j<=i; j++){
                 if(j==1||j==i)
                     cout <<"*";
                 
                 else
                     cout << " ";
                 
             }
             for(int j=1; j<=2*n-2*i; j++){
                 cout <<" ";
             }
             for(int j=1; j<=i; j++){
                if(j==1 || j==i)
                  cout<<"*";
                  else 
                  cout << " ";
             }

         cout<<endl;
        
         }
}         