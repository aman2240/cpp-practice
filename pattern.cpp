#include<iostream>
using namespace std;
int main(){
  // int m,n;
  // cout << "enter no of rows and coloumns : ";
  // cin >> m;
  // cin >> n;
  // for(int i=1;i<=m;i++){
  //   for(int j=1;j<=n;j++){
  //     cout << "*";
  //   }
  //   cout <<endl;
  // }



  // int n;
  // cout << "enter no of stars : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     cout << "*";
  //   }
  //   cout <<endl;
  // }



  //  int n;
  // cout << "enter no  : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     cout << j;
  //   }
  //   cout <<endl;
  // }




  //    int n;
  // cout << "enter no  : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     cout << i;
  //   }
  //   cout <<endl;
  // }


  // int n;
  // cout << "enter no  : ";
  // cin >> n;
  // int a=65;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     cout << (char)(j+64)<<" ";
  //   }
  //   cout <<endl;
  // }



//Alphabet square

//   int n;
//   cout << "enter no  : ";
//   cin >> n;
//   int a=65;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       cout << (char)(i+64)<<" ";
//     }
//     cout <<endl;
//   }


//alphabet square

  // int n;
  // cout << "enter no  : ";
  // cin >> n;
  // int a=65;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     cout << (char)(j+96)<<" ";
  //   }
  //   cout <<endl;
  // }





//star triangle

  // int n;
  // cout << "enter no  : ";
  // cin >> n;
  // int a=65;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout <<"*";
  //   }
  //   cout <<endl;
  // }



  //number triangle

  // int n;
  // cout << "enter no  : ";
  // cin >> n;
  // int a=65;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout <<(char)(j+64);
  //   }
  //   cout <<endl;
  // }




  
  // int n;
  // cout << "enter no  : ";
  // cin >> n;
  // int a=65;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     if(i%2!=0){
  //       cout << j;
  //     }
  //     else cout <<(char)(j+64);
  //   }
  //   cout <<endl;
  // }
  



  // int n;
  // cout << "enter n : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n+1-i;j++){
  //     cout << "*";
  //   }
  //   cout <<endl;
  // }



  // int n;
  // cout << "enter n : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n+1-i;j++){
  //     cout << j;
  //   }
  //   cout <<endl;
  // }
  


  //   int n;
  // cout << "enter n : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n+1-i;j++){
  //     cout << (char)(j+64);
  //   }
  //   cout <<endl;
  // }



  //   int n;
  // cout << "enter n : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout << n+1-j;
  //   }
  //   cout <<endl;
  // }





  // int n;
  // cout << "enter n : ";
  // cin >> n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout << 2*j-1;
      
        
  //   }
  //   cout <<endl;
    
  // }

//floyd triangle

//   int n;
//   cout << "enter n : ";
//   cin >> n;
//   int a=1;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       if((i+j)%2!=0)  cout << 0;
//       else  cout << 1;
//       a++;
//     }
//     cout <<endl;
    
    
//   }

  // int n;
  // cout << "enter n : ";
  // cin >> n;
  // int mid;
  
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     mid= (n/2)+1;
  //     if(i==mid or j==mid)  cout << "* ";
  //     else  cout << "  ";
      
  //   }
  //   cout <<endl;

  int n;
  cout << "enter  n : ";
  cin >> n;
  
  
// for(int i=1;i<=m;i++){

//  for(int j=1;j<=n;j++){ 
//       if(i==1 or j==n  or j==1 or i==m )  cout << "*";
//       else cout << " ";
      
      
//     }
//     cout <<endl;
//   }










// for(int i=1;i<=n;i++){

//  for(int j=1;j<=n;j++){ 
//       if(i==j || j==(n+1-i) )  cout << "*";
//       else cout << " ";
      
      
//     }
//     cout <<endl;
//   }






// for(int i=1;i<=n;i++){
//  for(int j=1;j<=(n-i);j++){ 
//       cout << "  ";
//  }
//  for(int j=1;j<=i;j++){ 
//       cout << "* ";  
//     }
//     cout <<endl;
//   }






for(int i=1;i<=n;i++){
 for(int j=1;j<=(n-i);j++){ 
      cout << "  ";
 }
 for(int j=1;j<=i;j++){ 
      cout << j<<" ";  
    }
    cout <<endl;
  }
}   
