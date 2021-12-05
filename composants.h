#pragma once
#include <iostream>
using namespace std;
namespace composants{

/// <summary>
//////////////////////////////////////
/// </summary>
class Client : public Personne { 
private:
	string datenaissance;
	string firstpurshase;
	string adresselivraison;
	string adressefacturation;
public:
	Client(string aDatenaissance, string aFirstpurshase, string aAdresselivraison, string aAdressefacturation) {
		datenaissance = aDatenaissance;
		firstpurshase = aFirstpurshase;
		adresselivraison = aAdresselivraison;
		adressefacturation = aAdressefacturation;
	}
	void setdatenaissance(string aDatenaissance) {
		datenaissance = aDatenaissance;
	}
	string getdatenaissance() {
		return datenaissance;
	}
	void setfirstpurshase(string aFirstpurshase) {
		firstpurshase = aFirstpurshase;
	}
	string getfirstpurshase() {
		return firstpurshase;
	}
	void setadresselivraison(string aAdresselivraison) {
		adresselivraison = aAdresselivraison;
	}
	string getadresselivraison() {
		return adresselivraison;
	}
	void setadressefacturation(string aAdressefacturation) {
		adressefacturation = aAdressefacturation;
	}
	string getadressefacturation() {
		return adressefacturation;
	}

};

/// <summary>
/// //////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
class Personne { 
private:
	string nomClient;
	string prenomClient;
	int IDclient;
public:
	Personne(string aNomClient, string aPrenomClient, int aID) {
		nomClient = aNomClient;
		prenomClient = aPrenomClient;
		IDclient = aID;

	}
	void setnomClient(string aNomClient) {
		nomClient = aNomClient;
	}
	string getnomClient() {
		return nomClient;
	}
	void setprenomClient(string aPrenomClient) {
		prenomClient = aPrenomClient;
	}
	string getprenomClient() {
		return prenomClient;
	}
	void setIDclient(int aIDclient) {
		IDclient = aIDclient;
	}
	int getIDclient() {
		return IDclient;
	}

};
/// <summary>
/// ////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
class Personnel : public Personne{
private :
	string superieur;
	string date_embauche;
	string adressePersonnel;
public : 
	Personnel(string aSuperieur,string aDate_embauche,string aAdressePersonnel) {
		superieur = aSuperieur;
		date_embauche = aDate_embauche;
		adressePersonnel = aAdressePeersonnel;
	}
	void setsuperieur(string aSuperieur) {
		superieur = aSuperieur;
	}
	string getsuperieur() {
		return superieur;
	}
	void setdate_embauche(string aDate_embauche) {
		date_embauche = aDate_embauche;
	}
	string getdate_embauche() {
		return date_embauche;
	}void setadressePersonnel(string aAdressePersonnel) {
		adressePersonnel = aAdressePersonnel;
	}
	string getadressePersonnel() {
		return adressePersonnel;
	}
};
/// <summary>
/// ////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
class Article {
private :
	string nomArticle;
	int qtArticle;
	string RefArticle;
	int prixHT;
	int prixTVA;
	int seuil;
	string nature_article;
	int prixAchat;
public :
	Article(string aNomArticle, int aQtArticle, string aRefArticle, int aPrixHT, int aPrixTVA, int aSeuil, string aNature_article, int aPrixAchat) {
		nomArticle = aNomArticle;
		qtArticle = aQtArticle;
		RefArticle = aRefArticle;
		prixHT = aPrixHT;
		prixTVA = aPrixTVA;
		seuil = aSeuil;
		nature_article = aNature_article;
		prixAchat = aPrixAchat;

	}
	void setnomArticle(string aNomArticle) {
		nomArticle = aNomArticle;
	}
	string getnomArticle() {
		return nomArticle;
	}

	void setRefArticle(string aRefArticle) {
		RefArticle = aRefArticle;
	}
	string getRefArticle() {
		return RefArticle;
	}

	void setnature_article(string aNature_article) {
		nature_article = aNature_article;
	}
	string getnature_article() {
		return nature_article;
	}

	void setqtArticle(int aQtArticle) {
		qtArticle = aQtArticle;
	}
	int getqtArticle() {
		return qtArticle;
	}

	void setprixHT(int aPrixHT) {
		prixHT = aPrixHT;
	}
	int getprixHT() {
		return prixHT;
	}

	void setprixTVA(int aPrixTVA) {
		prixTVA = AprixTVA;
	}
	int getprixTVA() {
		return prixTVA;
	}

	void setseuil(int aSeuil) {
		seuil = aSeuil;
	}
	int getseuil() {
		return seuil;
	}

	void setprixAchat(int aPrixAchat) {
		seuil = aPrixAchat;
	}
	int getprixAchat() {
		return prixAchat;
	}
};
/// <summary>
/// ////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
class Paiement {
private : 
	int numPaiement;
	bool tranche;
	int nbTranche;
	int montant_tranche;
	string moyen_paiement;
	string date_paiement;
public :
	Paiement(int aNumPaiement, bool aTranche, int aNbTranche, int aMontant_tranche, string aMoyen_paiement, string aDate_paiement) {
		numPaiement = aNumPaiement;
		tranche = aTranche;
		nbTranche = aNbTranche;
		montant_tranche = aMontant_tranche;
		moyen_paiement = aMoyen_paiement;
		date_paiement = aDate_paiement;

	}

	void setnumPaiement(int aNumPaiement) {
		numPaiement = aNumPaiement;
	}
	int getnumPaiement() {
		return numPaiement;
	}

	void settranche(int aTranche) {
		tranche = aTranche;
	}
	bool gettranche() {
		return tranche;
	}

	void setnbTranche(int aNbTranche) {
		nbTranche = aNbTranche;
	}
	int getnbTranche() {
		return nbTranche;
	}

	void setmontant_tranche(int aMontant_tranche) {
		montant_tranche = aMontant_tranche;
	}
	int getmontant_tranche() {
		return montant_tranche;
	}

	void setmoyen_paiement(int aMoyen_paiement) {
		montant_tranche = aMoyen_paiement;
	}
	string getmoyen_paiement() {
		return moyen_paiement;
	}

	void setdate_paiement(int aDate_paiement) {
		date_paiement = aDate_paiement;
	}
	string getdate_paiement() {
		return date_paiement;
	}

	/*void setAttribute(string aAttribute) {
		Attribute = aAttribute;
	}                                               \\\\\ Verifier car non existant au niveau des attributs
	string getAttribute() {
		return Attribute;
	}*/

};


}
/*void setAttribute(string aAttribute) {
		Attribute = aAttribute;
	}                                               \\\\\ Verifier car non existant au niveau des attributs
	string getAttribute() {
		return Attribute;
	}*/
