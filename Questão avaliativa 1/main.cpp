#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

   /*Será de livre vontade na aba de escolhas o usuário escolher a forma desejada e
	na aba de escolhas será dado o resultado da area das formas geometricas escolhidas e na 
	outra aba que será aberta será dado a forma geometrica desenhada*/
	
	int main (){
	printf("Universidade Estacio\n");
	printf("Disciplina : Programacao Basica em C\n");
	printf("Alunos: Joey e Bruno\n\n");
	int dimensao,
	left= 100,
	top= 100,
	right= 200,
	bottom= 200,
	radius= 50,
	
	x= 300,
	y= 150;
	
	printf("---> Escolha uma das formas disponiveis <--- \n");
	printf("1 --> Circle \n");
	printf("2 --> Bar \n");
	printf("3 --> Rectangle \n");
	printf("4 --> ellipse \n");
	printf("Escolha algum numero da lista: ");
	scanf("%i", &dimensao);
	
	if(dimensao == 1){
		// CIRCLE --->
		initwindow (800, 800);
		circle(x, y, radius);
   		int r = 8;
   		//calculo da area do circulo
   		float area = (3.14)*r*r;
   		//resultado
   		printf("A area do circulo e: %f",area);
		printf("\n");
		getch();
	} 
		else if(dimensao == 2){
		// BAR --->
		initwindow (800, 800);
		bar(left + 200, top, right + 200, bottom);
		float lado = 5,  area;
		//calculo da area do quadrado
		area = lado*lado;
		//resultado
		printf("A area do quadrado e: %2.f \n", area);
		printf("\n");
		getch();
		
	}  else if(dimensao == 3){
		// Rectangle --->
		initwindow (800, 800);
		rectangle(left + 200, top, right + 300, bottom);
		int comprimento = 5;
		int largura= 4;
		int area;		
		//calculo da area do retangulo
   		area = comprimento * largura;
   		//resultado
   		printf("Area do retagunlo e : %d", area);
		getch();
		
	}  else if(dimensao == 4){
		// Ellipse --->
		initwindow (800, 800);
		ellipse(x, y + 200, 0, 360, 100, 50);
		#define PI 3.141592
   	    float maior = 8;
		float menor = 4; 
		float area;
   	    //Calculo da area da ellipse
        area = PI * maior * menor;
    	//resultado 
    	printf("Area da ellipse e = %0.4f", area);
		getch();
			
	} else{
		printf("Nenhuma Forma correspondente");
		return 0;
	}
	
	return 0;
}
