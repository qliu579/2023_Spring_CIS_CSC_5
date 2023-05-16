/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 4, 2023, 11:03 AM
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

//#include <cstring>
#include <iostream>
using namespace std;

//Our own string copy and string compare
int  sizestr(char *);
void strcpy(char *,char *);
int  strcmp(char *,char *);

int main(){
    //Declare static arrays
    const int ROWS=2,COLS=20;
    char words[ROWS][COLS];
    
    //Initialize the array
    cout<<"Read in "<<ROWS<<" words"<<endl;
    for(int i=0;i<ROWS;i++){
        cin>>words[i];
    }
    
    //Output the Array
    cout<<endl<<"Before the Sort"<<endl;
    for(int row=0;row<ROWS;row++){
        cout<<words[row]<<endl;
    }

  // compare str1 and str2 lexicographically
  //After the sort
    if(strcmp(words[0], words[1])>0){
        char temp[COLS];
        strcpy(temp,words[0]);//temp=str1
        strcpy(words[0],words[1]);//str1=str2
        strcpy(words[1],temp);//str2=temp
   }
  
   //Perform swap
    cout<<endl<<"After the Sort"<<endl;
   cout<<words[0]<<endl;
   cout<<words[1]<<endl;

  return 0;
}

int strcmp(char a[],char b[]){
    for(int i=0;i<sizestr(a);i++){
        if(a[i]>b[i]){
            return 1;
        }else if(a[i]<b[i]){
            return -1;
        }
    }
    return 0;
}

int sizestr(char a[]){
    int count=0;
    do{
        count++;
    }while(a[count]!='\0');
    return ++count;
}

void strcpy(char a[],char *b){
    for(int i=0;i<sizestr(b);i++){
        *(a+i)=b[i];
    }
}