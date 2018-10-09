#include <iostream>
#include <cstring>
#include <ctype.h>

#include <stdio.h>

using namespace std;
void checkanagrams(char message1[],char message2[],int string1[],int string2[],int i){

     for(int r =0;r<50;r++){
    cout<<"Enter the first string "<<endl;
    fgets(message1,100,stdin);
    cout<<endl;

    cout<<"Enter the second string "<<endl;
    fgets(message2,100,stdin);
    cout<<endl;

    for( i=0;i<message1[i];i++){
            string1[message1[i]]++;

    }

     for( i=0;i<message2[i];i++){
            string2[message2[i]]++;

    }

    for( i=0;i<256;i++)
        if(string1[i]!=string2[i])
            break;

    if(i==256)
    cout<<"Anagrams"<<endl<<"*************************"<<endl ;

    else
    cout<<"Not Anagrams"<<endl<<"**********************"<<endl ;



     }
}

int main()
{
char message1[100],message2[100];

    int string1[256]={0};

    int string2[256]={0};

    int i;

 checkanagrams(message1,message2,string1,string2,i);

}

