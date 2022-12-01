#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>


class arduino
{
public:     //méthodes de la classe Arduino
    arduino();
    int connect_arduino(); // permet de connecter le PC à Arduino
    int close_arduino(); // permet de femer la connexion
    int write_to_arduino( QByteArray ); // envoyer des données vers arduino
    QByteArray read_from_arduino();  //recevoir des données de la carte Arduino
    QSerialPort* getserial();   // accesseur
    QString getarduino_port_name();

private:
    QSerialPort* serial;//Cet objet rassemble des informations (vitesse, bits de données, etc.)
    //et des fonctions (envoi, lecture de réception,…) sur ce qu’est une voie série pour Arduino.
    static const quint16 arduino_uno_vendor_id=234;//9025; //Returns the 16-bit vendor number for the serial port, if available; otherwise returns zero.
    static const quint16 arduino_uno_product_id=0043;//67;  //Returns the 16-bit product number for the serial port, if available; otherwise returns zero.
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;  // contenant les données lues à partir d'Arduino (QByteArray car les données sont sur 8 bits)
    
    
};

#endif // ARDUINO_H
