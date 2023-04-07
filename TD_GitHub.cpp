//Fonctions réalisées par l'étudiant 1 :

bool estMajeur(int age)
{
    if(age >= 18) {
        return true;
    } else {
        return false;
    }
}

int exposant(int nbre, int exp)
{
   int resultat;

	resultat = nbre * exp;
  
	return resultat;
}

float TVA(int prix)
{
    float prix_ttc = prix * 1.196f;
    return prix_ttc; 
}

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
