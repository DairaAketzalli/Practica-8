 #include <stdio.h>

main(){
 enum mesAnio {ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};
 int op;
 	printf("Ingrese el mes: \n");
 	printf("1) Enero.\n");
 	printf("2) Febrero.\n");
 	printf("3) Marzo.\n");
 	printf("4) Abril.\n");
 	printf("5) Mayo.\n");
 	printf("6) Junio.\n");
  	printf("7) Julio.\n");
  	printf("8) Agosto.\n");
	printf("9) Septiembre.\n");
    printf("10) Octubre.\n");
    printf("11) Noviembre.\n");
	printf("12) Diciembre.\n");
 	scanf("%d", &op);

 	switch(op-1){
 	case ENERO:
 		printf("Estás en invierno.");
 		break;
 	case FEBRERO:
 		printf("Estás en invierno.\n");
 		break;
 	case MARZO:
 		printf("El 21 empieza la primavera.\n");
 		break;
 	case ABRIL:
 		printf("Estás en primavera.\n");
 		break;
 	case MAYO:
 		printf("Estás en primavera.\n");
 		break;
 	case JUNIO:
 		printf("El 21 inicia verano. \n");
 		break;
 	case JULIO:
 		printf("Estás en verano. \n");
 		break;
 	case AGOSTO:
 		printf("Estás en verano. \n");
 		break;
 	case SEPTIEMBRE:
 		printf("El 21 inicia otoño. \n");
 		break;
 	case OCTUBRE:
 		printf("Estás en otoño. \n");
 		break;
 	case NOVIEMBRE:
 		printf("Estás en otoño. \n");
 		break;
 	case DICIEMBRE:
 		printf("El 21 inicia invierno. \n");
 		break;
 	
 
 }

 return 0; 
}

