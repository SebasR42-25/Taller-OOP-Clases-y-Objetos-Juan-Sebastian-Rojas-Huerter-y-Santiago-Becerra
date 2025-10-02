#include "RedSocial.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<Usuario> usuarios;
    int opcion;

    do {
        cout << "\n===== MENU RED SOCIAL =====\n";
        cout << "1. Crear usuario\n";
        cout << "2. Crear publicacion\n";
        cout << "3. Comentar publicacion\n";
        cout << "4. Dar like a publicacion\n";
        cout << "5. Mostrar publicacion\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: {
                string nombre;
                cout << "Ingrese nombre de usuario: ";
                getline(cin, nombre);
                bool existe = false;
                for (const auto& u : usuarios) {
                    if (u.getNombreUsuario() == nombre) { existe = true; break; }
                }
                if (existe) {
                    cout << "El nombre de usuario ya existe. Intente con otro.\n";
                    break;
                }
                usuarios.push_back(Usuario(nombre));
                cout << "Usuario creado.\n";

                usuarios.push_back(Usuario(nombre));
                cout << "Usuario creado.\n";
                break;
            }

            case 2: {
                if (usuarios.empty()) {
                    cout << "No hay usuarios.\n";
                    break;
                }
                cout << "Seleccione usuario:\n";
                for (int i = 0; i < usuarios.size(); i++) {
                    cout << i << ". " << usuarios[i].getNombreUsuario() << endl;
                }
                int idx;
                cin >> idx;
                cin.ignore();
                string img, desc;
                cout << "Imagen: ";
                getline(cin, img);
                cout << "Descripcion: ";
                getline(cin, desc);
                usuarios[idx].crearPublicacion(img, desc);
                cout << "Publicacion creada.\n";
                break;
            }

            case 3: {
                if (usuarios.size() < 2) {
                    cout << "Se necesitan al menos 2 usuarios.\n";
                    break;
                }
                cout << "Seleccione autor:\n";
                for (int i = 0; i < usuarios.size(); i++) {
                    cout << i << ". " << usuarios[i].getNombreUsuario() << endl;
                }
                int autorIdx;
                cin >> autorIdx;

                auto& pubs = usuarios[autorIdx].getPublicaciones();
                if (pubs.empty()) {
                    cout << "No hay publicaciones.\n";
                    break;
                }

                cout << "Seleccione publicacion:\n";
                for (int i = 0; i < pubs.size(); i++) {
                    cout << i << ". Publicacion " << i << endl;
                }
                int pubIdx;
                cin >> pubIdx;
                cin.ignore();

                cout << "Seleccione comentarista:\n";
                for (int i = 0; i < usuarios.size(); i++) {
                    if (i != autorIdx) cout << i << ". " << usuarios[i].getNombreUsuario() << endl;
                }
                int comIdx;
                cin >> comIdx;
                cin.ignore();

                string texto;
                cout << "Comentario: ";
                getline(cin, texto);
                Comentario c(texto, &usuarios[comIdx]);
                pubs[pubIdx].agregarComentario(c);
                cout << "Comentario agregado.\n";
                break;
            }

            case 4: {
                if (usuarios.empty()) {
                    cout << "No hay usuarios.\n";
                    break;
                }
                cout << "Seleccione autor:\n";
                for (int i = 0; i < usuarios.size(); i++) {
                    cout << i << ". " << usuarios[i].getNombreUsuario() << endl;
                }
                int autorIdx;
                cin >> autorIdx;

                auto& pubs = usuarios[autorIdx].getPublicaciones();
                if (pubs.empty()) {
                    cout << "No hay publicaciones.\n";
                    break;
                }

                cout << "Seleccione publicacion:\n";
                for (int i = 0; i < pubs.size(); i++) {
                    cout << i << ". Publicacion " << i << endl;
                }
                int pubIdx;
                cin >> pubIdx;

                pubs[pubIdx].darLike();
                cout << "Like agregado!\n";
                break;
            }

            case 5: {
                if (usuarios.empty()) {
                    cout << "No hay usuarios.\n";
                    break;
                }
                cout << "Seleccione autor:\n";
                for (int i = 0; i < usuarios.size(); i++) {
                    cout << i << ". " << usuarios[i].getNombreUsuario() << endl;
                }
                int autorIdx;
                cin >> autorIdx;

                auto& pubs = usuarios[autorIdx].getPublicaciones();
                if (pubs.empty()) {
                    cout << "No hay publicaciones.\n";
                    break;
                }

                cout << "Seleccione publicacion:\n";
                for (int i = 0; i < pubs.size(); i++) {
                    cout << i << ". Publicacion " << i << endl;
                }
                int pubIdx;
                cin >> pubIdx;

                pubs[pubIdx].mostrarInfo();
                break;
            }

            case 0:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }
    } while (opcion != 0);

    return 0;
}
