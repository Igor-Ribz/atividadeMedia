//estruturas condicionais
//if else <-
//switch case

 
//Leia quatro n�meros (N1, N2, N3, N4) e o nome do aluno e o sexo, correspondente �s
//quatro notas de um aluno. Calcule a m�dia simples. Para cada uma destas notas,
//mostre esta m�dia acompanhada pela mensagem "Media: ". Se esta m�dia for maior
//ou igual a 7.0, imprima a mensagem "'nome do aluno', 'sexo, aprovado.".
//Se a m�dia calculada for inferior, imprima a mensagem "'nome do aluno'
//reprovado.".
//A impress�o da m�dia deve ser feita com apenas 1 cada decimal.
 

#include<stdio.h> // comandos de entrada e saida (print e scanf)
int main(){
	
	double n1, n2, n3, n4, media; //%Lf double = long float
	char sexo; //%c
	char nomeAluno[20];
	
	//scanf multiplo -scanf multiplo exemplo :("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
      	printf("Ol�, Digite a primeira nota: ");
	scanf("%lf", &n1);
	
	 	printf("Ol�, Digite a segunda nota: ");
	scanf("%lf", &n2);
	
	 	printf("Ol�, Digite a terceira nota: ");
	scanf("%lf", &n3);
	 
	 	printf("Ol�, Digite a quarta nota: ");
	scanf("%lf", &n4);
	
	     printf("Digite o sexo:");
	scanf("%c", &sexo);
	
	
     	printf("Digite o nome");
	scanf("%s", &nomeAluno);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("Media: %.1lf", media); // 1 casa decimal para printf
	
	/* 
	if (condi��o)
	codigo da condi��o verdadeira; 
	else codigo da condi��o falsa
	*/
	//"nome do aluno", "sexo", "aprovado"
	if (media >=7){
	   printf("%s, %c, aprovado com media %.1lf\n", nomeAluno, sexo, media);
        }
			else { printf ("%s, %c, Reprovado com media %.1lf\n", nomeAluno, sexo, media);
		}  // obrigatorio o uso de chaves {}, quando possuir mais de uma linha de codigo.
	      //caso tenha somente 1 linha de comando n�o � necess�rio.


	return 0;
}















