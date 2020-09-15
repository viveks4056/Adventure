#include<iostream>
using namespace std;


    
int main()
{   
    int a = 10;
    int *p ;
    cout<<"value of a is"<<" " <<a<<endl;
    cout<<"address of a is"<<" "<<&a<<endl;
    cout<<"address of p is"<<" "<<&p<<endl;
    p = &a;
    cout<<"address pointed by p is"<<" " <<p<<endl;  
    cout<<"value at a place whose address is pointed by p (by dereferencing p)is"<<" " <<*p<<endl;  
    
    int **q;         
    cout<<"address of q is"<<q<<endl;    
    q = &p;
    cout<<"address pointed by q is"<<" " <<*q<<endl;
    cout<<"value at adress pointed by q is"<<" "<<**q<<endl;
    
    int ***r;
    cout<<"address of r is"<<r<<" "<<endl;
    r = &q;
    cout<<"address pointed by r to q which points to p is"<<" " << *r<<endl;
    cout<<"address pointed by r to q to p which points to location where 10 is stored  is"<<" " << **r<<endl;
    cout<<"value at the address pointed by r to q to p which points to the value stored by a is"<< " "<<***r<<endl;
    return 0;
    
}
