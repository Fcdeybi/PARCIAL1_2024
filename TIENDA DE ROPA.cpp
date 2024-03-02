#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la clase Prenda
class Prenda {
protected:
    string tipo;
    string color;
    string tamano;
    double precio;

public:
    // Constructor
    Prenda(string _tipo, string _color, string _tamano, double _precio) : tipo(_tipo), color(_color), tamano(_tamano), precio(_precio) {}

    // Método para obtener el tipo de prenda
    string getTipo() {
        return tipo;
    }

    // Método para obtener el color de la prenda
    string getColor() {
        return color;
    }

    // Método para obtener el tamaño de la prenda
    string getTamano() {
        return tamano;
    }

    // Método para obtener el precio de la prenda
    double getPrecio() {
        return precio;
    }
};

// Definición de la clase TiendaDeRopa
class TiendaDeRopa {
private:
    string nombre;
    vector<Prenda> prendas;

public:
    // Constructor
    TiendaDeRopa(string _nombre) : nombre(_nombre) {}

    // Método para agregar una prenda a la tienda
    void agregarPrenda(Prenda prenda) {
        prendas.push_back(prenda);
    }

    // Método para mostrar todas las prendas en la tienda
    void mostrarPrendas() {
        cout << "Prendas en la tienda " << nombre << ":" << endl;
        for (const auto& prenda : prendas) {
            cout << "Tipo: " << prenda.getTipo() << ", Color: " << prenda.getColor() << ", Tamano: " << prenda.getTamano() << ", Precio: $" << prenda.getPrecio() << endl;
        }
    }
};

int main() {
    // Crear una tienda de ropa
    TiendaDeRopa miTienda("Mi Tienda de Ropa");

    // Crear objetos de prendas
    Prenda camisa("Camisa", "Azul", "M", 25.99);
    Prenda pantalon("Pantalon", "Negro", "L", 35.50);
    Prenda vestido("Vestido", "Rojo", "S", 45.75);
    Prenda gorra("Gorra", "Blanco", "Única", 15.25);

    // Agregar prendas a la tienda
    miTienda.agregarPrenda(camisa);
    miTienda.agregarPrenda(pantalon);
    miTienda.agregarPrenda(vestido);
    miTienda.agregarPrenda(gorra);

    // Mostrar las prendas en la tienda
    miTienda.mostrarPrendas();

    return 0;
}
