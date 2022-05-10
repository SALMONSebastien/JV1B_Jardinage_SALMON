#include <string>
#include <vector>
#include <iostream>

#include "plant.cpp"
#include "plant.h"
#include "botanist.cpp"
#include "botanist.h"

#include "fleur.cpp"
#include "fleur.h"

#include "carnivore.cpp"
#include "carnivore.h"



using namespace std;



int main() {

    
    Plant * myPlant1 = new Plant();
    myPlant1 -> setVariety("Geranium");
    myPlant1 -> setVariety("Fleurs");
    myPlant1 -> setState("Bonne état");
    myPlant1 -> setPV(20);
    myPlant1 -> setHydratation(7);
    myPlant1 -> enraisGiven(0);
    myPlant1 -> setTaille(10);

    // Plant * myPlant2 = new Plant();
    // Plant * myPlant3 = new Plant();
    // Plant * myPlant4 = new Plant();
    // Plant * myPlant5 = new Plant();


    Botanist * botanist = new Botanist();



    int actionLeft = 5;
    int actionChosen = 0;
    bool gameover = false;

    int nbPlantes = 1;

    botanist -> setDollars(+300);
    botanist -> setEngrais(+1);

   
    
while(!gameover){

     cout << "C'est une belle journée aujourd'hui ! Qu'allons nous faire ?" << endl;
     

        while (actionLeft > 0){

            cout << "Solde : " << botanist -> getDollars() << endl;
            cout << "Engrais : " << botanist -> getEngrais() << endl;
            cout << "Nombre de plantes : " << nbPlantes << endl;

            cout << "" << endl;

            cout << "Que faire ?" << endl;
            cout << "1) Faire des emplettes" << endl;
            cout << "2) S'occuper des plantes" << endl;
            cout << "3) Inspecter les plantes" << endl;
            cout << "4) Se reposer (passera au prochain jour)" << endl;

            cout << "" << endl;

            cin >> actionChosen;

            if (actionChosen == 1){

                int buyChosen = 0;

                cout << "Vous vous rendez au marché. Qu'allez-vous y acheter ?" << endl;
                cout << "" << endl;
                cout << "1) Une nouvelle plante !" << endl;
                cout << "2) Un sac d'engrais ! (100 Botanic Dollars)" << endl;

                cout << "" << endl;

                cin >> buyChosen;

                if (buyChosen == 1){

                    int plantTypeBought = 0;

                    cout << "Quelle type de plantes souhaitez vous acheter ?" << endl;
                    cout << "Solde : " << botanist -> getDollars() << endl;
                    cout << "" << endl;

                    cout << "1) Un geranium (Fleur) : 100 Botanic Dollars" << endl;
                    cout << "2) Une orchidée (Fleur) : 150 Botanic Dollars " << endl;
                    cout << "3) Une Plante Cobra (Carnivore) : 250 Botanic Dollars" << endl;
                    cout << "" << endl;

                    cin >> plantTypeBought;

                    if (nbPlantes == 1){

                        //Achats de plantes

                        if(plantTypeBought == 1 && botanist -> getDollars() >= 100){

                            Plant * myPlant2 = new Plant();
                            myPlant2 -> setVariety("Geranium");
                            myPlant2 -> setState("Bonne état");
                            myPlant2 -> setPV(20);
                            myPlant2 -> setHydratation(10);
                            botanist -> setDollars(-100);
                            nbPlantes += 1;

                        }

                        else if(plantTypeBought == 2 && botanist -> getDollars() >= 150){

                            Plant * myPlant2 = new Plant();
                            myPlant2 -> setVariety("Orchidée");
                            myPlant2 -> setState("Bonne état");
                            myPlant2 -> setPV(20);
                            myPlant2 -> setHydratation(10);
                            botanist -> setDollars(-150);
                            nbPlantes += 1;

                        }

                        else if(plantTypeBought == 3 && botanist -> getDollars() >= 250){

                            Plant * myPlant2 = new Plant();
                            myPlant2 -> setVariety("Plante Cobra");
                            myPlant2 -> setState("Bonne état");
                            myPlant2 -> setPV(30);
                            myPlant2 -> setHydratation(10);
                            botanist -> setDollars(-250);
                            nbPlantes += 1;
                        }

                    }

                    
                    
                }

                else if (buyChosen == 2 & botanist -> getDollars() >= 100){

                    cout << "Vous achetez un sac d'engrais pour 100 Botanic Dollars !" << endl;
                    botanist -> setDollars(-100);
                    botanist -> setEngrais(+1);
                    actionLeft -= 1;
                    
                }


            }

            else if (actionChosen == 2){

                int plantAction = 0;

                    cout << "Que souhaitez-vous faire :" << endl;
                    cout << "Engrais : " << botanist -> getEngrais() << endl;
                    cout << "" << endl;

                    cout << "1) Arroser une plante" << endl;
                    cout << "2) Tailler une plante" << endl;
                    cout << "3) Mettre de l'engrais" << endl;
                    cout << "" << endl;

                    cin >> plantAction;

                    if (plantAction == 1){

                        myPlant1 -> setHydratation(+2); //augmente l'hydratation de la plante

                    }

                    
                    else if (plantAction == 2){

                        myPlant1 -> setTaille(+1);

                        if(myPlant1 -> getTaille() > 10){
                            cout << "La plante dit 'aïe'." << endl; // Fait des dégats à la plante quand la taille de celle-ci dépasse 10
                            myPlant1 -> setPV(-3);

                        }

                    }

                    else if (plantAction == 3){

                        myPlant1 -> enraisGiven(+1);


                    }



            }

            else if (actionChosen == 3){

                if (nbPlantes == 1){

                    cout << "Voici votre plante :" << endl;

                    cout << "La première, est une plante  " << myPlant1 -> getVariety() << endl;
                    cout << "C'est une plante de la catégorie " << myPlant1 -> getType() << endl;
                    cout << "Celle-ci est en " << myPlant1 -> getState() << endl;
                    cout << "" << endl;
                    cout << "En voici les raisons :" << endl;
                    cout << "PV : " << myPlant1 -> getPV() << endl;
                    cout << "Hydratation : " << myPlant1 -> getHydratation() << endl;

                };

                // if (nbPlantes == 2){

                //     cout << "Voici vos plantes :" << endl;

                //     cout << "La première, est une plante  " << myPlant1 -> getVariety() << endl;
                //     cout << "C'est une plante de la catégorie " << myPlant1 -> getType() << endl;
                //     cout << "Celle-ci est en " << myPlant1 -> getState() << endl;
                //     cout << "" << endl;
                //     cout << "En voici les raisons :" << endl;
                //     cout << "PV : " << myPlant1 -> getPV() << endl;
                //     cout << "Hydratation : " << myPlant1 -> getHydratation() << endl;
                //     cout << "" << endl;
                //     cout << "" << endl;

                //     cout << "La seconde, est une plante  " << myPlant2 -> getVariety() << endl;
                //     cout << "C'est une plante de la catégorie " << myPlant2 -> getType() << endl;
                //     cout << "Celle-ci est en " << myPlant2 -> getState() << endl;
                //     cout << "" << endl;
                //     cout << "En voici les raisons :" << endl;
                //     cout << "PV : " << myPlant2 -> getPV() << endl;
                //     cout << "Hydratation : " << myPlant2 -> getHydratation() << endl;

                // };




            }

            else if (actionChosen == 4){

                actionLeft = 0;


            }

            else {
                
                cout << "Choix indisponible. Que faire ?" << endl;
                cout << "1) Faire des emplettes" << endl;
                cout << "2) S'occuper des plantes" << endl;
                cout << "3) Inspecter les plantes" << endl;
                cout << "4) Se reposer (passera au prochain jour)" << endl;

                cin >> actionChosen;


            }


            


        }
        
    cout << "C'est la fin de journée." << endl; // Fin de "tour". Augmente les niveaux et baisse les PV
    
    cout << "" << endl;

    actionLeft = 3;

    if (myPlant1 -> getHydratation() >= 7 && myPlant1 -> getHydratation() <= 10){

        myPlant1 -> setLevel(+2);
        myPlant1 ->setPV(20);
            
    };

    if (myPlant1 -> enraisGiven(1){ //gain de level quand la plante reçoit de l'engrais

        myPlant1 -> setLevel(+3);
        myPlant1 -> engraisGiven(0);

            
    };

    if (myPlant1 -> getHydratation() < 7 || myPlant1 -> getHydratation() > 10){ //diminue la croissance d'une plante quand celle-ci est pas ou trop arrosée

        myPlant1 -> setLevel(+1);
        myPlant1 ->setPV(-5);
            
    };

    if (myPlant1 -> setEclosion() = 1){ // augmente de 200 la valeur d'une plante quand celle ci à éclos

        myPlant1 -> setValue(+200)
            
    };

    if (myPlant1 -> getPV() <= 0){ // trigger la mort d'une plante quand les PV tombe à 0

        myPlant1 -> setDeath(1);
            
    };

    myPlant1 -> setHydratation(-1);


};

