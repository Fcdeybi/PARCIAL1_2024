#include <iostream>
#include <string>

using namespace std;

// Definici�n de la clase Camisa
class Camisa {
private:
    string color;
    string tamano;
    double precio;

public:
    // Constructor
    Camisa(string _color, string _tama�o, double _precio) : color(_color), tamano(_tamano), precio(_precio) {}

    // M�todo para obtener el color de la camisa
    string getColor() {
        return color;
    }

    // M�todo para obtener el tama�o de la camisa
    string getTamano() {
        return tamano;
    }

    // M�todo para obtener el precio de la camisa
    double getPrecio() {
        return precio;
    }
};

int main() {
    // Crear un objeto Camisa
    Camisa camisa("Azul", "M", 25.99);

    // Obtener y mostrar los atributos de la camisa
    cout << "Color de la camisa: " << camisa.getColor() << endl;
    cout << "Tamano de la camisa: " << camisa.getTamano() << endl;
    cout << "Precio de la camisa: $" << camisa.getPrecio() << endl;

    return 0;
}
