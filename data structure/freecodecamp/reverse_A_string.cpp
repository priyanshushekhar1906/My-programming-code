#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
// void  Reverse(char*s,int length)   //Time complexity--O(n) and space complexity --O(n) we are using extra space of stack
// {
//      stack<char> sp;
//     for (int i = 0; i < length; i++)
//     {
       
//         sp.push(s[i]);
//     }
//     for (int i = 0; i < length; i++)
//     {
//         s[i]=sp.top();
//         sp.pop();
//     }
    

// }
void  Reverse(char*s,int length) {  //Time complexity--O(n) and space complexity --O(1) 
 
  int i=0;
  int j=length-1;
  int temp;  
  while(i<j)
  {
      temp=s[i];
      s[i]=s[j];
      s[j]=temp;

     i++;
     j--; 
  } 
   

}
int main(){
    char s[51];
    cout<<"Enter a string\n";
    gets(s);
    Reverse(s,strlen(s));
    cout<<"Output="<<s;
    return 0; 
}