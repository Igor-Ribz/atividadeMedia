//estruturas condicionais
//if else <-
//switch case

 
//Leia quatro números (N1, N2, N3, N4) e o nome do aluno e o sexo, correspondente às
//quatro notas de um aluno. Calcule a média simples. Para cada uma destas notas,
//mostre esta média acompanhada pela mensagem "Media: ". Se esta média for maior
//ou igual a 7.0, imprima a mensagem "'nome do aluno', 'sexo, aprovado.".
//Se a média calculada for inferior, imprima a mensagem "'nome do aluno'
//reprovado.".
//A impressão da média deve ser feita com apenas 1 cada decimal.
 

#include<stdio.h> // comandos de entrada e saida (print e scanf)
int main(){
	
	double n1, n2, n3, n4, media; //%Lf double = long float
	char sexo; //%c
	char nomeAluno[20];
	
	//scanf multiplo -scanf multiplo exemplo :("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
      	printf("Olá, Digite a primeira nota: ");
	scanf("%lf", &n1);
	
	 	printf("Olá, Digite a segunda nota: ");
	scanf("%lf", &n2);
	
	 	printf("Olá, Digite a terceira nota: ");
	scanf("%lf", &n3);
	 
	 	printf("Olá, Digite a quarta nota: ");
	scanf("%lf", &n4);
	
	     printf("Digite o sexo:");
	scanf("%c", &sexo);
	
	
     	printf("Digite o nome");
	scanf("%s", &nomeAluno);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("Media: %.1lf", media); // 1 casa decimal para printf
	
	/* 
	if (condição)
	codigo da condição verdadeira; 
	else codigo da condição falsa
	*/
	//"nome do aluno", "sexo", "aprovado"
	if (media >=7){
	   printf("%s, %c, aprovado com media %.1lf\n", nomeAluno, sexo, media);
        }
			else { printf ("%s, %c, Reprovado com media %.1lf\n", nomeAluno, sexo, media);
		}  // obrigatorio o uso de chaves {}, quando possuir mais de uma linha de codigo.
	      //caso tenha somente 1 linha de comando não é necessário.


	return 0;
}















