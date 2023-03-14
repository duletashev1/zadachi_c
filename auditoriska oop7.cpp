#include <iostream>
#include <cmath>
using namespace std;
class triangle{
public:
    float a,b,c;
public:
    float plostina(){
float s= (a+b+c)/2;
float p= ::sqrt(s*(s-a)*(s-b)*(s-c));
return p;
    }

};
int main() {
triangle triagolnik;
triagolnik.a=9;
        triagolnik.b=10;
triagolnik.c=11;
cout<<"Za triagolnikot so strani: "<<triagolnik.a<<" "<<triagolnik.b<<" "<<triagolnik.c<<" "<<
"plostinata e= "<<triagolnik.plostina()<<endl;
}
