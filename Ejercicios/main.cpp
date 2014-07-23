//
//  main.cpp
//  Ejercicios
//
//  Created by Jonás López Mesa on 22/07/14.
//  Copyright (c) 2014 Jonás López Mesa. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //TAREA Martes 22 de Julio:
    int x = 0;
    int opcion;
    while (x == 0) {
        cout << "1. Mostrar mi Nombre" << endl;
        cout << "2. Mostrar mis Apellidos" << endl;
        cin >> opcion;
        if (opcion == 1) {
            cout << "Jonás" << endl;
        } else if (opcion == 2) {
            cout << "López Mesa" << endl;
        }
    }
    
    return 0;
}

