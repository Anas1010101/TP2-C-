#include "tp2.h"
#include <assert.h>



Date::Date(int year, int month, int day): year_(year), month_(month), day_(day){
    assert(isDate(year, month, day));
}

bool Date::isDate(int year, int month, int day) const {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||
        (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

int Date::day(){
    return day_;
}

void Date::setDay(int day){
    day_=day;
}

void Date::setMonth(int month){
    month_=month;
}

void Date::setYear(int year){
    year_=year;
}

int Date::month(){
    return month_;
}

int Date::year(){
    return year_;
}

Client::Client(int id, std::string nom, std::string prenom): id_(id), nom_(nom), prenom_(prenom){}

int Client::id(){
    return id_;
}

std::string Client::nom(){
    return nom_;
}

std::string Client::prenom(){
    return prenom_;
}

Chambre::Chambre(int numero, std::string type, double prix): numero_(numero), type_(type), prix_(prix){}
int Chambre::numero(){
    return numero_;
}

void Chambre::set_prix(double newPrix){
    prix_ = newPrix;
}

std::string Chambre::type(){
    return type_;
}

double Chambre::prix(){
    return prix_;
}

Hotel::Hotel(int id, std::string nom, std::string ville, int nb_chambre): id_(id), nom_(nom), ville_(ville), nb_chambre_(nb_chambre){}

std::string Hotel::nom(){
    return nom_;
}

std::string Hotel::ville(){
    return ville_;
}

int Hotel::id(){
    return id_;
}

int Hotel::nb_chambre(){
    return nb_chambre_;
}

void Hotel::ajouterChambre(){
    nb_chambre_++;
}

void Hotel::supprimerChambre(){
    nb_chambre_--;
}

Reservation::Reservation(Date DateDebut, int nb_nuits, int id_Hotel,int id_Chambre, int id_Client, double montant_tot):
 DateDebut_(DateDebut), nb_nuits_(nb_nuits), id_Hotel_(id_Hotel), id_Chambre_(id_Chambre),
id_Client_(id_Client), montant_tot_(montant_tot){}

int Reservation::id_Chambre(){
    return id_Chambre_;
}

int Reservation::id_Client(){
    return id_Client_;
}

int Reservation::id_Hotel(){
    return id_Hotel_;
}

int Reservation::nb_nuits(){
    return nb_nuits_;
}

double Reservation::montant_tot(){
    return montant_tot_;
}

Date Reservation::DateDebut(){
    return DateDebut_;
}

void Reservation::ChangementDate(int day, int month, int year){
    DateDebut_.setDay(day);
    DateDebut_.setMonth(month);
    DateDebut_.setYear(year);
}





