#include <iostream>
using namespace std;

void cartas(int arr[]){
  for (int i=0; i<5; i++){
    cin >> arr[i];
  }
}

int sort(int arr[], int size=5){

  int dezena;

  int i, j, temp;

  for (i = 0; i < size-1; i++){
    for (j = i+1; j < size; j++){
      if (arr[i]>arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
      }
    }
  }

  dezena = (arr[4] * 10) + arr[3];

  return dezena;
  
}


int main() {

  int jog1[5];
  int jog2[5];

  cout << "Insira as cartas do jogador 1:\n";
  cartas(jog1);

  cout << "Insira as cartas do jogador 2:\n";
  cartas(jog2);

  int jogo1 = sort(jog1);
  int jogo2 = sort(jog2);

  if (jogo1 > jogo2){
    cout << "O jogador 1 venceu (" << jogo1 << " x " <<  jogo2 << ")\n";
  } else if ( jogo1 == jogo2){
    cout << "Deu empate (" << jogo1 << " x " << jogo2 << ")\n";
  } else {
    cout << "O jogador 2 venceu (" << jogo1 << " x " << jogo2 << ")\n";
  }
  
  
}