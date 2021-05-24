// Saat Donusumleri

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    cout << " 12'lik sistemde bir saat giriniz" << endl;
    
    char a[11]; //boyutunu belirtiyoruz
    cin >> a; //kullanıcıdan alıyoruz
    
    if (a[8]=='P') { //8.karaktere denk geldiği için. karakter dizisi olduğu için tek tırnak
        char x[3]; //girilen verilerin ilk üç değerini alıyoruz (değiştirebilmek için)
        x[0]=a[0];
        x[1]=a[1];
        x[2]= '\0';//burda da x dizgisini oluşturduk s nin elemanlarını vererk ve 
        //bir dizgi olduğu için son karakteri end of string omalı
        
        /*eğer aşağıdaki saat hesaplamasını yapmak
         * istemiyorsanız atoi kodunu kullanabilirisiniz kolay yolu olarak
        int saat=0;
        saat += (x[0]-48) *10; x in 0 onlar hanesi .
        saat += x[1]-48; x in biride birler hanesi
        */
        
        int saat= atoi(x); // karakter dizisini alıp integer değere çeviriyor
        saat += 12; 
        
        a[0]=(char)48 + saat/10; //x değerlerini a üzerine yazıcam örneğin 15 dersek burda onlar basamağı yani 1 yazılcak
        a[1]=(char)48 + saat%10; // burda da birler basamağı  5 yazılcak sonrada 48 ekleyerek koyuyoruz
        
        
        a[8]='\0'; // P ve geri kalan karakterler basılmayacaktır
        
        cout << "yeni saat: " << a << endl;
            }
    else { //geriye kalan tek durum else olduğu için else yapısını kullandık
        
        a[8]='\0'; // A ve geri kalan karakterler basılmayacaktır
        cout << "yeni saat: " << a << endl;
        }
    
    return 0;
}
