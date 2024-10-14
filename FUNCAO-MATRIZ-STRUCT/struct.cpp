#include<iostream>
#include<string>
using namespace std;
struct Pedido{
   string nome;
   float precoItem;
   int quantidadeItem;
};
int main(){
    Pedido p1;
    float valor;

    cout<<"digite o nome do cliente: "<<endl;
    getline(cin,p1.nome);

    cout<<"Digite a quantidade de intens: "<<endl;
    cin>>p1.quantidadeItem;

    cout<<"Digite o preco do item: "<<endl;
    cin>>p1.precoItem;

    cout<<"cliente "<<p1.nome<<" comprou "<<p1.quantidadeItem<<" itens com o valor de: "<<p1.precoItem<<" R$"<<endl;

   valor=p1.quantidadeItem*p1.precoItem;
   cout<<"o valor do pedido e: "<<valor<<endl;

    return 0;
}
