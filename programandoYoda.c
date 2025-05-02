
#include <stdio.h>
#include <stdlib.h>

int main(){
/*A notação YODA


--------------------------------

Abaixo está um exemplo de como a maioria dos programadores configura um laço condicional:
*/

int ret = 0;

if (ret == 42 ){}
    printf("QUALQUER COISA");

// Funciona, mas caso ocorra um erro de sintaxe como usar uma = ao invés de ==, dá erro
if (ret = 42 ){}
    printf("QUALQUER COISA");

// Para diminuir as chances desse tipo de erro, pode-se inverter a lógica, como abaixo:
if (42 == ret ){}
    printf("QUALQUER COISA");
// Assim, se por acaso você esquecer a segunda =, vai dar erro de sintaxe e não erro de lógica, oque garante que o erro será identificado mais facilmente sem riscos



    return 0;
}