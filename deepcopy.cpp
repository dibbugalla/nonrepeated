#include<cstring>
#include<iostream>
using namespace std;
class deep{
char *s;
public:
deep(const char *p)
{
s=new char[sizeof(p)+1];
strcpy(s,p);
}


deep(deep &temp)
{
s=new char[strlen(temp.s)+1];
strcpy(s,temp.s);
}


void get_data(){
cout<<"string"<<s<<endl;
}

void modify(){
s[0]='s';
}
};


int main(){
deep s1("vector"),s2(s1);
s1.get_data();
s2.get_data();
s1.modify();
cout<<".................."<<endl;
s1.get_data();
s2.get_data();
}
