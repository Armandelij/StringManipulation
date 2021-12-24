#include <iostream> 
#include <string> 
using namespace std; 

// Problem description: Erasing Characters from a string. Write a program that erases the sequences "by" and "BY" from a string

int main (void) 
{ 
   string BbYy = "I like Turtles BYby and Dogs\n";

   string target = "BYby";

   int found=-1;
   do {
       found=BbYy.find(target, found+1);
       if(found!=-1)
       {
           BbYy=BbYy.substr(0,found)+BbYy.substr(found+target.length());
       }
   }while(found!=-1);

   cout << BbYy;

    return 0;
} 
