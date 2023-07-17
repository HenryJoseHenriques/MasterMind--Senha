#include <iostream>
#include <time.h>
using namespace std;

int main(){
srand(time(NULL)); //Srand sincroniza a geração de números aletórios com o relógio do computador.
  
int Menu, r1, r2, r3, r4, n1, n2, n3, n4, posicaoInc = 0, posicaoCor = 0; //A variável "Menu" foi criada para ser utilizada na estrutura Switch/Case para definirmos os botões do jogo em função dela.

cout << "1 - Jogar \n";
cout << "2 - Sobre \n";
cout << "3 - Sair \n";
cin >> Menu;
system("clear");

do {
  switch(Menu){
  
  case 1:
    
    do{
      r1 = rand()%6+1;
      r2 = rand()%6+1;
      r3 = rand()%6+1;
      r4 = rand()%6+1;
    } while(r1 == r2 || r1 == r3 || r1 == r4 || r2 == r3 || r2 == r4 || r3 == r4); // Gera uma série de 4 números aleatórios limitados no intervalo de 1 a 6, que não se repetem. Condição while para evitar que os números se repitam.

     /*cout << r1 << "\n";
       cout << r2 << "\n";
       cout << r3 << "\n";
       cout << r4 << "\n"; 
      A variável tentativa controla o fluxo do jogo, quando o número de tentativas chegar a 0 e o jogador não acertar a senha, ele perde. */
    
    for(int tentativas = 10; tentativas >= 0; tentativas--){
      if (tentativas == 0){
        system("clear");
        cout<< "Suas tentativas acabaram, você perdeu"<<endl;
        cout << "1 - Jogar \n";
        cout << "2 - Sobre \n";
        cout << "3 - Sair \n";
        cin >> Menu;
      }
      else{
        
        cout << "Você possui " << tentativas << " tentativas \n";
        cout << "Digite um código de 4 números entre 1 e 6: \n";
    
        cout << "Digite o 1° número: \n";
        cin >> n1;

        cout << "Digite o 2° número: \n";
        cin >> n2;

        cout << "Digite o 3° número: \n";
        cin >> n3;

        cout << "Digite o 4° número: \n";
        cin >> n4;
       
         /* Essas série de couts descreve a quantidade de tentativas restantes no jogo, a quantidade de números a serem digitados. */

        if (n1 == r1 && n2 == r2 && n3 == r3 && n4 == r4){
        system("clear");
        cout<<"Você venceu"<<endl<<endl;
       
        cout << "1 - Jogar \n";
        cout << "2 - Sobre \n";
        cout << "3 - Sair \n";
          cin >> Menu;
  
             tentativas = 0; //O número de tentativas reinicia, para caso o jogador queira jogar novamente
        }
        else{ 
       
        if(n1 == r1 ){
          posicaoCor++;
        }
        if( n2 == r2 ){
          posicaoCor++;
        }
        if(n3 == r3 ){
          posicaoCor++;
        }
        if( n4 == r4 ){
          posicaoCor++;
        }
        if(n1 == r2 || n1 == r3 || n1 == r4){
          posicaoInc++;
        } 
        if(n2 == r1 || n2 == r3 || n2 == r4){
          posicaoInc++;
        }
        if(n3 == r1 || n3 == r2 || n3 == r4){
          posicaoInc++;
        }
        if(n4 == r1 || n4 == r2 || n4 == r3){
          posicaoInc++;
        }
           /* essa série de if encadeia a condição lógica para descobrir se o número digitado está certo e na posição certa, mas na posição errada. */
    
        cout << posicaoInc << " números digitados estão corretos, mas não estão nas posições corretas" << endl;
        cout << posicaoCor << " números digitados estão corretos e estão nas posições corretas" << endl << endl;
        posicaoInc = 0; //volta a ser 0 para reiniciar a contagem para a próxima tentativa do usuário.
        posicaoCor = 0;
        }
    } 
    }
    
  break;
  
  case 2:

    cout<< "Univali - Engenharia da Computação - 1º semestre - Maio de 2023 \n";
    cout<< "Acadêmicos: Isabella Zermiani Bastos, Milene Emmel, Henry José e Sthephany Araceli Melho Dos Santos."<< "\n";
    cout << "Disciplina: Algoritmos e programação I"<< "\n";
    cout<< "Professor: Rafael Ballottin Martins" << "\n" << "\n"; 

    /*informações sobre o time de programadores*/

    cout << "1 - Jogar \n";
    cout << "2 - Sobre \n";
    cout << "3 - Sair \n";
    cin >> Menu;
    system("clear");
    
  break;
  
}
} while (Menu != 3); //While descreve a condição de encerramento do jogo caso digitem o número 3, que foi o número escolhido como botão de sair do jogo.
  system("clear");
  return 0;
}