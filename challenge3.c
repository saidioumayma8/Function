                                                  #include <stdio.h>

void ispremier(int n) {
    if (n<=1)
    {
        return 0;
    }
    for (int  i = 2; i < n; i++)
    {
       if (n%2 == 0)
       {
        return 0;
       }
       
    }
    
    
  
}

int main() {
   int nombre;

   printf("Entrez un nombre : ");
   scanf("%d", &nombre);

   if (ispremier(nombre)){
   printf("%d est nombre promier.\n", nombre);
   }else{
    printf("%d nest pas un nombre premier.\n", nombre);
   }
   
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                          