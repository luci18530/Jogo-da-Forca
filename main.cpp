#include <iostream>
#include <cstdio>
#include<string>
#include<cstdlib>
using std::string;
using std::getline;
using namespace std;

void clear (){
  int c;
  for (c=0;c<100;c++){
    cout<< "\n";
  }
}

void exibirboneco (int qtderros){

  cout << "\n_________________\n\n";

  if (qtderros == 0){
    cout << "|-----    " << "\n"; 
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 1){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 2){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|    |    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 3){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|    |\\   " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 4){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|   /|\\   " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 5){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|   /|\\   " << "\n";
    cout << "|     \\    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 6){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|   /|\\   " << "\n";
    cout << "|   / \\    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  cout << "\n_________________\n\n";
}

void exibirjogo (string frase, string dica, char letraescolhida, int tam, int frasebyte[tam], bool *fail, bool *win){
  int n;
  int qtdacertos=0;
  *fail = true;

  cout << "Dica: " << dica << "\n\n";
  cout << "Palavra: ";

  for (n = 0;n < tam; n++){
      if (letraescolhida == frase[n] && frasebyte[n] != true){
        frasebyte[n] = true;
        *fail = false;
        
      }

    }

  for (n = 0;n < tam; n++){
    if (frasebyte[n] == true) {
      cout << frase[n];
    }

    else {
      cout << "-";
    }
  }

    for (n=0;n<tam;n++){
      if (frasebyte[n] == true){
        qtdacertos++;
      }
    }

    if (qtdacertos >= tam){
      *win = true;
    }

  }

int main() {
   sair:
  int opcini;
  int tam;
  int n;
  int opcpalavra;
  int qtderros = 0;
  int qtdacertos = 0;
  int limerros = 5;
  bool fail = false;
  bool win = false;
  string frase;
  string dica;
  
  char letraescolhida = '0'; 

  cout << "BEM VINDO AO JOGO DA FORCA\n--------------------------\nDigite a opção:\n" << "1- Jogar\n2- Sair\n--------------------------\nSua escolha: ";
  
  while (opcini != 2){
   
  cin >> opcini;
  clear();
  if (opcini == 1){
    volta:
    cout << "Selecione um numero de 1 a 10, cada numero é uma palavra diferente\nSua escolha: ";
    cin >> opcpalavra;
    clear();

    if (opcpalavra == 1){frase = "CARRO"; dica = "Veiculo";}
    if (opcpalavra == 2){frase = "BANANA"; dica = "Alimento";}
    if (opcpalavra == 3){frase = "VENEZUELA"; dica = "País";}
    if (opcpalavra == 4){frase = "ITAQUAQUECETUBA"; dica = "Cidade";}
    if (opcpalavra == 5){frase = "SATURNO"; dica = "Planeta";}
    if (opcpalavra == 6){frase = "MAMUTE"; dica = "Animal";}
    if (opcpalavra == 7){frase = "SIFILIS"; dica = "DST";}
    if (opcpalavra == 8){frase = "POTASSIO"; dica = "Elemento quimico";}
    if (opcpalavra == 9){frase = "REALISTA"; dica = "Adjetivo";}
    if (opcpalavra == 10){frase = "MORREU"; dica = "Verbo";}

    else {
      cout << "Opção Indisponivel - ";
      cout << "Presione qualqer tecla para voltar ao inicio\n";
      cin.ignore();
      cin.get();
      clear();
      goto volta;
    }

  // STRLEN 
  for (n = 0; n<64; n++){
    if (frase[n] == '\0'){
      tam = n;
      break;
    }
  }

  int frasebyte[tam];
  // falsear toda a frasebyte
  for (n = 0; n < tam; n++){
    frasebyte[n] = false;
  } 

  string tentativa[tam];
  for (n = 0; n < tam; n++){
    tentativa[n] = " ";
  }

  while (1){
 
    exibirjogo(frase, dica, letraescolhida, tam, frasebyte, &fail, &win);
    // NÃO É UM BUG É UM RECURSO
    if (fail == true){
      qtderros++;
    }
    exibirboneco(qtderros);

    // VITORIA
    if (win == true){
      cout << "---------------\n";
      cout << "Você Ganhou !!!\n";
      cout << "---------------\n";
      cout << "Presione qualqer tecla para voltar ao inicio";
      cin.ignore();
      cin.get();
      clear();
      goto sair;
    }

    // DERROTA
    if (qtderros > limerros){
      cout << "---------------\n";
      cout << "Você Perdeu !!!\n";
      cout << "---------------\n";
      cout << "Presione qualqer tecla para voltar ao inicio";
      cin.ignore();
      cin.get();
      clear();
      goto sair;
    }

    cout << "\nEscolha uma letra (MAIÚSCULA) : ";
    cin >> letraescolhida;
    
    clear();
  }
  }

  if (opcini == 2){
    clear();
    cout << "Obrigado por jogar, tenha um bom dia !!";
  }
}
}