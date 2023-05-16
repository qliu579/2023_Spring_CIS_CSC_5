/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 4, 2023, 11:03 AM
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

#include <cstring>
#include <iostream>
using namespace std;

int main() {
  //char str2[] = "Megadeth";
  char str2[] = "Metallica";
  char str1[] = "Megadeth";
  //char str2[] = "Metallica";

  // compare str1 and str2 lexicographically
  if(strcmp(str1, str2)>0){
      int size=sizeof(str1)>sizeof(str2)?sizeof(str1):sizeof(str2);
      char temp[size];
      strcpy(temp,str1);//temp=str1
      strcpy(str1,str2);//str1=str2
      strcpy(str2,temp);//str2=temp
  }
  
  //Perform swap
  cout<<str1<<endl;
  cout<<str2<<endl;

  return 0;
}