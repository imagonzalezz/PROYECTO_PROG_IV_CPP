//
// Created by ikery on 05/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___USUARIO_H
#define PROYECTO_PROG_IV_C___USUARIO_H

class Usuario{
    char* nombre;
    char* contrasenia;
    int permiso;
public:
    Usuario();
    Usuario(const char* n, const char* c, int p);
    virtual ~Usuario();
    void setNombre(const char* n);
    void setContrasenia(const char* c);
    void setPermiso(int p);
    char* getNombre() const;
    char* getContrasenia() const;
    int getPermiso() const;
    Usuario &operator=(const Usuario &u);
};

#endif //PROYECTO_PROG_IV_C___USUARIO_H
