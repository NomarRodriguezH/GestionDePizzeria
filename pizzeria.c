#include<stdio.h>
#include<stdlib.h>

// SUCURSAL 1 ES NORTE
// SUCURSAL 2 ES OCCIDENTE
// SUCURSAL 3 ES ORIENTE

int main()
{
    float distanciaNO, distanciaOC, distanciaOR, distmin, costoEnvio, jamon, champinones, pina, tofu, salmon,peperoni, costo, descuento,costoinc;
    float pizza, Salsa, Mozzarella, Orilla, suma, pizzas, costocliente, costopedido,IVA,menorcosto, promocion,incrementopiz,aumento, incrementoing;
    int  recaudado, tiempo,costopizza, pedidos;
    int tipo, Vegetariana, extras, x, y, pizcercana,pizzas2, pizzas1, Cliente, totalPizzas;

        totalPizzas=0;
        Cliente=1;
        do{
                printf("\tCliente %i\n", Cliente);
                costocliente=0;

                do {
                printf("Dame tus coordenadas entre 0 y 30 (x) :\n");
                scanf("%i", &x);
            } while (x < 0 || x > 30);

                do {
                printf("Dame tus coordenadas entre 0 y 30 (y) :\n");
                scanf("%i", &y);
                } while (y < 0 || y > 30);

                    distanciaNO = sqrt(pow(x - 12, 2) + pow(y - 20, 2));
                    distanciaOC = sqrt(pow(x - 1, 2) + pow(y - 5, 2));
                    distanciaOR = sqrt(pow(x - 16, 2) + pow(y - 10, 2));

                    distmin = distanciaNO;
                    pizcercana = 1;

                    if (distanciaOC < distmin) {
                            distmin = distanciaOC;
                                pizcercana = 2;
                    }


                                    if (distanciaOR < distmin) {
                                            distmin = distanciaOR;
                                                pizcercana = 3;
                                        }

                                                printf("La Pizzeria mas cercana (%i,%i) es la Sucursal %i\n", x, y, pizcercana);
                                                printf("\n");



 do{


            printf("Que tipo de pizza quieres 1) Vegetariana 2) No Vegetariana\n");
            scanf("%i",&tipo);
            switch(tipo){
            case 1:

                printf(" Su pizza es Vegetariana\n");
                printf("De que ingrediente quiere su pizza 1) Pina 2) Champinones 4) Tofu\n");
            break;

            case 2:
                printf("Su pizza es No Vegetariana\n");
                printf("De que ingrediente quiere su pizza 3) Jamon 5) Peperoni 6) Salmon\n");
            break;

        }
                printf("\n");
                scanf("%i",&pizzas1);

                switch(pizzas1){
                case 1:
                    pizzas1=110;
                         printf("Son $110 de la pizza de Pina (costo base) \n");
                break;
                case 2:
                    pizzas1=70;
                         printf("Son $70 de la pizza de Champinones (costo base) \n");
                break;
                case 4:
                    pizzas1=95;
                            printf("Son $95 de la pizza de Tofu (costo base) \n");
                break;

                }
                switch(pizzas1){
                case 3:
                    pizzas1=110;
                        printf("Son $110 de la pizza de Jamon (costo base) \n");
                break;
                case 5:
                    pizzas1=125;
                        printf("Son $125 de la pizza de Peperoni (costo base) \n");
                break;
                case 6:
                    pizzas1=140;
                        printf("Son $140 de la pizza de Salmon (costo base) \n");
                break;
                }



                printf("\nDeseas incluir ingredientes extras?\n 1) Orilla Rellena\n 2) Mozzarella\n 3) Salsa de Tomate\n ");
                printf("\nCombinaciones Posibles\n 4) Orilla Rellena con Mozzarella\n 5) Orilla Rellena con Salsa de Tomate\n 6) Mozzarella con Salsa de Tomate\n  7) Todos los extras\n 8) Ningun extra\n");
                scanf("%i",&extras);

                switch(extras){
                case 1:
                    extras=25;
                        printf("Son $25 pesos de Orilla Rellena (costo base) \n");
                break;
                case 2:
                    extras=20;
                        printf("Son $20 pesos de Mozzarella (costo base)\n");
                break;
                case 3:
                    extras=15;
                         printf("Son $15 pesos de Salsa de Tomate (costo base)\n");
                break;
                case 4:
                    extras=45;
                        printf("Son $45 pesos de Orilla Rellena con Mozzarella (costo base)\n");
                break;
                case 5:
                    extras=40;
                        printf("Son $40 pesos de Orilla Rellena con Salsa de Tomate (costo base)\n");
                break;
                case 6:
                    extras=35;
                        printf("Son $35 pesos de Mozzarella con Salsa de Tomate (costo base)\n");
                break;

                case 7:
                    extras=60;
                        printf("Son $60 pesos de Todos los ingredientes extras (costo base)\n");
                break;
                case 8:
                    extras=0;
                        printf("Su pizza no incluye ingredientes extras\n");
                break;
                                    printf("\n");
                }
                printf("\n");
            costo=pizzas1+extras;

            if (pizcercana==1) {
                            incrementopiz=10;
                            aumento = pizzas1*(incrementopiz/100);
                            incrementopiz= pizzas1+ aumento;

                            incrementoing=5;
                            aumento= extras*(incrementoing/100);
                            incrementoing=extras+aumento;

                            costoinc=incrementoing+incrementopiz;

        } else if (pizcercana==2) {

                            incrementopiz=5;
                            aumento = pizzas1*(incrementopiz/100);
                            incrementopiz= pizzas1+ aumento;

                            incrementoing=5;
                            aumento= extras*(incrementoing/100);
                            incrementoing=extras+aumento;

                            costoinc=incrementoing+incrementopiz;

        } else if (pizcercana==3) {

                            incrementopiz=0;
                            aumento = pizzas1*(incrementopiz/100);
                            incrementopiz= pizzas1+ aumento;

                            incrementoing=10;
                            aumento= extras*(incrementoing/100);
                            incrementoing=extras+aumento;

                            costoinc=incrementoing+incrementopiz;
        }
                printf("\tSu cuenta es de: %.2f\n", costoinc);


            totalPizzas++;

            if (totalPizzas>=3) {
                descuento= incrementopiz+incrementoing;

                costoinc-=descuento-50;
                printf("Promoción aplicada: La pizza de menor precio es gratis %.2f\n",descuento);

                totalPizzas=0;
            }
              if (totalPizzas==1) {
                costoinc+=50;
                printf("Costo de envio $50 pesos\n");
                }else{
                costoEnvio=0;
                costoinc-=50;
            }

            if(distanciaNO<distanciaOC && distanciaNO<distanciaOR){
                                        tiempo=(distanciaNO*2)+10;


                    }else if(distanciaOC<distanciaNO && distanciaOC<distanciaOR){
                                            tiempo=(distanciaOC*2)+10;

                        }else if(distanciaOR<distanciaNO && distanciaOR<distanciaOC){
                             tiempo=(distanciaOR*2)+10;
                        }
                            printf("\tSe ha tardado %i minutos\n", tiempo);

                            costocliente+=costoinc;

                        printf("\nQuieres otra pizza? 1) Si 2) No\n");
                            scanf("%f",&pizza);


    }while(pizza==1);
                        costopedido+= costocliente;


                    printf("\tEl subtotal de las pizzas son de: $%.2f\n", costocliente);


                        printf("\tQuieres hacer otro pedido?\n 1) Si\n 2) No\n");
                        scanf("%i", &pedidos);
                        Cliente++;
                        pizza=0;
                        totalPizzas=0;
        }while(pedidos==1);

        printf("Se recaudo al dia en la pizzeria fue de: $%.2f\n", costopedido);
    return 0;
}
