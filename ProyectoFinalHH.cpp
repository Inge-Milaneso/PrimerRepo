#include <iostream>
#include <limits> // Para limpiar el buffer del cin después de leer un tipo incorrecto
cout << "este semestre solo fue de aprendizaje y errores" << endl;
using namespace std;
int main() 
{
    int vida = 1;  // VARIABLE VIDA QUE TE AYUDARÁ A INDICAR LAS VIDAS RESTANTES QUE TIENES
    int decision;
    int decisionJuego;  // VARIABLES QUE NOS AYUDARA A INDICAR O A ELEGIR LAS OPCIONES DE ESTE JUEGO
    bool regresarAlMenuPrincipal;  // VARIABLE QUE AYUDARA A CONTROLAR EL REGRESOY TIEMPO DEL JUEGO Y AL MENÚ PRINCIPAL

    	cout << "** ¡Bienvenido a la historia interactiva! **" << endl;

    do 
    {
        // REINICIAR LA VARIABLE PARA CADA ITERACIÓN DEL BUCLE PRINCIPAL
        regresarAlMenuPrincipal = false;

        // Mostrar estado actual
        cout << "--- Menu Principal ;) --" << endl;
        cout << " introduzca su opcion con los numeros del teclado y luego presiones enter "<<endl;
        cout << " (A veces necesita doble introduccion de numero,no pude arreglarlo perdon :') )"<<endl;
        cout << "1. Iniciar juego" << endl;
        cout << "2. Modo Historia" << endl;
        cout << "3. Extras " << endl;
        cout << "4. Salir" << endl;
        cout << "Selecciona una opcion: ";
// Limpiar el buffer del cin antes de leer la opción
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> decision;

        switch (decision)
        {
            case 1:
                do 
                {
                    // Reiniciar la variable para cada iteración del bucle interno
                    regresarAlMenuPrincipal = false;

                    // Mostrar estado actual
                    cout << "--- Te encuentras en medio de un panteón y no recuerdas nada... ---" << endl;
                    cout << "-- Menu de juego --" << endl;
                    cout << "1. Seguir adelante" << endl;
                    cout << "2. Mirar a la eclipse" << endl;
                    cout << "3. Agarrar la pala que esta tirada delante de una tumba" << endl;
                    cout << "4. Ponerte a pensar el porqué esta ahí " << endl;
                    cout << "-- Estado actual --" << endl;
                    cout << "Vida: " << vida << endl;
                    cout << "5. Regresar al Menu Principal" << endl;
                    cout << "Selecciona una opcion: ";

                    // Limpiar el buffer del cin antes de leer la opción
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cin >> decisionJuego;  // Utilizamos una nueva variable

                    switch (decisionJuego)
                    {
                        // Código de acciones
                        case 1:
                            // Código para la opción 1
                            
                              // Código para la opción 1
                            cout << "--- Estado actual ---" << endl;
                            cout << "     Vida: " << vida << endl;
                            cout << "-- Decides adentrarte mas en el panteón. ¿Qué decides hacer? --" << endl;
                            cout << "1. Seguir caminando sin rumbo." << endl;
                            cout << "2. Seguir y girar a la derecha derecha." << endl;
                            cout << "3. Seguir una pqueña luz misteriosa." << endl;
                            cout << "Selecciona una opcion: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                cout << "Te topas con un hombre; alto,  vestido de negro y sin cara,Te voltea a ver y  te golpea en la cabeza." << endl;
                                vida--;
                            }
                            else if (decisionJuego == 2)
                            {
                                cout << "Sigues caminando sin rumbo por un rato y sigue sin pasar nada, hasta que te encuentras con un hoyo y sin darte cuenta, te tropiezas y te golpeas la cabeza." << endl;
                                vida--;
                            }
                            else
                            {
                                cout << "La luz misteriosa se transforma en una identidad omnipresente, te toca la cara y todo reinicia." << endl;
                                vida++;
                            }
                            break;
                            
                        case 2:
                            // Código para la opción 2
                             cout << "--- Estado actual ---" << endl;
                            cout << "        Vida: " << vida << endl;
                            cout << "-- Decidiste mirar al eclipse.... ¿Sera buena idea? --" << endl;
                            cout << "1. Seguir mirando" << endl;
                            cout << "2. Dejar de mirar " << endl;
                            cout << "3. HUIR" << endl;
                            cout << "Selecciona una opcion: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1) {
                                cout << "Eso no era un eclipse" << endl;
                                vida--;
                            } 
                            else if (decisionJuego == 2)
                            {
                                cout << "Buena eleccion, esa cosa no era lo que parecia ser." << endl;
                                
                            } 
                            else
                            { 
                                cout << "Esa cosa se hizo pasar por un estrella y te estuvo acechando todo este tiempo." << endl;
                                vida--;
                            }

                            break;
                        case 3:
                            // Código para la opción 3
                           cout << "Agarras la pala ¿Que decides hacer?"<<endl;
                           cout << "        Vida: " << vida << endl;                           
                            cout << "1. Cavar ahí mismo"<<endl;
                            cout << "2. Golpear la tumba que se encuentra enfrente tuyo"<<endl;
                            cout << "3. Ver la pala a detalle"<<endl;
                            cout << "Selecciona una opcion: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                cout << "   Cavas en ese mismo lugar, pero...  ¿Qué es eso?, ¿ Un cuerpo?  "<<endl;
                                cout << "   No puede ser! ¿Ella es mi esposa?  "<<endl;
                                cout << "  personaje:  *Suspiro trsite* Sí, es ella "<<endl;
                                cout << "  personaje: *Se pone a llorar* ¡Oh no! Mi madre "<<endl;
                                cout<< " No aguantas la idea de perder a tu querida y hermosa esposa, ves como la dejaron y decides suicidarte para poder encontrarte en el otro mundo con ella"<<endl;
                                vida -= 3;
                            } 
                            else if (decisionJuego == 2) 
                            {
                                 cout << "Golpeas la tumba"<<endl;
                                 cout << "persoaneje: esa cosa se movió?l ¿Por qué salió con brazos?"<<endl;   
								 cout << "De la tumba sale una persona medio viva y medio muerta, abre sus ojos y al parecer es consciente"<<endl; 
								 cout << "Medio muerto: Hola desconocido! veo que has estado aqui por un largo tiempo"<<endl;
								 cout << "Medio Muertol: Te dire una cosa de la vida y la muerte, La muerte no encierra misterio alguno. No abre ninguna puerta..."<<endl;
								 cout << "Es el final de un ser humano. Lo que sobrevive de él es lo que ha conseguido dar de si a los demas"<<endl;
								 cout << "Lo que de él se guarda en la memoria de los otros."<<endl;
								 cout<< "Pero la gente que mata no merece nada, ni si quiere ser considerado humano "<<endl;
								 cout <<"Pero parece que tu sabes de que hablo (risa sarcastica diabolica) "<<endl;  
								 cout<<"pero te ayudare con una vida para que lo recuerdes"<<endl;
                                vida++;
                            } 
                            else 
                            {
                                cout << "La pala tiene... ¿¡mi nombre!";
                            }

                            break;
                        case 4:
                            // Código para la opción 4
                            cout << "Entocnes decidiste pensar ¿Que seria mejor para pensar?"<<endl;
                            cout << "        Vida: " << vida << endl;
                            cout << "1. ¿Que es la muerte?"<<endl;
                            cout << "2. ¿Donde estoy?"<<endl;
                            cout << "3. ¿Soy una buena persona o que hice para merecer esto?"<<endl;
                            cout << "Selecciona una opción: "<<endl;
                            cin >> decisionJuego;

                            if (decisionJuego == 1) 
                            {
                                cout << "Al pensar en ello  empiezas a recordar la muerte de alguien cercano a ti "<<endl;
                                cout << "...¿La mate yo?... "<<endl;
                                cout << "*Empiezas a llorar y solo te acuestas en el suelo reprimiendo tus emociones"<<endl;
                                
                            } 
                            else if (decisionJuego == 2)
                            {
                                cout << "Al pensar eso una voz misteriosa habla dentro de ti";
                                cout << "Voz misteriosa: Lo sabes, mataste a esa persona importantes y hasta la que te dio la vida "<<endl;
                                cout << "Mereces estar aqui, este mundo lleno de adefecios como tú"<<endl;
                                vida -=3;
                            }  
                            else
                            {
                                cout << "Nunca fuiste buena persona y solo repudiabas a la gente pero no todo es tu culpa "<<endl;
                                cout << "Tambien fue la de tu madre "<<endl;
                                vida -= 3;
                            }

                            break;
                        case 5:
                            cout << "Regresando al menú principal." << endl;
                            regresarAlMenuPrincipal = true;  // Actualizar la variable para salir del bucle interno
                            break;
                        default:
                            cout << "Opción no válida. Inténtalo de nuevo." << endl;
                             break;
                    }

                    if (vida <= 0) 
                    {
                        cout << " El juego ha acabado. Gracias por jugar ;)." << endl;
                        return 0;  // Terminar el programa cuando las vidas sean igual o menor a 0
                    } 
                    else if (vida >= 3)
                    {
                        cout << "Perdiste el juego ya que tu vidas llegaron a 3 o mas." << endl;
                        cout << "¿De verdad crees que podrás tener tantas vidas? no mereces demasiado sabiendo el asco de persona que eres..." << endl;
                        return 0;  // Terminar el programa si las vidas son mayores o iguales a 6
                    }

                } while (!regresarAlMenuPrincipal);  // Modificar la condición del bucle interno
                break;

            case 2:
                 
                            cout << " Estas en el infierno por tus pecados, o eso es lo que tú crees" << endl;
                            cout << " Tu mision es  recordar y encotnrar una posible salida de este pequeño limbo" << endl;
                            cout << "54,6f,64,6f,73,20,6d,6f,72,69,72,65,6d,6f,73,20,64,65,6a,61,20,64,65,20,62,75,73,63,61,72,20,73,61,6c,69,64,61,20,61,20,65,73,74,61,20,76,69,64,61,20,6c,6c,65,6e,61,20,64,65,20,6d,69,65,72,64,61,20,73,6f,6c,6f,20,76,69,76,65" << endl;
                            cout << "1. Salir." << endl;
                            cout << "Selecciona 1 para salir: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                
                            }
                break;

            case 3:
                // Código para la opción 3 (Opción adicional 1)
                cout << " Juego o inteto de este " << endl;
                            cout << " Creador: Huerta Heras Aarón Samuel" << endl;
                            cout << "Gamertag: crrackarotto" << endl;
                            cout << "Este juego fue hecho para la materia COMPUTADORAS Y PROGRAMACION Grupo: 1158 (2024-I)" << endl;
                            cout << "1. Salir." << endl;
                            cout << "Selecciona 1 para salir: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                
                            }
                break;

            case 4:
                // Código para la opción 4 (Opción adicional 2)
                cout << "¡Gracias por jugar! El juego acabo... o no?." << endl;
                break;

            default:
                cout << "Opcion no valida. Intentalo de nuevo." << endl;
                break;
        }

    } while (decision != 4);

    return 0;
}
