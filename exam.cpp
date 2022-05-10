#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

/*
 * Definir vos nouvelles classes et fonctions ici (a l'exterieur du main)
 */

int main() {


    /*
     * Instructions :
     * Vous coderez tout dans ce fichier (exam.cpp)
     * Vous avez acces a internet durant l'epreuve
     * Il vous est interdit de vous connecter a votre boite email durant l'epreuve
     * ou a Facebook ou tout autre moyen de communication avec les autres etudiants
     * Se connecter a l'un de ces sites sera considere comme une tentative de triche
     * A la fin de l'epreuve, vous m'enverrez par email votre fichier exam.cpp
     * guillaume.delay@sorbonne-universite.fr
     *
     * Le surveillant ne repondra a aucune question concernant le sujet
     * Cette epreuve durera 1h30 (2h pour les etudiants disposant d'un tiers temps)
     *
     *
     * La question 1 est independante des autres.
     * Les questions 3 et 4 requierent la question 2.
     *
     * Je me reserve le droit d'enlever un point par erreur de compilation
     *
     * Bareme indicatif : ~5pts par question (peut etre legerement adapte)
     */


    /*
     * Question 1 : Ecrire un code qui declare un entier "a" et l'initialise avec la valeur 5
     * Declarer un pointeur "p_a" et stocker l'adresse de "a" dans ce pointeur
     * Multiplier la valeur de "a" par 4 en utilisant uniquement le pointeur (interdiction d'utiliser la variable "a")
     * Declarer un deuxieme pointeur "p_b" (pointant sur un entier)
     * Allouer de la memoire pour un entier et la stocker dans "p_b" (utiliser obligatoirement "new") 
     * Stocker la valeur de "a" dans la memoire associee a "p_b" (ne pas changer l'adresse memoire mais la valeur ecrite sur cette adresse)
     * Mettre a zero la valeur entiere stockee sur la memoire du pointeur "p_b"
     * Ecrire dans le terminal la valeur de "a" et la valeur ecrite sur la memoire de "p_a" et "p_b"
     * Indice : la valeur ecrite sur "p_a" doit etre la valeur de "a" et doit valoir 20,
     *          la valeur ecrite sur "p_b" doit valoir 0
     */

    {
        cout << "Question 1 :" << endl;
        cout << endl;
    }


    /*
     * Question 2 : definir une classe "Complexe" qui represente des nombres complexes avec des parties reelle et imaginaire entieres 
     * Cette classe contient :
     * - deux membres prives x et y (int) correspondant a la partie relle et imaginaire de ce nombre
     * (on insite sur le fait que ces membres doivent etre prives)
     * on codera les methodes suivantes (toutes publiques) :
     * - un constructeur prenant deux int (partie reelle et partie imaginaire)
     * - un constructeur par defaut generant le complexe 0
     * - une methode CalculConjugue renvoyant le conjugue de ce complexe
     * - une methode Conjuguer qui change la valeur de ce complexe pour son conjugue
     * - une fonction permettant d'ecrire un complexe "c" dans le terminal a partir de la commande "cout << c << endl;"
     * (cette derniere methode n'est pas necessaire pour les deux questions suivantes)
     *
     * Ci-dessous quelques tests :
     */

    {
        cout << "Question 2 :" << endl;

        // Complexe c0;
        // Complexe c1(1,3);

        // cout << "c0 = " << c0 << endl; // doit renvoyer "0" ou "0 + 0i"
        // cout << "c1 = " << c1 << endl; // doit renvoyer "1 + 3i"
        // cout << "Le conjugue de c1 est : " << c1.CalculConjugue() << endl; // doit renvoyer "1 - 3i" ou "1 + -3i"

        // c1.Conjuguer();
        // cout << "c1 = " << c1 << endl; // doit renvoyer "1 - 3i" ou "1 + -3i"

        cout << endl;
    }

    /*
     * Question 3 : Completer la classe "Complexe" de la question precedante avec les methodes suivantes :
     * - calcul de l'addition de deux complexes
     * - calcul de la soustraction entre deux complexes
     * - calcul de la multiplication entre deux complexes
     *
     * Ci-dessous quelques tests :
     */

    {
        cout << "Question 3 :" << endl;

        // Complexe a(2,3);
        // Complexe b(5,-2);

        // cout << "a + b = " << a+b << endl; // doit renvoyer "7 + i" ou "7 + 1i"
        // cout << "a - b = " << a-b << endl; // doit renvoyer "-3 + 5i"
        // cout << "a * b = " << a*b << endl; // doit renvoyer "16 + 11i"

        cout << endl;
    }


    /*
     * Question 4 : Reprendre la classe "Complexe" de la question 2
     * Ajouter un operateur d'ordre sur cette classe, on procedera comme suit :
     * - si Re(a) < Re(b) alors a < b
     * - si Re(a) = Re(b) et Im(a) < Im(b) alors a < b
     * - si Re(a) = Re(b) et Im(a) = Im(b) alors a = b
     * (Re represente la partie reelle et Im la partie imaginaire)
     *
     * En utilisant un algorithme present dans la STL, classer les complexes suivants :
     * 1+i, 1-i, 2+5i, 3-i, 2+i, 2-i
     * On les affichera dans le terminal pour verifier qu'ils sont bien classes
     */

    {
        cout << "Question 4 :" << endl;
        cout << endl;
    }


    cout << "end prog" << endl;

    return 1;
}
