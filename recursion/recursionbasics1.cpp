// //printing n to 1
// // #include<iostream>
// // using namespace std;

// // void print(int n){
// //    if(n==0)return;
// //     cout<<n;
// //    cout<<"hello world";
// //    cout<<endl;
// //    print(n-1);
 
// // }
// //   int main(){
// //     int x;
// //   cout<<"enter a number";
// //   cin>>x; 
// //   print(x);

// //}


// //printing 1 to n;
// //#include<iostream>
// //using namespace std;

// //void print(int n){
// //    if(n==0)return;
// //    
// //    print(n-1);
// //    
// //    cout<<n;
// //    cout<<"hello world";
// //    cout<<endl;
// //   
// //}
// //int main(){
// //  int x;
// //  cout<<"enter a number";
// //  cin>>x; 
// //  print(x);
// //  
// //}

//differnt base condition
// //printing numbers but using differnt base condition 1 to n

// #include<iostream>
// using namespace std;

// void print (int starting,int ending){

//     if(starting>ending)return;

//     cout<<starting;
//     cout<<endl;
//     print(starting+1,ending);

// }
// int main(){
//  print(1,5);
// }


// //printing numbers but using differnt basc condition n to 1


// #include<iostream>
// using namespace std;

// void print (int starting,int ending){

//     if(starting<ending)return;

//     cout<<starting;
//     cout<<endl;
//     print(starting-1,ending);

// }
// int main(){
//  print(5,1);
// }

// //printing from 1 to n
// #include<iostream>
// using namespace std;

// void print (int starting,int ending){

//     if(starting<ending)return;

   
//     print(starting-1,ending);
    
//     cout<<starting;
//     cout<<endl;

// }
// int main(){
//  print(5,1);
// }

// //printing from n to 1;

// #include<iostream>
// using namespace std;

// void print (int starting,int ending){

//     if(starting>ending)return;

    
//     print(starting+1,ending);

//     cout<<starting;
//     cout<<endl;

// }
// int main(){
//  print(1,5);
// }