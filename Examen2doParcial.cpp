/*Alexis Maldonado & Alexis Cuevas
Title:Exam 2nd Period
27/10/2023
*/

#include <bits/stdc++.h>
using namespace std;

// Abstract class
class Sport {
public:
    Sport(const string & nombre) : nombre(nombre) {}
    Sport(const Sport& otro) : nombre(otro.nombre) {} // Copy constructor

    virtual ~Sport() {
        cout << "Destroying Sport " << endl;
    }

    virtual string calculateResult() = 0;

    string getnombre() const {
        return nombre;
    }

private:
    string nombre;
};

// Derived class 1 - Team Sport
class TeamSport : public Sport {
public:
    TeamSport(const string& nombre) : Sport(nombre) {}
    TeamSport(const TeamSport& otro) : Sport(otro) {} // Copy constructor

    ~TeamSport() {
        cout << "Destroying TeamSport " << endl;
    }
};

// Clase hija of TeamSport
class Soccer : public TeamSport {
public:
    Soccer(const string& nombre) : TeamSport(nombre) {}
    Soccer(const Soccer& otro) : TeamSport(otro) {} // Copy constructor

    ~Soccer() {
        cout << "Destroying Soccer " << endl;
    }

    string calculateResult() override {
        return "America won 2-1 vs Chivas in the Mexican classic";
    }
};

class Basketball : public TeamSport {
public:
    Basketball(const string& nombre) : TeamSport(nombre) {}
    Basketball(const Basketball& otro) : TeamSport(otro) {} // Copy constructor

    ~Basketball() {
        cout << "Destroying Basketball " << endl;
    }

    string calculateResult() override {
        return "UP Bonaterra won the match 85-73 vs UNLA last Saturday";
    }
};

// Derived class 2 - Individual Sport
class IndividualSport : public Sport {
public:
    IndividualSport(const string& nombre) : Sport(nombre) {}
    IndividualSport(const IndividualSport& otro) : Sport(otro) {} // Copy constructor

    ~IndividualSport() {
        cout << "Destroying an IndividualSport " << endl;
    }
};

// Clase hija of IndividualSport
class Tennis : public IndividualSport {
public:
    Tennis(const string& nombre) : IndividualSport(nombre) {}
    Tennis(const Tennis& otro) : IndividualSport(otro) {} // Copy constructor

    ~Tennis() {
        cout << "Destroying Tennis " << endl;
    }

    string calculateResult() override {
        return "Carlos Alcaraz won in 6 sets vs Daniil Medvedev in last Sunday's match";
    }
};

class Swimming : public IndividualSport {
public:
    Swimming(const string& nombre) : IndividualSport(nombre) {}
    Swimming(const Swimming& otro) : IndividualSport(otro) {} // Copy constructor

    ~Swimming() {
        cout << "Destroying Swimming " << endl;
    }

    string calculateResult() override {
        return "Michael Phelps broke his own record, finishing in 46.91 seconds, securing the gold";
    }
};

int main() {
    Soccer soccer("Soccer");
    Basketball basketball("Basketball");
    Tennis tennis("Tennis");
    Swimming swimming("Swimming");

    cout << "Result of the Soccer match: " << soccer.calculateResult() << endl;
    cout << "Result of the Basketball match: " << basketball.calculateResult() << endl;
    cout << "Result of the Tennis match: " << tennis.calculateResult() << endl;
    cout << "Result of the Swimming competition: " << swimming.calculateResult() << endl;

    // New class inheriting from IndividualSport and TeamSport
    class AquaticSport : public IndividualSport, public TeamSport {
    public:
        AquaticSport(const string& nombre) : IndividualSport(nombre), TeamSport(nombre) {}
        AquaticSport(const AquaticSport& otro) : IndividualSport(otro), TeamSport(otro) {} // Copy constructor

        ~AquaticSport() {
            cout << "Destroying an AquaticSport " << endl;
        }

        string calculateResult() override {
            return "France won the swimming competition in the Olympic pool";
        }
    };

    AquaticSport aquaticNatacion("Team Swimming");
    cout << "Result of the Team Swimming competition: " << aquaticNatacion.calculateResult() << endl;

    return 0;
}