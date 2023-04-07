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
bool estPair(int nb)
{
    int x;
    x = nb % 2 == 0;
    if(x==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sommeNombre(int x) 
{
    int somme = 0;
    for (int i = x; i >= 1; i--) 
    {
        somme += i;
    }
    return somme;
}


double salaireNet(double salaireBrut) 
{
  double chargesSalariales = salaireBrut * 0.23;
  double salaireNet = salaireBrut - chargesSalariales;
  return salaireNet;
}

int plusPetit(int a, int b, int c) 
{
  int plusPetit = a;
  if (b < plusPetit) 
  {
    plusPetit = b;
  }
  if (c < plusPetit) 
  {
    plusPetit = c;
  }
  return plusPetit;
} 



//Fonctions réalisées par l'étudiant 3 :
