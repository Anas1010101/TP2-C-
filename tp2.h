#include <string>
#include <iostream>



class Date {
    public:
        Date(int year, int month, int day);
        int year();
        int month();
        int day();
    private:
        bool isDate(int year, int month, int day) const;
        int year_;
        int month_;
        int day_;
    
};

class Client {
    public:
        Client(int id, std::string nom, std::string prenom);
        int id();
        std::string nom();
        std::string prenom();



    private:
        int id_;
        std::string nom_;
        std:: string prenom_;

};

class Chambre{
    public:
        Chambre(int numero, std::string type, double prix);
        int numero();
        std::string type();
        double prix();

        void set_prix(double newPrix);




    private:
        int numero_;
        std::string type_;
        double prix_;
};

class Hotel {
    public:
        Hotel(int id, std::string nom, std::string ville, int nb_chambre );
        int id();
        std::string nom();
        std::string ville();
        int nb_chambre();

        void supprimerChambre();
        void ajouterChambre();


        

    private:
        int id_;
        std::string nom_;
        std::string ville_;
        int nb_chambre_;

};

class Reservation{
    public:
        Reservation(int nb_nuits, int id_Hotel, int id_Chambre, int id_Client, double montant_tot);
        int nb_nuits_();
        int id_Hotel();
        int id_Chambre();
        int id_Client();
        double montant_tot();

    private:
        Date DateDebut_;
        int nb_nuits_;
        int id_Hotel_;
        int id_Chambre_;
        int id_Client_;
        double montant_tot_;

};