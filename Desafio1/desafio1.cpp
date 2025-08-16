#include <iostream>
#include <string>
using namespace std;

class Livro {
    private:
    string titulo;
    string autor;
    double preco;
    
    public:
    Livro (string t, string a, double p) {
        titulo = t;
        autor = a;
        preco = p;
    }
    
    void alterarPreco(double novoPreco) {
        preco = novoPreco;
    }
    
    void exibirDados(){
        cout << "Título: " << titulo << endl;
        cout << "Autor(a): " << autor << endl;
        cout << "Preço (em R$): " << preco << endl;
    }
};

int main() {
    Livro l1("Fantasma da Opera", "Gaston Leurox", 59.90);
    Livro l2("Dracula", "Bram Stoker", 85.90);
    
    l1.exibirDados();
    l2.exibirDados();
    
    l1.alterarPreco(69.90);
    //cout <<"Após a alteração: " << novoPreco << endl;
    l1.exibirDados();
    
    l2.alterarPreco(79.90);
    //cout <<"Após a alteração: " << novoPreco << endl;
    l2.exibirDados();
    
    return 0;
}