# Exercicios de Logica de programação C/C++ usando GRAPHICS.H e MINWIN 
## Descrição
Resolução em C/C++ de dois exercicios usando Graphics.h e Minwin 
## Questões Avaliativas da universidade Estacio:
https://drive.google.com/file/d/168U9dF0hU2l4qLyk-YrPBnrj38-OdD-I/view?usp=sharing
## Roteiro de instalação do Graphics.h 
A biblioteca graphics.h foi adaptada para funcionar no compilador do Dev C++, que
não permite chamadas ao sistema baseadas em DOS 16 bits, como o Turbo C++ pode
fazer. Para importar a biblioteca para o Dev C++ Versão 5.11 devem ser seguidos os
seguintes passos:

1. Baixar o driver adaptado em
https://drive.google.com/file/d/14BLoBy0PA_A7_gdgO6UWiLEzrMPr7Hua/view
(clicar em download na página que se abre).

2. Descompactar o arquivo “Graphics in Dev C++.zip”.

3. Copiar os arquivos 6-ConsoleAppGraphics.template e
ConsoleApp_cpp_graph.txt (figura 1) para a pasta template dentro da pasta
onde o Dev C++ está instalado, em geral nos arquivos de programa do
Windows (C:\Program Files (x86)\Dev-Cpp\Templates)

4. Copiar os arquivos graphics.h e winbgim.h para a pasta include do compilador
que será usado (32 bits) em geral nos arquivos de programa do Windows
(C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include).

5. Copiar o arquivo libbgi.a para a pasta lib e para a pasta lib32 do compilador
que será usado (32 bits) em geral nos arquivos de programa do Windows
(C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\lib) e
(C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\lib32).

6. Criar um projeto no Dev C++ com as opções Console Graphics e C++ Project,
como mostrado na figura 2 (apesar de ser uma biblioteca de C, a opção C
project não funciona).

7. Escolher o compilador de 32 bits, como mostrado na figura 3 (TDM-GCC 4.9.2
32-bit Release).

Agora no arquivo main.cpp do projeto é possível escrever programas que acessem
esta biblioteca graphics.h. O exemplo abaixo realiza elementos gráficos na tela.

#include<graphics.h> <br/>
int main (){ <br/>
initwindow (800, 800); <br/>
int left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50; <br/>
rectangle(left, top, right, bottom); <br/>
circle(x, y, radius); <br/>
bar(left + 300, top, right + 300, bottom); <br/>
line(left - 10, top + 150, left + 410, top + 150); <br/>
ellipse(x, y + 200, 0, 360, 100, 50); <br/>
outtextxy(left + 100, top + 325, "Meu programa grafico"); <br/>
getch(); <br/>
}

Pra tirar mais duvidas segue link do roteiro com passos a passos com imagens: 
https://drive.google.com/file/d/1V3_RAYXWv2TX16LCeKiuGq9f8MDUFYW4/view?usp=sharing

## link de instalação do MinWin:
https://miniwin.readthedocs.io/en/latest/Utilizacion.html
© Copyright 2011, Pau Fernández (@pauek).
## Enunciados
### Estruturas sequências 
#### [Questão 1](Questão Avaliativa 1/main.cpp)
1) Realize os passos do Roteiro 1 e configure a Graphics.h no Devc++. O exemplo utilizado deve ser o que consta no arquivo de orientação. Após realizar o exemplo, elabore um projeto que permita o usuário escolher a forma geométrica que deseja desenhar, bem como as respectivas dimensões.

#### [Questão 2](Questão Avaliativa 2/main.cpp)
2) Realize os passos descritos na instalação do miniwin para configuração e exemplificação da biblioteca MinWin.
