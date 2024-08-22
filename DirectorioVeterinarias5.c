#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipos de funciones
void registrarUsuario(char *us, char *ed, char *num, char *nomMasc);
void veterinarias();
void servicios();
void editar(char *us, char *ed, char *num, char *nomMasc);

int main()
{
    // Variables locales
    int op;
    char temp[10];
    char us[50], ed[50], num[50], nomMasc[50];

    // Loop principal
    do
    {
        printf("Bienvenido \n");
        printf("Que desea hacer? \n");
        printf("1.- Registrar \n");
        printf("2.- Salir \n");

        fgets(temp, sizeof(temp), stdin);
        op = atoi(temp);

        switch (op)
        {
        case 1:
            printf("Ingrese nombre: ");
            fgets(us, sizeof(us), stdin);
            printf("Ingrese edad: ");
            fgets(ed, sizeof(ed), stdin);
            printf("Ingrese numero: ");
            fgets(num, sizeof(num), stdin);
            registrarUsuario(us, ed, num, nomMasc); // Se invoca la funcion
            break;

        case 2:
            printf("Adios \n");
            break;

        default:
            printf("Opcion no valida \n");
            break;
        }
    } while (op != 2);

    return 0;
}

// Funcion para registrar usuario
void registrarUsuario(char *us, char *ed, char *num, char *nomMasc)
{
    printf("Usuario registrado: \n");
    printf("Nombre: %s", us);
    printf("Edad: %s", ed);
    printf("Numero: %s", num);
    printf("Ingrese el nombre de su mascota\n");
    fgets(nomMasc, sizeof(nomMasc), stdin);

    char temp[10];
    int op2;

    // Loop para el menú de consultas
    do
    {
    	printf("Usuario registrado: \n");
    	printf("Nombre: %s", us);
    	printf("Edad: %s", ed);
    	printf("Numero: %s", num);
    	printf("Mascota: %s", nomMasc);
        printf("Bienvenido al Directorio de Veterinarias de Campeche\n");
        printf("1.- Veterinarias en Campeche \n");
        printf("2.- Servicios para mascotas\n");
        printf("3.- Editar Usuario\n");
        printf("4.- Salir\n");

        fgets(temp, sizeof(temp), stdin);
        op2 = atoi(temp);

        switch (op2)
        {
        case 1:
            veterinarias(); // Llama a la función de veterinarias
            break;

        case 2:
            servicios(); // Llama a la función de servicios
            break;

        case 3:
            // Llama a la función para editar usuario
            editar(us, ed, num, nomMasc);
            break;

        case 4:
            return; // Termina la función registrarUsuario() sin reiniciar el programa

        default:
            printf("Opcion no valida\n");
            break;
        }
    } while (op2 != 4);
}

// Funcion para mostrar veterinarias
void veterinarias()
{
    char temp[10];
    int vet;
    // Loop para el menú de veterinarias
    do
    {
        printf("Estas son las Veterinarias de las que tenemos registro en campeche\n");
        printf("1.Clinica Veterinaria Campeche (CVC)\n");
        printf("2.Animal Care\n");
        printf("3.Centro Veterinario MAYA PEEK\n");
        printf("4.CLINICA VETERINARIA DR PETS\n");
        printf("5.Veterinaria S.O.S. Mascotas\n");
        printf("6.Consultorio Veterinario Aaron Ake\n");
        printf("7.HOSPITAL VETERINARIO NOVELO\n");
        printf("8.Clinica Veterinaria Animal City\n");
        printf("9.Wau Hospital Veterinario\n");
        printf("10.Centro Medico Veterinario\n");
        printf("11.Escuadron esteriliza\n");
        printf("12.Volver\n");

        fgets(temp, sizeof(temp), stdin);
        vet = atoi(temp);

        switch (vet)
        {
        case 1:
            printf("Clinica Veterinaria Campeche (CVC)\n");
            printf("Numero Telefonico: 981 281 4442\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://g.co/kgs/K11qQU5\n");
            printf("Horarios:\n");
            printf("Lunes 8am-9pm\n");
            printf("Martes 8am-9pm\n");
            printf("Miercoles 8am-9pm\n");
            printf("Jueves 8am-9pm\n");
            printf("Viernes 8am-9pm\n");
            printf("Sabado 9am-8pm\n");
            printf("Domingo 10am-3pm\n");
            printf("Direccion:\n");
            printf("Av Gobernadores 133, Aviacion, 24070 San Francisco de Campeche, Camp.\n");
            break;

        case 2:
            printf("Animal Care\n");
            printf("Numero Telefonico: +52 981 152 6856\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/EHaz1aHjPJ6mWq2r5\n");
            printf("Horarios:\n");
            printf("Lunes 10am-8pm\n");
            printf("Martes 10am-8pm\n");
            printf("Miércoles 10am-8pm\n");
            printf("Jueves 10am-8pm\n");
            printf("Viernes 10am-8pm\n");
            printf("Sabado 10am-2pm\n");
            printf("Domingo CERRADO\n");
            printf("Direccion:\n");
            printf("Benjamin Romero 71, Cd Concordia, 24085 San Francisco de Campeche, Camp.\n");
            break;

        case 3:
            printf("Centro Veterinario MAYA PEEK\n");
            printf("Numero Telefonico: +52 981 750 0658\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/2p3hGkcP48fmfA2C7\n");
            printf("Horarios:\n");
            printf("Lunes 10am-2pm y 5pm-8pm\n");
            printf("Martes 10am-2pm y 5pm-8pm\n");
            printf("Miercoles 10am-2pm y 5pm-8pm\n");
            printf("Jueves 10am-2pm y 5pm-8pm\n");
            printf("Viernes 10am-2pm y 5pm-8pm\n");
            printf("Sabado 10am-4pm\n");
            printf("Domingo 9am-1pm\n");
            printf("Direccion:\n");
            printf("San Luis Potosi MZA 91 LTE 4, Fidel Velázquez, 24023 San Francisco de Campeche, Camp.\n");
            break;

        case 4:
            printf("CLINICA VETERINARIA DR PETS\n");
            printf("Numero Telefonico: +52 981 815 8553\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/sc8metQuhGMBiywg6\n");
            printf("Horarios:\n");
            printf("Lunes 10am-8pm\n");
            printf("Martes 10am-8pm\n");
            printf("Miercoles 10am-8pm\n");
            printf("Jueves 10am-8pm\n");
            printf("Viernes 10am-8pm\n");
            printf("Sabado 10am-5pm\n");
            printf("Domingo CERRADO\n");
            printf("Direccion:\n");
            printf("Av Gobernadores 133, Aviacion, 24070 San Francisco de Campeche, Camp.\n");
            break;

        case 5:
            printf("Veterinaria S.O.S. Mascotas\n");
            printf("Numero Telefonico: +52 981 105 7594\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/Eogt5HaV63JWhUwHA\n");
            printf("Horarios:\n");
            printf("Lunes 9am-9pm\n");
            printf("Martes 9am-9pm\n");
            printf("Miercoles 9am-9pm\n");
            printf("Jueves 9am-9pm\n");
            printf("Viernes 9am-9pm\n");
            printf("Sabado 9am-6pm\n");
            printf("Domingo 9am-3pm\n");
            printf("Direccion:\n");
            printf("24020, Av Gobernadores 114, Barrio de Sta Lucia, San Francisco de Campeche, Camp.\n");
            break;

        case 6:
            printf("Consultorio Veterinario Aaron Ake\n");
            printf("Numero Telefonico: +52 981 143 5346\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/vMDQg49aHeWmsU3B9\n");
            printf("Horarios:\n");
            printf("Lunes 8am-8pm\n");
            printf("Martes 8am-8pm\n");
            printf("Miercoles 8am-8pm\n");
            printf("Jueves 8am-8pm\n");
            printf("Viernes 8am-8pm\n");
            printf("Sabado 8am-3:30pm\n");
            printf("Domingo 9am-2:30pm\n");
            printf("Direccion:\n");
            printf("C. Jose Castellot 31, Cd Concordia, 24085 San Francisco de Campeche, Camp.\n");
            break;

        case 7:
            printf("HOSPITAL VETERINARIO NOVELO\n");
            printf("Numero Telefonico: +52 981 813 2689\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/S2tJfBWv4jvmZ1BCA\n");
            printf("Horarios:\n");
            printf("Lunes 8:30am-8:30pm\n");
            printf("Martes 8:30am-8:30pm\n");
            printf("Miercoles 8:30am-8:30pm\n");
            printf("Jueves 8:30am-8:30pm\n");
            printf("Viernes 8:30am-8:30pm\n");
            printf("Sabado 8:30am-5pm\n");
            printf("Domingo 9:30am-2pm\n");
            printf("Direccion:\n");
            printf("Av Patricio Trueba de Regil 226, San Rafael, 24090 San Francisco de Campeche, Camp.\n");
            break;

        case 8:
            printf("Clinica Veterinaria Animal City\n");
            printf("Numero Telefonico: +52 981 113 7320\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/7d5sCbW4ABucLUF1A\n");
            printf("Horarios:\n");
            printf("Lunes 8am-9pm\n");
            printf("Martes 8am-9pm\n");
            printf("Miercoles 8am-9pm\n");
            printf("Jueves 8am-9pm\n");
            printf("Viernes 8am-9pm\n");
            printf("Sabado 8am-5pm\n");
            printf("Domingo CERRADO\n");
            printf("Direccion:\n");
            printf("24040, C. Altillo 22, Barrio de San Jose, 24040 San Francisco de Campeche, Camp.\n");
            break;

        case 9:
            printf("Wau Hospital Veterinario\n");
            printf("Numero Telefonico: +52 981 811 1466\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/MsLvyq1wueSSkpTY7\n");
            printf("Horarios:\n");
            printf("Abierto de Lunes a Domingo las 24 horas\n");
            printf("Direccion:\n");
            printf("Av. Luis Donaldo Colosio Murrieta No. 142 A entre Allende, C. Aldama y, Barrio de San Jose, 24040 San Francisco de Campeche, Camp.\n");
            break;

        case 10:
            printf("Centro Medico Veterinario\n");
            printf("Numero Telefonico: +52 565 307 5753\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/nrd4ReiNa62m7voF9\n");
            printf("Horarios:\n");
            printf("Lunes 10am-3pm y 5pm-9pm\n");
            printf("Martes 10am-3pm y 5pm-9pm\n");
            printf("Miercoles 10am-3pm y 5pm-9pm\n");
            printf("Jueves 10am-3pm y 5pm-9pm\n");
            printf("Viernes 10am-3pm y 5pm-9pm\n");
            printf("Sabado 10am-3pm y 5pm-8pm\n");
            printf("Domingo CERRADO\n");
            printf("Direccion:\n");
            printf("Av. Solidaridad Nacional, Fidel Velazquez, 24023 San Francisco de Campeche, Camp.\n");
            break;

        case 11:
            printf("Escuadron esteriliza\n");
            printf("Numero Telefonico: +52 981 175 0151 SOLO WHATSAPP\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/iKqidRnhaNCRLZpo7\n");
            printf("Horarios:\n");
            printf("SOLO CON CITA\n");
            printf("Direccion:\n");
            printf("Calle del duque #28 entre Lopez Portillo y calle 1, jardines del Pedregal, enfrente de la entrada del Walmart\n");
            break;

        case 12:
            break;

        default:
            printf("Opcion no valida\n");
            break;
        }
    } while (vet != 12);
}

// Funcion para mostrar servicios
void servicios()
{
    char temp[10];
    int serv;
    // Loop para el menú de servicios
    do
    {
        printf("Estas son las companias que ofrecen servicios para mascotas en Campeche\n");
        printf("1. Diligencias Expres (Transporte)\n");
        printf("2. Abysur Transportes (Transporte)\n");
        printf("3. Rupi Movil (Transporte)\n");
        printf("4. Transporte Cuatrimoto (Transporte)\n");
        printf("5. Granos de Arena (Esterilizacion)\n");
        printf("6. Agropecuaria del Sureste (Farmacia)\n");
        printf("7. Volver\n");

        fgets(temp, sizeof(temp), stdin);
        serv = atoi(temp);

        switch (serv)
        {
        case 1:
            printf("Diligencias Expres\n");
            printf("(981) 185 7597\n");
            break;

        case 2:
            printf("Abysur Transportes\n");
            printf("(981) 103 1669\n");
            break;

        case 3:
            printf("Rupi Movil\n");
            printf("(981) 110 7213\n");
            break;

        case 4:
            printf("Transporte Cuatrimoto\n");
            printf("(981) 131 0222\n");
            break;

        case 5:
            printf("Granos de Arena\n");
            printf("(981) 138 6705\n");
            printf("SOLO ESTERILIZACION\n");
            break;

        case 6:
            printf("Agropecuaria del Sureste\n");
            printf("Numero Telefonico: +52 981 127 1341\n");
            printf("Ubicacion en Google Maps\n");
            printf("https://maps.app.goo.gl/CDywTXtc3RgpmBkR9\n");
            printf("Horarios:\n");
            printf("Lunes 8am-7pm\n");
            printf("Martes 8am-7pm\n");
            printf("Miercoles 8am-7pm\n");
            printf("Jueves 8am-7pm\n");
            printf("Viernes 8am-7pm\n");
            printf("Sabado 8am-2pm\n");
            printf("Domingo CERRADO\n");
            printf("Direccion:\n");
            printf("Av Gobernadores 463, Barrio de Sta Ana, 24050 San Francisco de Campeche, Camp.\n");
            break;

        case 7:
            break;
        default:
            printf("Opcion no valida\n");
            break;
        }
    } while (serv != 7);
}

// Funcion para editar datos del usuario
void editar(char *us, char *ed, char *num, char *nomMasc)
{
    char temp[10];
    int option;

    // Menú para editar
    do
    {
        printf("Que dato desea editar?\n");
        printf("1. Nombre\n");
        printf("2. Edad\n");
        printf("3. Numero\n");
        printf("4. Nombre de la mascota\n");
        printf("5. Volver\n");

        fgets(temp, sizeof(temp), stdin);
        option = atoi(temp);

        switch (option)
        {
        case 1:
            printf("Ingrese el nuevo nombre: ");
            fgets(us, sizeof(us), stdin);
            break;

        case 2:
            printf("Ingrese la nueva edad: ");
            fgets(ed, sizeof(ed), stdin);
            break;

        case 3:
            printf("Ingrese el nuevo numero: ");
            fgets(num, sizeof(num), stdin);
            break;

        case 4:
            printf("Ingrese el nuevo nombre de la mascota: ");
            fgets(nomMasc, sizeof(nomMasc), stdin);
            break;

        case 5:
            break;

        default:
            printf("Opcion no valida\n");
            break;
        }
    } while (option != 5);
}
