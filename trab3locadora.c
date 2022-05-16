//Hatch: R$50,00 por dia.

//Premium: R$75,00 por dia.

//Utilitário: R$ 85,00 por dia.

//Se o cliente aluga
//um carro Premium ou Utilitário por 10 a 15 dias, terá 10% de desconto. Se alugar um carro
//Hatch por 15 ou mais dias, terá 5%. Junto com o valor do carro, o sistema deve calcular o valor
//do seguro a ser pago, de acordo com a seguinte tabela:

//Hatch: R$100,00 por dia ou R$ 1200,00, se o aluguel for mais de 10 dias.

//Premium: R$120,00 por dia, ou R$ 1800,00 se o aluguel for mais de 10 dias.

//Utilitário: R$ 125,00 por dia, ou R$ 1850,00 se o aluguel for mais de 10 dias.

//Por fim, o sistema deve verificar se o cliente deseja algum adicional. As opções são:
//Tag pedágio: R$10,00 por dia.
//Cadeira de bebê: R$80,00 fixo.
//Ao fim de cada venda o sistema deve apresentar o custo total, detalhando o valor do carro, do
//seguro e adicionais (se houverem). O sistema deve possibilitar fazer diversas vendas, e só
//encerra quando o usuário solicitar.
#include <stdio.h>
int main()
{
  char continuar,adicional;
  int carro,dias,desconto,adicionalescolha;
  float preco2=75.00,preco1=50.00,preco3=85.00,precocarro,precoadicional,precototaladicional,precoadicionalpedagio,precoadicionalbebe,precoseguro,precototal,precocarrodesconto,precocarrodesconto1;
  printf("Você quer começar? (s ou n):");
  scanf(" %c",&continuar);
  while(continuar=='s')
  {
    printf("Bem vindo a locadora ARROZ nos possuimos 3 tipos de veículos disponiveis:\n 1. Hatch: R$50,00/dia\n 2. Premium: R$75,00/dia\n 3. Utilitario: R$85,00/dia\n");
    printf("Escolha um veiculo para alugar utilizando os numerais no inicio das opções: ");
    scanf("%d",&carro);
    if(carro>=4)
    printf("valor invalido\n");
    else if(carro<=0)
    printf("valor invalido\n");
    else if(carro>=1 && carro<=3)
    {
      printf("Insira por quanto tempo voce quer alugar o veiculo (dias): ");
      scanf("%d",&dias);
      if(carro==1 && dias>=15)//hatch com desconto dos 15 dias mais
      {
        precocarro=preco1*dias;
        precocarrodesconto=precocarro*1.05;
        precocarrodesconto1=precocarrodesconto-precocarro;
        precocarro=precocarro-precocarrodesconto1;
        precoseguro=1200;
        precocarro=precocarro+precoseguro;
      }
      else if(carro==1 && dias<=15 && dias>=10)//hatch sem desconto dos 15 dias mais e seguro 10 dias mais
      {
        precocarro=preco1*dias;
        precoseguro=1200;
        precocarro=precocarro+precoseguro;
        
      }
      else if(carro==1 && dias<=9)//hatch sem desconto dos 15 dias mais e sem seguro 10 dias mais
      {
        precocarro=preco1*dias;//preco da diaria do carro=preco carro X dias
        precoseguro=100*dias;
        precocarro=precocarro+precoseguro;//preco diaria do carro+preco do seguro=preco da diaria do carro+(valor do seguro X dias)  
      }
      else if(carro==2 && dias>15)//premium sem desconto dos 10 a 15 dias(mais q 15) + seguro 1800 por mais de 10 dias
      {
        precoseguro=1800;
        precocarro=precoseguro+(preco2*dias);//valor total premium=preco do seguro mais q 10 dias+(75 diaria do premium X dias alugados)
      }
      else if(carro==2 && dias>=10 && dias<=15)//premium com desconto dos 10 a 15 dias mais e seguro 10 dias mais
      {
        precocarro=preco2*dias;
        precocarrodesconto=precocarro*1.10;
        precocarrodesconto1=precocarrodesconto-precocarro;
        precocarro=precocarro-precocarrodesconto1;
        precoseguro=1800;
        precocarro=precocarro+precoseguro;       
      }
      else if(carro==2 && dias<=9)//premium sem desconto dos 10 a 15 dias mais e sem seguro 10 dias mais
      {
        precocarro=preco2*dias;//preco da diaria do carro=preco carro X dias
        precoseguro=120*dias;
        precocarro=precocarro+precoseguro;//preco diaria do carro+preco do seguro=preco da diaria do carro+(valor do seguro X dias)
      }
        else if(carro==3 && dias>15)//utilitario sem desconto dos 10 a 15 dias(mais q 15) + seguro 1800 por mais de 10 dias
      {
        precoseguro=1850;
        precocarro=precoseguro+(preco3*dias);//valor total utilitario=preco do seguro mais q 10 dias+(75 diaria do utilitario X dias alugados)
      }
      else if(carro==3 && dias>=10 && dias<=15)//utilitario com desconto dos 10 a 15 dias mais e seguro 10 dias mais
      {
        precocarro=preco3*dias;
        precocarrodesconto=precocarro*1.10;
        precocarrodesconto1=precocarrodesconto-precocarro;
        precocarro=precocarro-precocarrodesconto1;
        precoseguro=1850;
        precocarro=precocarro+precoseguro;       
      }
      else if(carro==3 && dias<=9)//utilitario sem desconto dos 10 a 15 dias mais e sem seguro 10 dias mais
      {
        precocarro=preco3*dias;//preco da diaria do carro=preco carro X dias
        precoseguro=125*dias;
        precocarro=precocarro+precoseguro;//preco diaria do carro+preco do seguro=preco da diaria do carro+(valor do seguro X dias)
      }
       else if(carro==3 && dias>=10 && dias<=15)
      {
        precocarro=preco3*dias;
        precocarrodesconto=precocarro*1.10;
        precocarrodesconto1=precocarrodesconto-precocarro;
        precocarro=precocarro-precocarrodesconto1;
        precoseguro=1850;
        precocarro=precocarro+precoseguro;
      }
      printf("Você deseja algum adicional? os adicionais incluem pedágio e cadeiras de bebê. ");
      scanf(" %c",&adicional);
      if(adicional=='n')
      {
        precototal=precocarro+precoseguro;
        printf("O custo total foi R$%.2f\nValor total carro R$%.2f\nValor total seguro R$%.2f\nAdicionais não escolhidos. \n",precototal,precocarro,precoseguro);
      }
      while(adicional=='s')
      {
        printf("Existem dois adicionais \n1. Pedágio: R$10,00/dia\n2. Cadeira de bebê: R$80,00/fixo\n3. Ambos\nQual desses você deseja?");
        scanf(" %d",&adicionalescolha);
        if(adicionalescolha==1)
        {
          precoadicional=10*dias;
          precototal=precocarro+precoadicional;
          precototaladicional=precoadicional;
        }
        else if(adicionalescolha==2)
        {
          precoadicionalbebe=80;
          precototal=precocarro+precoadicionalbebe;
          precototaladicional=80;
        }
        else if(adicionalescolha==3)
        {
          precoadicional=10*dias;
          precoadicionalbebe=80;
          precototaladicional=precoadicionalbebe+precoadicional;
          precototal=precocarro+precoadicionalbebe+precoadicional+precoseguro;
        }
        printf("O custo total foi R$%.2f\nValor total carro R$%.2f\nValor total seguro R$%.2f\nValor total adicionais R$%.2f \n",precototal,precocarro,precoseguro,precototaladicional);
      break;
      }
    }
printf("voce quer recomeçar? ");
scanf(" %c",&continuar);
  }
return 0; 
}