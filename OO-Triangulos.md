Exemplo 1: Triângulo retângulo virado para a direita
```cpp
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Digite o número de linhas: ";
   cin >> n;
   
   for(int i=1; i<=n; i++) {
      for(int j=1; j<=i; j++) {
         cout << "* ";
      }
      cout << endl;
   }
   
   return 0;
}
```
Exemplo de saída para n=5:
```
*
* *
* * *
* * * *
* * * * *
```

Exemplo 2: Triângulo retângulo virado para a esquerda
```cpp
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Digite o número de linhas: ";
   cin >> n;
   
   for(int i=1; i<=n; i++) {
      for(int j=1; j<=n-i; j++) {
         cout << "  ";
      }
      for(int j=1; j<=i; j++) {
         cout << "* ";
      }
      cout << endl;
   }
   
   return 0;
}
```
Exemplo de saída para n=5:
```
        *
      * *
    * * *
  * * * *
* * * * *
```

Exemplo 3: Triângulo equilátero
```cpp
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Digite o número de linhas: ";
   cin >> n;
   
   for(int i=1; i<=n; i++) {
      for(int j=1; j<=n-i; j++) {
         cout << " ";
      }
      for(int j=1; j<=2*i-1; j++) {
         cout << "*";
      }
      cout << endl;
   }
   
   return 0;
}
```
Exemplo de saída para n=5:
```
    *
   ***
  *****
 *******
*********
```


_________________________________________________________________________________________________________________________
Claro, aqui estão os três triângulos virados de cabeça para baixo:

1. Triângulo retângulo invertido:

```
*****
****
***
**
*
```

Código em C++:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

2. Triângulo equilátero invertido:

```
*****
 ***
  *
```

Código em C++:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 3;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

3. Triângulo de Pascal invertido:

```
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
```

Código em C++:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 5;

    int coef = 1;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << coef << " ";
            coef = coef * (i - j) / j;
        }
        cout << endl;
    }

    return 0;
}
```

____________________________________________________________________________________________-
Claro! Segue abaixo as impressões dos três triângulos virados de cabeça para baixo usando números de 1 a n:

1. Triângulo retângulo à esquerda:
```cpp
Digite um valor para n: 5
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
```

2. Triângulo retângulo à direita:
```cpp
Digite um valor para n: 5
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 
```

3. Triângulo equilátero:
```
Digite um valor para n: 5
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
```

_________________________________________________________________________________________
Para imprimir um triângulo invertido para a direita com números de 1 a n, podemos utilizar o seguinte código em C++:

```cpp
#include <iostream>

using namespace std;

void printTrianguloInvertidoDireita(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printTrianguloInvertidoDireita(n);
    return 0;
}
```

Para imprimir um triângulo retângulo para a esquerda com números de 1 a n, podemos utilizar o seguinte código em C++:

Para imprimir um triângulo invertido para a direita com números de 1 a n, podemos utilizar o seguinte código em C++:

```cpp
#include <iostream>

using namespace std;

void printTrianguloInvertidoDireita(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printTrianguloInvertidoDireita(n);
    return 0;
}
```

Para imprimir um triângulo retângulo para a esquerda com números de 1 a n, podemos utilizar o seguinte código em C++:

```cpp
#include <iostream>

using namespace std;

void printTrianguloRetanguloEsquerda(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printTrianguloRetanguloEsquerda(n);
    return 0;
}
``` 

Note que os dois exemplos utilizam loops aninhados para percorrer a matriz que representa o triângulo e imprimem os números ou espaços em branco correspondentes.
