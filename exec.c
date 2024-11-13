#include <unistd.h>
#include <stdio.h>

int main()
{
    int pid = fork();
    if (pid ==0){
        printf("soy el hijo\n");
        execl("./hola", "hola","pedro","luis","mary", (char *)NULL);
        printf("ESTA LINEA NO DEBE DE EJECUTARSE");
    }
    printf("soy el proceso padre\n");
    return 0;
}