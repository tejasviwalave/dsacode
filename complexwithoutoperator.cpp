#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(float r,float i){
        real=r;
        imag=i;
    }
    ~Complex(){}

    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex add(Complex c){
        return Complex(real+c.real,imag+c.imag);
    }
    Complex subtract(Complex c){
        return Complex(real-c.real,imag-c.imag);
    }
    Complex multiply(Complex c){
        float r=real*c.real-imag*c.imag;
        float i=real*c.imag+imag*c.real;
        return Complex(r,i);
    }
};
int main(){
    Complex c1(7,5),c2(3,2);
    cout<<"first complex number is: ";
    c1.display();
    cout<<"second complex number is: ";
    c2.display();

    Complex sum=c1.add(c2);
    cout<<"sum is: ";
    sum.display();

    Complex diff=c1.subtract(c2);
    cout<<"difference is: ";
    diff.display();

    Complex prod=c1.multiply(c2);
    cout<<"product is: ";
    prod.display();

    return 0;
}


//output: PS C:\Users\student\Desktop\tejasvi c++> cd "c:\Users\student\Desktop\tejasvi c++\" ; if ($?) { g++ complexwithoutoperator.cpp -o complexwithoutoperator } ; if ($?) { .\complexwithoutoperator }
first complex number is: 7+5i
second complex number is: 3+2i
sum is: 10+7i
difference is: 4+3i
product is: 11+29i
PS C:\Users\student\Desktop\tejasvi c++> 



