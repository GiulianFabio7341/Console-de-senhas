
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h;
    cout<<"Bem vindo ao processo de compras do shooping Malte,nós nos interessamos no seu bem estar e sua privacidade ";
    cout<<",por isso estamos sempre te protegendo contra roubo ou furto de dados bancários,estaremos atentos,obrigado pela escolha!"<<endl;
    cout<<"Digite a senha do seu cartão visa,mastercard,caixa : ";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
        cout<<"Sua senha = "<<a<<b<<c<<d<<endl;
        cout<<"Confirme a senha = ";
        cin>>e>>f>>g>>h;
        if(e==a&&f==b&&g==c&&h==d){
            cout<<"Senha Cadastrada,Aproveite sua compra do Malte!"<<endl;
        }
        else{
            cout<<"Desculpe,sua senha está incorreta amigo(a),tente novamente!";
            cout<<" Você possui no momento (3) chances restantes"<<endl;
        
            cout<<"Digite a sua senha:";
            cin>>a;
            cin>>b;
            cin>>c;
            cin>>d;
            cout<<"Sua senha = "<<a<<b<<c<<d<<endl;
        cout<<"Confirme a senha = ";
        cin>>e>>f>>g>>h;
        if(e==a&&f==b&&g==c&&h==d){
            cout<<"Senha Cadastrada,Aproveite sua compra do Malte!"<<endl;
        }
        else{
            cout<<"Desculpe,sua senha está incorreta amigo(a),tente novamente!";
            cout<<" Você possui no momento (2) chances restantes"<<endl;
        
            cout<<"Digite a sua senha:";
            cin>>a;
            cin>>b;
            cin>>c;
            cin>>d;
            cout<<"Sua senha = "<<a<<b<<c<<d<<endl;
        cout<<"Confirme a senha = ";
        cin>>e>>f>>g>>h;
        if(e==a&&f==b&&g==c&&h==d){
            cout<<"Senha Cadastrada,Aproveite sua compra do Malte!"<<endl;
        }
        else{
            cout<<"Desculpe,sua senha está incorreta amigo(a),tente novamente!";
            cout<<" Você possui no momento (1) chances restantes"<<endl;
        
            cout<<"Digite a sua senha:";
            cin>>a;
            cin>>b;
            cin>>c;
            cin>>d;
            cout<<"Sua senha = "<<a<<b<<c<<d<<endl;
        cout<<"Confirme a senha = ";
        cin>>e>>f>>g>>h;
        if(e==a&&f==b&&g==c&&h==d){
            cout<<"Senha Cadastrada,Aproveite sua compra do Malte!"<<endl;
        }
        else{
            cout<<"[ATENÇÃO,CARTÃO BLOQUEADO],obrigado por está conosco,tente novamente outro dia!";
        }
        }
        }
        }
        
    return 0;
}
