//Fonctions réalisées par l'étudiant 1 :

/////////////////////////
// FONCTION estMajeur //
///////////////////////

bool estMajeur(int age)
{
    if(age >= 18) {
        return true;
    } else {
        return false;
    }
}

////////////////////////
// FONCTION exposant //
//////////////////////

int exposant(int nbre, int exp)
{
   int resultat;

	resultat = pow(nbre, exp);
  
	return resultat;
}

///////////////////
// FONCTION TVA //
/////////////////

float TVA(int prix)
{
    float prix_ttc = prix * 1.196f;
    return prix_ttc; 
}

/////////////////////////
// FONCTION plusGrand //
///////////////////////

int plusGrand(int a, int b, int c)
{
    int max=a;

    if(b > max)
    {
        max = b;
    }

    if(c > max)
    {
        max = c;
    }

    return max;
}

//Fonctions réalisées par l'étudiant 2 :










//Fonctions réalisées par l'étudiant 3 :
