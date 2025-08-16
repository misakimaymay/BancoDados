#include <iostream>
#include <string>
using namespace std;

class Filme {
	private:
	string titulo;
	string diretor;
	double duracao;
	
	public:
	Filme (string t, string di, double du){
	titulo = t;
	diretor = di;
	duracao = du;
	}
	
	void alterarDuracao(double novaDuracao){
		duracao = novaDuracao;
	}
	
	void exibirDados(){
		cout << "Título: " << titulo << endl;
		cout << "Diretor(a): " << diretor << endl;
		cout << "Duração: " << duracao << "min." << endl;
	}
};

int main() {
	Filme f1("Fantasma da Ópera", "Joel Schumacher", 143);
	Filme f2("Drácula de Bram Stoker", "Francis Ford Coppola", 127);
	
	f1.exibirDados();
	f2.exibirDados();
	
	f1.alterarDuracao(144); 
	f1.exibirDados();
	
	f2.alterarDuracao(128); 
	f2.exibirDados();
	return 0;
}